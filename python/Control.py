import asyncio
import json
import struct
import socket
from concurrent.futures import ThreadPoolExecutor
import math
from DQN import Agent

# 消息队列
data_queue = asyncio.Queue(maxsize=10)
PATH = [(1130, 14290), (3050.0, 14400.0), (4660.0, 14480.0), (6270.0, 14220.0), (7720.0, 13630.0), (8333.0, 11660.0), (7150.0, 10180.0), (4213.0, 9200.0), (2000.0, 8640.0), (233.0, 7850.0), (-750.0, 5900.0),
        (-647.0, 3250.0), (-750.0, 200.0), (-687.0, -2280.0), (660.0, -3710.0), (3203.0, -3800.0), (4290.0, -1950.0), (4393.0, 3360.0), (4753.0, 5810.0), (6280.0, 7070.0), (8093.0, 6880.0)]

class AbstractCar:
    def __init__(self, writer):
        self.writer = writer

    def send_control(self, control):
        control_json = json.dumps(control)
        control_encoded = control_json.encode('utf-8')
        buffer = struct.pack(">BB", 1, len(control_encoded)) + control_encoded
        self.writer.write(buffer)

    def move_right(self, done):
        control = {'Forward': 1, 'Back': 0, 'Left': 0, 'Right': 1, 'Done': done}
        self.send_control(control)
        print('Moving right')

    def move_left(self, done):
        control = {'Forward': 1, 'Back': 0, 'Left': 1, 'Right': 0, 'Done': done}
        self.send_control(control)
        print('Moving left')

    def move_forward(self, done):
        control = {'Forward': 1, 'Back': 0, 'Left': 0, 'Right': 0, 'Done': done}
        self.send_control(control)
        print('Moving forward')

    def move_backward(self, done):
        control = {'Forward': 0, 'Back': 1, 'Left': 0, 'Right': 0, 'Done': done}
        self.send_control(control)
        print('Moving backward')



class ComputerCar(AbstractCar):
    def __init__(self, writer, path=[]):
        super().__init__(writer)
        self.path = path
        self.to_target = False
        self.is_finished = False
        self.is_collide = False
        self.cumulated_rewards = 0
        self.dist_ls = [[0, 0], [0, 0]]
        self.idx = 0
        self.current_point = 0
        self.cx = -1310
        self.cy = 14090
        self.angle = 0

    def update_state(self, data):
        #print("update_state: entering")
        self.cx = data['x']
        self.cy = data['y']
        self.angle = data['yaw']
        self.is_collide = data['hitted']
        self.update_path_point()
        #print("update_state: exiting")

    def calculate_dist(self):
        if self.current_point >= len(self.path):
            self.is_finished = True
            return

        target_x, target_y = self.path[self.current_point]
        x_diff = target_x - self.cx
        y_diff = target_y - self.cy

        if self.idx >= 5:
            self.dist_ls[0][0] = self.dist_ls[1][0]
            self.dist_ls[0][1] = self.dist_ls[1][1]
            self.dist_ls[1][0] = x_diff
            self.dist_ls[1][1] = y_diff
            self.idx = 0
        self.idx += 1

        if self.current_point > 0:
            A_x, A_y = self.path[self.current_point - 1]
        else:
            A_x, A_y = -2710.0, 13940.0
        B_x, B_y = self.path[self.current_point]
        C_x = self.cx
        C_y = self.cy

        dc_x = B_x - A_x
        dc_y = B_y - A_y
        db_x = C_x - A_x
        db_y = C_y - A_y

        cross_prdct = db_x * dc_y - db_y * dc_x
        direction = 1 if cross_prdct > 0 else (-1 if cross_prdct < 0 else 0)
        self.direc = direction

        c = math.sqrt(dc_x ** 2 + dc_y ** 2)
        b = math.sqrt(db_x ** 2 + db_y ** 2)
        theta = math.acos((dc_x * db_x + dc_y * db_y) / (b * c))

        dev = abs(b * math.sin(theta))

        if dc_y != 0:
            phi = math.atan(dc_x / dc_y) * 180 / math.pi
            phi = phi if dc_y < 0 else (180 - abs(phi) if dc_x < 0 else -180 + abs(phi))
        else:
            phi = 90 if dc_x < 0 else -90

        beta = self.angle - phi
        if beta > 180 or beta < -180:
            beta = 360 - abs(beta) if phi >= 0 else abs(beta) - 360

        return beta, dev, direction

    def __get_rewards(self):
        beta, dev, direction = self.calculate_dist()
        dist_0 = math.sqrt(self.dist_ls[0][0] ** 2 + self.dist_ls[0][1] ** 2)
        dist_1 = math.sqrt(self.dist_ls[1][0] ** 2 + self.dist_ls[1][1] ** 2)
        ddist = dist_1 - dist_0

        rewards = dev * 0.3 - 0.05 * abs(beta) - 1 / (ddist * 10 + 200)
        rewards = rewards if dev < 2 else -dev * 0.3 - 0.05 * abs(beta) - 1 / (ddist * 10 + 200)
        rewards = 1300 if self.to_target and self.current_point > 7 else (800 if self.to_target else rewards)
        rewards -= 2000 if self.is_collide else 0

        if self.to_target:
            if self.current_point > 7:
                rewards = 1300
            else:
                rewards = 800
        print(f"Rewards: {rewards}, Beta: {beta}, Dev: {dev}, Direction: {direction}")

        return rewards, beta, dev, direction

    def step(self, keys):
        print(f"Step - Entered with keys: {keys}")
        reward, beta, dev, direction = self.__get_rewards()
        self.cumulated_rewards += reward/100
        print(self.cumulated_rewards<5000)
        print(self.is_finished)

        done = self.cumulated_rewards < -1000 or self.is_finished
        if done:
            self.cumulated_rewards = 0
        if keys == 0:
            self.move_left(done)
        elif keys == 1:
            self.move_right(done)

        print(f"Step - Reward: {reward}, Cumulated Rewards: {self.cumulated_rewards}, Done: {done}")

        return [beta, dev, direction], reward, done

    def update_path_point(self):
        to_target = False
        if self.current_point >= len(self.path) - 1:
            self.is_finished = True
            return

        target_x, target_y = self.path[self.current_point]
        if abs(self.cx - target_x) <= 200 and abs(self.cy - target_y) <= 200:
            self.current_point += 1
            self.to_target = True
        else:
            self.to_target = False
        self.to_target = to_target



