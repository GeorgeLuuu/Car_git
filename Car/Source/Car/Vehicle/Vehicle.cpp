// Fill out your copyright notice in the Description page of Project Settings.
#include "Vehicle.h"
#include "Camera/CameraComponent.h"
#include "WheeledVehiclePawn.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "JsonObjectConverter.h"


AVehicle::AVehicle() {

	CollisionCount = 0;

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
	SpringArm->TargetOffset = FVector(0.0f, 0.0f, 140.0f);
	SpringArm->TargetArmLength = 600.0f;
	//SpringArm->bEnableCameraRotationLag = true;
	//SpringArm->CameraRotationLagSpeed = 7.0f;





	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMeshComponent -> SetupAttachment(RootComponent);


	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent -> SetupAttachment(StaticMeshComponent);

	ExternalCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ExternalCamera"));
	ExternalCamera->SetupAttachment(SpringArm);

	

}


void AVehicle::BeginPlay()
{
	Super::BeginPlay(); // 调用基类的 BeginPlay，确保基类的初始化逻辑被执行
	PrimaryActorTick.TickInterval = 1.0f;
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AVehicle::TriggerBeginOverLap);
	UE_LOG(LogTemp, Warning, TEXT("Vehicle has started!")); // 示例：打印日志信息
}


void AVehicle::Tick(float DeltaTime) {
	CurrentSpeed = GetVehicleMovement()->GetForwardSpeed() * 0.036f;
	//UE_LOG(LogTemp, Warning, TEXT("Current Speed in of Vehicle: %f"), CurrentSpeed);

	FVector Position = GetActorLocation();
	//VehicleLocations.push_back({ Position.X, Position.Y });

	//VehicleLocation Location;
	//Location.x = Position.X;  // 将FVector的X赋给结构体的x
	//Location.y = Position.Y;
	//Location.hitted = false; // 将FVector的Y赋给结构体的y

	// 如果你有一个VehicleLocation的vector并想添加这个新的位置
	//VehicleLocations.push_back(Location);
	//UE_LOG(LogTemp, Warning, TEXT("Vehicle Location Updated: x = %f, y = %f"), Location.x, Location.y);
}



void AVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &AVehicle::MoveForward);
	PlayerInputComponent->BindAxis(FName("MoveBackward"), this, &AVehicle::MoveBackward);
	PlayerInputComponent->BindAxis(FName("MoveRight"), this, &AVehicle::MoveRight);

	PlayerInputComponent->BindAction(FName("Handbreak"), IE_Pressed, this, &AVehicle::OnHandbrakePressed);
	PlayerInputComponent->BindAction(FName("Handbreak"), IE_Released, this, &AVehicle::OnHandbrakeReleased);
	//PlayerInputComponent->BindAction("SwitchCamera", IE_Pressed, this, &AVehicle::OnToggleCamera);

	
}


#include "DrawDebugHelpers.h"

void AVehicle::UpdateVehicleLocation() {
	FVector Position = GetActorLocation();
	FRotator Rotation = GetActorRotation();  // 获取小车的旋转
	VehicleLocation Location;
	Location.x = Position.X;
	Location.y = Position.Y;
	Location.yaw = Rotation.Yaw;  // 获取Yaw角度
	Location.hitted = false;

	// 设置碰撞查询参数
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	// 定义方盒大小和方向
	FVector BoxExtents = FVector(200, 200, 20);

	// 进行碰撞检测
	FHitResult OutHitResult;
	bool bHasHit = GetWorld()->SweepSingleByChannel(
		OutHitResult,
		Position,
		Position,  // 不移动位置，只检测当前位置
		FQuat::Identity,
		ECollisionChannel::ECC_Vehicle,
		FCollisionShape::MakeBox(BoxExtents),
		CollisionParams
	);

	// 绘制用于碰撞检测的方盒
	DrawDebugBox(
		GetWorld(),
		Position,  // 直接使用Position，不需要移动
		BoxExtents,
		FQuat::Identity,
		bHasHit ? FColor::Red : FColor::Green,
		false,
		1.0f
	);

	if (bHasHit) {
		Location.hitted = true;
		CollisionCount++;  // 增加碰撞计数器

		UE_LOG(LogTemp, Warning, TEXT("Collision Detected with %s"), *OutHitResult.GetActor()->GetName());




		if (CollisionCount >= 10) {  // 碰撞计数达到20次时重新加载关卡
			CollisionCount = 0;  // 重置碰撞计数器
			FVector NewLocation(-1940.0f, 14070.0f,270.0f);  // 将这里改为你需要的坐标
			FRotator NewRotation(0.0f, 0.0f, 0.0f);  // 将这里改为你需要的旋转角度
			
			SetActorLocationAndRotation(NewLocation, NewRotation, false, nullptr, ETeleportType::TeleportPhysics);
			auto MovementComponent = Cast<UChaosWheeledVehicleMovementComponent>(GetVehicleMovementComponent());
			if (MovementComponent)
			{
				MovementComponent->SetThrottleInput(0.0f);
				MovementComponent->SetBrakeInput(0.0f);
				MovementComponent->SetSteeringInput(0.0f);
				MovementComponent->StopMovementImmediately();
			}



			UE_LOG(LogTemp, Warning, TEXT("Vehicle Teleported to New Location: %s and Speed Set to Zero"), *NewLocation.ToString());


			//UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
		}
	}

	// 存储位置信息
	VehicleLocations.push_back(Location);

	UE_LOG(LogTemp, Warning, TEXT("Vehicle Location Updated: x = %f, y = %f, yaw = %f, hitted = %s"), Location.x, Location.y, Location.yaw, Location.hitted ? TEXT("True") : TEXT("False"));
}



