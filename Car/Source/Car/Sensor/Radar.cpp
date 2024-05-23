// Fill out your copyright notice in the Description page of Project Settings.


#include "Radar.h"

#include "Car/Util/RandomEngine.h"


#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Core/Public/Async/ParallelFor.h"
#include "Physics/PhysScene_PhysX.h"
#include "DrawDebugHelpers.h" // 用于绘制调试线

#include <cmath>



#include <iostream>


// Sets default values
ARadar::ARadar(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("ARadar Constructed"));
	RandomEngine = CreateDefaultSubobject<URandomEngine>(TEXT("RandomEngine"));
	TraceParams = FCollisionQueryParams(FName(TEXT("Laser_Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = false;

	check(RandomEngine != nullptr);
	UE_LOG(LogTemp, Warning, TEXT("[DBG] ARadar Constructed, %f"), RandomEngine->GetUniformFloat());
}









//void ARadar::Set(const FActorDescription& ActorDescription)
//{
//	Super::Set(ActorDescription);
//	UActorBlueprintFunctionLibrary::SetRadar(ActorDescription, this);
//}

void ARadar::SetHorizontalFOV(float NewHorizontalFOV)
{
	HorizontalFOV = NewHorizontalFOV;
}

void ARadar::SetVerticalFOV(float NewVerticalFOV)
{
	VerticalFOV = NewVerticalFOV;
}

void ARadar::SetRange(float NewRange)
{

	Range = NewRange;
}

void ARadar::SetPointsPerSecond(int NewPointsPerSecond)
{
	PointsPerSecond = NewPointsPerSecond;
	RadarData.SetResolution(PointsPerSecond);
}





// Called when the game starts or when spawned
void ARadar::BeginPlay()
{
	// RandomEngine = CreateDefaultSubobject<URandomEngine>(TEXT("RandomEngine"));

	Super::BeginPlay();

	PrevLocation = GetActorLocation();

}


// Called every frame
void ARadar::Tick(float DeltaTime)

{
	Super::Tick(DeltaTime);


	CalculateCurrentVelocity(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("Current Speed in Tick: %f"), CurrentSpeed);

	//CurrentVehicleSpeed = CurrentSpeed;

	FHitResult OutHit; // 你需要创建一个FHitResult对象并设置其值
	FVector RadarLocation = GetActorLocation(); // 获取雷达的位置
	//float V = CalculateRelativeVelocity(OutHit, RadarLocation);

	//UE_LOG(LogTemp, Warning, TEXT("V in Tick: %f"), V);

	//CurrentVehicleSpeed = CurrentSpeed;



}

void ARadar::CalculateCurrentVelocity(const float DeltaTime)
{

	const FVector RadarLocation = GetActorLocation();
	//const FVector& RadarLocation = this->RadarLocation;

	float vectorLength = FMath::Sqrt(FMath::Pow((RadarLocation.X - PrevLocation.X), 2) + FMath::Pow((RadarLocation.Y - PrevLocation.Y), 2) + FMath::Pow((RadarLocation.Z - PrevLocation.Z), 2));
	CurrentVelocity = (RadarLocation - PrevLocation) / DeltaTime;
	CurrentSpeed = ((vectorLength) * 0.036 / DeltaTime);
	PrevLocation = RadarLocation;
	//_LOG(LogTemp, Warning, TEXT("Current Velocity: %s"), *CurrentVelocity.ToString());

}

FString ARadar::ToJsonString() const
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);

	TArray<TSharedPtr<FJsonValue>> RaysArray;
	for (const RayData& Ray : Rays)
	{
		TSharedPtr<FJsonObject> RayObject = MakeShareable(new FJsonObject);
		RayObject->SetNumberField(TEXT("Radius"), Ray.Radius);
		RayObject->SetNumberField(TEXT("Angle"), Ray.Angle);
		RayObject->SetBoolField(TEXT("Hitted"), Ray.Hitted);
		RayObject->SetNumberField(TEXT("RelativeVelocity"), Ray.RelativeVelocity);
		RayObject->SetNumberField(TEXT("Distance"), Ray.Distance);
		RayObject->SetNumberField(TEXT("Azimuth"), Ray.AzimuthAndElevation.X);
		RayObject->SetNumberField(TEXT("Elevation"), Ray.AzimuthAndElevation.Y);

		RaysArray.Add(MakeShareable(new FJsonValueObject(RayObject)));
	}

	JsonObject->SetArrayField(TEXT("Rays"), RaysArray);

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	return OutputString;
}








