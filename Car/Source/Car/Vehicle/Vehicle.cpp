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
	Super::BeginPlay(); // ���û���� BeginPlay��ȷ������ĳ�ʼ���߼���ִ��
	PrimaryActorTick.TickInterval = 1.0f;
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AVehicle::TriggerBeginOverLap);
	UE_LOG(LogTemp, Warning, TEXT("Vehicle has started!")); // ʾ������ӡ��־��Ϣ
}


void AVehicle::Tick(float DeltaTime) {
	CurrentSpeed = GetVehicleMovement()->GetForwardSpeed() * 0.036f;
	//UE_LOG(LogTemp, Warning, TEXT("Current Speed in of Vehicle: %f"), CurrentSpeed);

	FVector Position = GetActorLocation();
	//VehicleLocations.push_back({ Position.X, Position.Y });

	//VehicleLocation Location;
	//Location.x = Position.X;  // ��FVector��X�����ṹ���x
	//Location.y = Position.Y;
	//Location.hitted = false; // ��FVector��Y�����ṹ���y

	// �������һ��VehicleLocation��vector�����������µ�λ��
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
	FRotator Rotation = GetActorRotation();  // ��ȡС������ת
	VehicleLocation Location;
	Location.x = Position.X;
	Location.y = Position.Y;
	Location.yaw = Rotation.Yaw;  // ��ȡYaw�Ƕ�
	Location.hitted = false;

	// ������ײ��ѯ����
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	// ���巽�д�С�ͷ���
	FVector BoxExtents = FVector(200, 200, 20);

	// ������ײ���
	FHitResult OutHitResult;
	bool bHasHit = GetWorld()->SweepSingleByChannel(
		OutHitResult,
		Position,
		Position,  // ���ƶ�λ�ã�ֻ��⵱ǰλ��
		FQuat::Identity,
		ECollisionChannel::ECC_Vehicle,
		FCollisionShape::MakeBox(BoxExtents),
		CollisionParams
	);

	// ����������ײ���ķ���
	DrawDebugBox(
		GetWorld(),
		Position,  // ֱ��ʹ��Position������Ҫ�ƶ�
		BoxExtents,
		FQuat::Identity,
		bHasHit ? FColor::Red : FColor::Green,
		false,
		1.0f
	);

	if (bHasHit) {
		Location.hitted = true;
		CollisionCount++;  // ������ײ������

		UE_LOG(LogTemp, Warning, TEXT("Collision Detected with %s"), *OutHitResult.GetActor()->GetName());




		if (CollisionCount >= 10) {  // ��ײ�����ﵽ20��ʱ���¼��عؿ�
			CollisionCount = 0;  // ������ײ������
			FVector NewLocation(-1940.0f, 14070.0f,270.0f);  // �������Ϊ����Ҫ������
			FRotator NewRotation(0.0f, 0.0f, 0.0f);  // �������Ϊ����Ҫ����ת�Ƕ�
			
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

	// �洢λ����Ϣ
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
		LocationObject->SetNumberField(TEXT("yaw"), Location.yaw);  // ���yaw�ֶ�
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
	if (OtherActor && OtherActor != this)  // ȷ���������ص��Ĳ��ǳ����Լ�
	{
		UE_LOG(LogTemp, Warning, TEXT("������ײ����ײ����%s"), *OtherActor->GetName());
	}
}