bool AVehicle::ReceiveControlData(const FString& JsonString)
{
	FVehicleControlData ControlData;
	if (FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &ControlData, 0, 0))
	{

		ApplyControl(ControlData);
		return true;
	}
	return false;
}




void AVehicle::ApplyControl(const FVehicleControlData& ControlData)
{
	if (ControlData.Done) {
		FVector NewLocation(-1940.0f, 14070.0f, 270.0f);  // Update to the desired coordinates
		FRotator NewRotation(0.0f, 0.0f, 0.0f);  // Update to the desired rotation

		SetActorLocationAndRotation(NewLocation, NewRotation, false, nullptr, ETeleportType::TeleportPhysics);
		auto MovementComponent = Cast<UChaosWheeledVehicleMovementComponent>(GetVehicleMovementComponent());
		if (MovementComponent)
		{
			MovementComponent->SetThrottleInput(0.0f);
			MovementComponent->SetBrakeInput(0.0f);
			MovementComponent->SetSteeringInput(0.0f);
			MovementComponent->StopMovementImmediately();
		}
	}
	else {
		MoveForward(ControlData.Forward - ControlData.Back);
		MoveRight(ControlData.Right - ControlData.Left);
	}
}


FString AVehicle::LocationToJsonString() const {
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	TArray<TSharedPtr<FJsonValue>> LocationsArray;

	for (const VehicleLocation& Location : VehicleLocations) {
		TSharedPtr<FJsonObject> LocationObject = MakeShareable(new FJsonObject);
		LocationObject->SetNumberField(TEXT("x"), Location.x);
		LocationObject->SetNumberField(TEXT("y"), Location.y);
		LocationObject->SetNumberField(TEXT("yaw"), Location.yaw);  // 添加yaw字段
		LocationObject->SetBoolField(TEXT("hitted"), Location.hitted);

		LocationsArray.Add(MakeShareable(new FJsonValueObject(LocationObject)));
	}

	JsonObject->SetArrayField(TEXT("Locations"), LocationsArray);

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	return OutputString;
}



void AVehicle::MoveForward(float Value)
{

	GetVehicleMovementComponent()->SetThrottleInput(Value);

	//PlayEngineSound();
}

void AVehicle::MoveBackward(float Value)
{
	GetVehicleMovementComponent()->SetBrakeInput(Value);
}

void AVehicle::MoveRight(float Value)
{
	FrontSteerAngle = Value;
	GetVehicleMovementComponent()->SetSteeringInput(Value);
}

void AVehicle::OnHandbrakePressed()
{
	UE_LOG(LogTemp, Warning, TEXT("break"));
	GetVehicleMovementComponent()->SetHandbrakeInput(true);
	bHandbraking = true;
}

void AVehicle::OnHandbrakeReleased()
{
	GetVehicleMovementComponent()->SetHandbrakeInput(false);
	bHandbraking = false;
}

void AVehicle::TriggerBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)  // 确保与自身重叠的不是车辆自己
	{
		UE_LOG(LogTemp, Warning, TEXT("发生碰撞！碰撞对象：%s"), *OtherActor->GetName());
	}
}
