import asyncio
import json
import queue
import threading
import math
import matplotlib.pyplot as plt
from collections import deque
from mpl_toolkits.mplot3d import Axes3D
import time
import struct



# 消息队列
data_queue = queue.Queue()
hit_buffer = deque(maxlen=200)

def spherical_to_cartesian(distance, azimuth, elevation):
    azimuth = math.radians(azimuth)
    elevation = math.radians(elevation)
    x = distance * math.cos(elevation) * math.cos(azimuth)
    y = distance * math.cos(elevation) * math.sin(azimuth)
    z = distance * math.sin(elevation)
    return x, y, z

def plot_hits():
    if len(hit_buffer) > 0:
        fig = plt.figure()
        ax = fig.add_subplot(111, projection='3d')

        for x, y, z in list(hit_buffer):
            ax.scatter(x, y, z, c='r', marker='o')
        plt.show()



def plot_timer():
    while True:
        plot_hits()
        time.sleep(5)  # 每10秒更新一次图形




async def recv_data(reader, writer):
    data_accumulator = bytearray()
    try:
        while True:
            data = await reader.read(1024)  # 异步读取数据
            if not data:
                break

            data_accumulator += data
            # 查找 JSON 数据的开始和结束边界
            start_index = data_accumulator.find(b'{')
            end_index = data_accumulator.find(b'\r\n\t]\r\n}')

            if start_index != -1 and end_index != -1:
                # 尝试解码 JSON 数据
                try:
                    decoded_data = data_accumulator[start_index:end_index+12].decode('utf-8')
                    #print(1)
                    data_dict = json.loads(decoded_data)
                    data_queue.put(data_dict)  # 将解码后的数据放入队列
                    data_accumulator = bytearray()  # 重置累积器以处理新的数据流
                except json.JSONDecodeError as e:
                    print(f"JSON 解码失败: {e}")
                    data_accumulator = bytearray()  # 出现解码错误时重置累积器
                except Exception as e:
                    print(f"接收数据出错: {e}")
                    # 出现异常时，清除累积器以防止错误的数据堆积
                    data_accumulator = bytearray()
    finally:
        writer.close()




# 数据处理线程
def data_processing_thread():
    while True:
        data = data_queue.get()  # 从队列中获取解码后的数据
        if data is None:
            break
        for ray in data['Rays']:
            if ray['Hitted']:
                # 光线击中目标，计算其笛卡尔坐标
                x, y, z = spherical_to_cartesian(ray['Distance'], ray['Azimuth'], ray['Elevation'])
                # 将计算结果添加到缓冲区
                hit_buffer.append((x, y, z))
                print(hit_buffer)
    return hit_buffer





async def main(host, port):
    server = await asyncio.start_server(
        lambda reader, writer: recv_data(reader, writer), 
        host, port)
    async with server:
        await server.serve_forever()

if __name__ == "__main__":
    host, port = '127.0.0.1', 8080

    # 启动数据处理线程
    threading.Thread(target=data_processing_thread, daemon=True).start()


    plot_thread = threading.Thread(target=plot_timer)
    plot_thread.start()

    # 运行异步事件循环
    asyncio.run(main(host, port))
