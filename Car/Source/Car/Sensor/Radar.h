// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sensor.h"
#include <cstdint>
#include <vector>
#include <cstdio>

#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"

#include "RadarData.h"

#include "Radar.generated.h"

UCLASS(Blueprintable)
class CAR_API ARadar : public ASensor
{
	GENERATED_BODY()

		using FRadarData = carla::sensor::data::RadarData;

	template <typename T>
	static constexpr T Pi() {
		static_assert(std::is_floating_point<T>::value, "type must be floating point");
		return static_cast<T>(3.14159265358979323846264338327950288);
	}

	template <typename T>
	static constexpr T Pi2() {
		static_assert(std::is_floating_point<T>::value, "type must be floating point");
		return static_cast<T>(static_cast<T>(2) * Pi<T>());
	}

public:
	// Sets default values for this actor's properties
//	static FActorDefinition GetSensorDefinition();

	ARadar(const FObjectInitializer& ObjectInitializer);

	//void Set(const FActorDescription& Description) override;




	UFUNCTION(BlueprintCallable, Category = "Radar")
		void SetHorizontalFOV(float NewHorizontalFOV);

	UFUNCTION(BlueprintCallable, Category = "Radar")
		void SetVerticalFOV(float NewVerticalFOV);

	UFUNCTION(BlueprintCallable, Category = "Radar")
		void SetRange(float NewRange);

	UFUNCTION(BlueprintCallable, Category = "Radar")
		void SetPointsPerSecond(int NewPointsPerSecond);

	UFUNCTION(BlueprintCallable, Category = "Radar")
		void SendLineTraces(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Radar")
		void CalculateCurrentVelocity(const float DeltaTime);




	UFUNCTION(BlueprintCallable, Category = "Radar")
		FString ToJsonString() const;




protected:
	// Called when the game starts or when spawned 
	virtual void BeginPlay() override;






	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection")
		float Range;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detection")
		float HorizontalFOV;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detection")
		float VerticalFOV;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detection")
		int PointsPerSecond;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detection")
		float CurrentVehicleSpeed;

	//������һ��float��Ϊ �ĳ�Ա����VerticalFOV �� HorizontalFOV��interger ���� Pointspersecond  �������Է�����������༭������Ϊ��Detection�������

	 // Generate the parameters of the rays in a deterministic way

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//ARadar(const FObjectInitializer& ObjectInitializer);
	//������Ĺ��캯��ARadar,�캯������Ĺ�����������������������һ�����Ͳ���FObjectInitializer����ʼ������



private:

	//void CalculateCurrentVelocity(const float DeltaTime); 

		//void SendLineTraces(float DeltaTime);

	float CalculateRelativeVelocity(const FHitResult& OutHit, const FVector& RadarLocation);


	FRadarData RadarData;

	FCollisionQueryParams TraceParams;

	FVector CurrentVelocity;

	/// Used to compute the velocity of the radar
	FVector PrevLocation;

	float CurrentSpeed;

	struct RayData {
		float Radius; //���߰뾶
		float Angle; //���߽Ƕ�
		bool Hitted; //�Ƿ���ײ
		float RelativeVelocity; // �ٶ�
		FVector2D AzimuthAndElevation; //����
		float Distance; //���߻��о���
	};



	std::vector<RayData> Rays;

};
