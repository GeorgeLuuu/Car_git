// Fill out your copyright notice in the Description page of Project Settings.


#include "Radar.h"

#include "Car/Util/RandomEngine.h"


#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Core/Public/Async/ParallelFor.h"
#include "Physics/PhysScene_PhysX.h"
#include "DrawDebugHelpers.h" // ���ڻ��Ƶ�����

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

	FHitResult OutHit; // ����Ҫ����һ��FHitResult����������ֵ
	FVector RadarLocation = GetActorLocation(); // ��ȡ�״��λ��
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
	//������һ��ת��ϵ����������ת��Ϊ��   �������ͨ��ʹ��������Ϊ���ȵ�Ĭ�ϵ�λ

	const TWeakObjectPtr<AActor> HittedActor = OutHit.GetActor();

	//���м����״���еĽ�ɫ
	const FVector TargetVelocity = HittedActor->GetVelocity();
	//������⵽����Ա���ٶ�
	const FVector TargetLocation = OutHit.ImpactPoint;
	//��ȡ�״����߻���Ŀ���ȷ��λ��
	const FVector Direction = (TargetLocation - RadarLocation).GetSafeNormal();
	//������״�λ�õ�Ŀ������λ�õĹ�һ������ʸ��
	const FVector DeltaVelocity = (TargetVelocity - CurrentVelocity);
	//����Ŀ����״�֮����ٶȲ�
	const float V = TO_METERS * FVector::DotProduct(DeltaVelocity, Direction);


	return V;
	//�շ��ؼ�����������
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
	//��������ṩ��һ���꣬���ڶԴ���ִ�н�������
	constexpr float TO_METERS = 1e-2;
	//constexpr �ؼ��ֱ�ʾ������ֵ�����ڱ���ʱ���㡣�����������Ϳ�������Ҫ����ʱ�������ʽ����������ʹ��
	const FTransform& ActorTransform = GetActorTransform();
	const FRotator& TransformRotator = ActorTransform.Rotator();
	const FVector& RadarLocation = GetActorLocation();
	const FVector& ForwardVector = GetActorForwardVector();

	const FVector TransformXAxis = ActorTransform.GetUnitAxis(EAxis::X);
	const FVector TransformYAxis = ActorTransform.GetUnitAxis(EAxis::Y);
	const FVector TransformZAxis = ActorTransform.GetUnitAxis(EAxis::Z);
	//�⼸�д����actor�ı任����ȡ��������ϵ�����ߣ�������洢�ڵ�����ʸ����

	// Maximum radar radius in horizontal and vertical direction
	const float MaxRx = FMath::Tan(FMath::DegreesToRadians(HorizontalFOV * 0.5f)) * Range;
	const float MaxRy = FMath::Tan(FMath::DegreesToRadians(VerticalFOV * 0.5f)) * Range;

	const int NumPoints = (int)(PointsPerSecond * DeltaTime);

	const FColor RedColor(255, 0, 0);
	const FColor GreenColor(0, 255, 0);


	//����ˮƽ�ӳ��ǡ����к����Լ������ķ�Χֵ�������״�ģ���״����ߵ����ɨ�跶Χ

	//UE_LOG(LogTemp, Warning, TEXT("PointsPerSecond is��%d"), PointsPerSecond);
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
		// �ں��ʵ�λ��������´��룬�Դ�ӡEndLocation��RadarLocation��ֵ������̨
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
			//Rays[idx].AzimuthAndElevation.X,  // ��λ��
			//Rays[idx].AzimuthAndElevation.Y   // ����
		//);


		FColor LineColor = Hitted ? RedColor : GreenColor;

		DrawDebugLine(
			GetWorld(),
			RadarLocation,
			EndLocation,
			LineColor,  // ʹ��ѡ�����ɫ
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