float ARadar::CalculateRelativeVelocity(const FHitResult& OutHit, const FVector& RadarLocation)
{
	constexpr float TO_METERS = 1e-2;
	//建立了一个转换系数，从厘米转换为米   虚幻引擎通常使用厘米作为长度的默认单位

	const TWeakObjectPtr<AActor> HittedActor = OutHit.GetActor();

	//该行检索雷达击中的角色
	const FVector TargetVelocity = HittedActor->GetVelocity();
	//检索检测到的演员的速度
	const FVector TargetLocation = OutHit.ImpactPoint;
	//获取雷达射线击中目标的确切位置
	const FVector Direction = (TargetLocation - RadarLocation).GetSafeNormal();
	//计算从雷达位置到目标命中位置的归一化方向矢量
	const FVector DeltaVelocity = (TargetVelocity - CurrentVelocity);
	//计算目标和雷达之间的速度差
	const float V = TO_METERS * FVector::DotProduct(DeltaVelocity, Direction);


	return V;
	//终返回计算出的相对速
}




void ARadar::SendLineTraces(float DeltaTime)
{
	PointsPerSecond = 5;
	SetRange(500.0f);
	SetHorizontalFOV(300.0f);
	SetVerticalFOV(300.0f);
	TRACE_CPUPROFILER_EVENT_SCOPE(ARadar::SendLineTraces);
	FString message = FString::Printf(TEXT("Start SendlineTrace %d"));
	//UKismetSystemLibrary::PrintString(this, *message);
	//虚幻引擎提供的一个宏，用于对代码执行进行剖析
	constexpr float TO_METERS = 1e-2;
	//constexpr 关键字表示变量的值可以在编译时计算。这样，变量就可以在需要编译时常量表达式的上下文中使用
	const FTransform& ActorTransform = GetActorTransform();
	const FRotator& TransformRotator = ActorTransform.Rotator();
	const FVector& RadarLocation = GetActorLocation();
	const FVector& ForwardVector = GetActorForwardVector();

	const FVector TransformXAxis = ActorTransform.GetUnitAxis(EAxis::X);
	const FVector TransformYAxis = ActorTransform.GetUnitAxis(EAxis::Y);
	const FVector TransformZAxis = ActorTransform.GetUnitAxis(EAxis::Z);
	//这几行代码从actor的变换中提取本地坐标系的轴线，并将其存储在单独的矢量中

	// Maximum radar radius in horizontal and vertical direction
	const float MaxRx = FMath::Tan(FMath::DegreesToRadians(HorizontalFOV * 0.5f)) * Range;
	const float MaxRy = FMath::Tan(FMath::DegreesToRadians(VerticalFOV * 0.5f)) * Range;

	const int NumPoints = (int)(PointsPerSecond * DeltaTime);

	const FColor RedColor(255, 0, 0);
	const FColor GreenColor(0, 255, 0);


	//根据水平视场角、正切函数以及给定的范围值，计算雷达模拟雷达射线的最大扫描范围

	//UE_LOG(LogTemp, Warning, TEXT("PointsPerSecond is：%d"), PointsPerSecond);
	// Generate the parameters of the rays in a deterministic way
	Rays.clear();
	Rays.resize(NumPoints);
	//Rays.resize();
	//UE_LOG(LogTemp, Warning, TEXT("NumPoints is: %d"), int(NumPoints));
	//UE_LOG(LogTemp, Warning, TEXT("Ray size: %d"), int(Rays.size()));
	//RandomEngine = CreateDefaultSubobject<URandomEngine>(TEXT("RandomEngine"));


	FCriticalSection Mutex;
	// GetWorld()->GetPhysicsScene()->GetPxScene()->lockRead();


	FPhysScene* PhysScene = GetWorld()->GetPhysicsScene();

	for (int i = 0; i < Rays.size(); i++) {
		//for (int i = 0; i < NumPoints; i++) {
			//FString message_ray_send = FString::Printf(TEXT("Start SendlineTrace send %d"));
			//UKismetSystemLibrary::PrintString(this, *message_ray_send);
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red,TEXT("Ray Tracing"));
		//UE_LOG(LogTemp, Warning, TEXT("[DBG] Ray Tracing"));
		check(RandomEngine != nullptr);
		Rays[i].Radius = RandomEngine->GetUniformFloat();
		//Rays[i].Radius = 8;
		//Rays[i].Angle = RandomEngine->GetUniformFloatInRange(0.0f, ARadar::Pi2<float>());
		Rays[i].Angle = RandomEngine->GetUniformFloatInRange(0.0f, ARadar::Pi<float>());
		Rays[i].Hitted = false;
		//UE_LOG(LogTemp, Warning, TEXT("Ray %d - Radius: %f, Angle: %f, Hitted: %s"), i, Rays[i].Radius, Rays[i].Angle, Rays[i].Hitted ? TEXT("True") : TEXT("False"));

	}
	//print rays


	//PhysScene->GetPxScene()->lockRead();
	// Destructibles are always dynamic or kinematic, and therefore only go into one of the scenes
	//PxScene* PScene = PhysScene;
	//	->GetPxScene();

	for (int32 idx = 0; idx < NumPoints; ++idx) {
		//FString message_ray = FString::Printf(TEXT("Start SendlineTrace visualble %d"));

		//UKismetSystemLibrary::PrintString(this, *message_ray);


		//TRACE_CPUPROFILER_EVENT_SCOPE(ParallelForTask);

		FHitResult OutHit(ForceInit);
		const float Radius = Rays[idx].Radius;
		const float Angle = Rays[idx].Angle;
		//UE_LOG(LogTemp, Warning, TEXT("Current Ray - Radius: %f, Angle: %f"), Radius, Angle);
		float Sin, Cos;
		FMath::SinCos(&Sin, &Cos, Angle);
\
		const FVector EndLocation = RadarLocation + TransformRotator.RotateVector({
			Range,
			MaxRx * Radius * Cos,
			MaxRy * Radius * Sin
			});

		//FString message = FString::Printf(TEXT("Start SendlineTrace %d"));
		//UKismetSystemLibrary::PrintString(this, *message);
		// 在合适的位置添加以下代码，以打印EndLocation和RadarLocation的值到控制台
		//UE_LOG(LogTemp, Warning, TEXT("Range: %f"), Range);
		//UE_LOG(LogTemp, Warning, TEXT("EndLocation: %s"), *EndLocation.ToString());
		//(LogTemp, Warning, TEXT("RadarLocation: %s"), *RadarLocation.ToString());



		const bool Hitted = GetWorld()->LineTraceSingleByChannel(
			OutHit,
			RadarLocation,
			EndLocation,
			ECC_GameTraceChannel2,
			TraceParams,
			FCollisionResponseParams::DefaultResponseParam
		);




		Rays[idx].Hitted = Hitted;
		if (Hitted) {
			const TWeakObjectPtr<AActor> HittedActor = OutHit.GetActor();
			if (HittedActor.IsValid()) {
				Rays[idx].Hitted = true;  // This line ensures the ray's Hitted status is updated to true
				Rays[idx].RelativeVelocity = CalculateRelativeVelocity(OutHit, RadarLocation);
				Rays[idx].AzimuthAndElevation = FMath::GetAzimuthAndElevation(
					(EndLocation - RadarLocation).GetSafeNormal() * Range,
					TransformXAxis,
					TransformYAxis,
					TransformZAxis
				);
				Rays[idx].Distance = OutHit.Distance * TO_METERS;
			}
		}

	





		//DrawDebugLine(GetWorld(), RadarLocation, EndLocation, FColor::Green, false, -1, 0, 1);
		//UE_LOG(LogTemp, Warning, TEXT("Ray %d - Azimuth: %f, Elevation: %f"),
			//idx,
			//Rays[idx].AzimuthAndElevation.X,  // 方位角
			//Rays[idx].AzimuthAndElevation.Y   // 仰角
		//);


		FColor LineColor = Hitted ? RedColor : GreenColor;

		DrawDebugLine(
			GetWorld(),
			RadarLocation,
			EndLocation,
			LineColor,  // 使用选择的颜色
			false,
			-1,
			0,
			1
		);



	}




	for (auto& ray : Rays) {
		if (ray.Hitted) {
			RadarData.WriteDetection({
			static_cast<float>(ray.RelativeVelocity),

			static_cast<float>(ray.AzimuthAndElevation.X),
			static_cast<float>(ray.AzimuthAndElevation.Y),
			static_cast<float>(ray.Distance)
				});


		}

	}
}