async def handle_client(reader, writer):
    await recv_data(reader, writer)

async def recv_data(reader, writer):
    data_accumulator = bytearray()
    try:
        while True:
            data = await reader.read(1024)
            if not data:
                break

            data_accumulator += data
            start_index = data_accumulator.find(b'{')
            end_index = data_accumulator.find(b'\r\n\t]\r\n}')

            if start_index != -1 and end_index != -1:
                try:
                    decoded_data = data_accumulator[start_index:end_index+12].decode('utf-8')
                    data_dict = json.loads(decoded_data)
                    
                    # 只保留最新的位置数据
                    latest_location = data_dict['Locations'][-1]
                    await data_queue.put((latest_location, writer))
                    
                    data_accumulator = bytearray()
                except json.JSONDecodeError as e:
                    print(f"JSON 解码失败: {e}")
                    data_accumulator = bytearray()
                except Exception as e:
                    print(f"接收数据出错: {e}")
                    data_accumulator = bytearray()
    finally:
        writer.close()

async def start_server():
    server = await asyncio.start_server(handle_client, '', 8080)
    async with server:
        await server.serve_forever()

async def analyze_data(agent):
    car = None
    while True:
        data, writer = await data_queue.get()
        print(f"Analyzing data: {data}")

        if car is None:
            car = ComputerCar(writer, PATH)
        car.update_state(data)

        score = 0
        done = False
        observation = [car.angle, car.cx, car.cy]

        while not done:
            action = agent.choose_action(observation)
            #print(f"Action chosen: {action}")
            observation_, reward, done = car.step(action)
            print(f"Post step - Observation: {observation_}, Reward: {reward}, Done: {done}")
            score += reward
            agent.memory.store_transition(observation, action, reward, observation_, done)

            observation = observation_
            if done or score < -1000:
                break

        #print('Episode finished. Score:', score)
        data_queue.task_done()
        print('Task done. Waiting for next data...')

def main():
    loop = asyncio.get_event_loop()
    executor = ThreadPoolExecutor()

    buffer_size = 50000
    agent = Agent(gamma=0.95, epsilon=0.10, batch_size=100, n_actions=2,
                  eps_end=0.1, input_dims=3, lr=0.001,
                  max_mem_size=buffer_size, combined=False)

    server_task = loop.create_task(start_server())
    analyze_task = loop.create_task(analyze_data(agent))

    loop.run_forever()

if __name__ == "__main__":
    main()
