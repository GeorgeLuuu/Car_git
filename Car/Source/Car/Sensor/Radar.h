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

	//声明了一个float名为 的成员变量VerticalFOV 和 HorizontalFOV，interger 变量 Pointspersecond  将该属性分配给虚幻引擎编辑器中名为“Detection”的类别

	 // Generate the parameters of the rays in a deterministic way

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//ARadar(const FObjectInitializer& ObjectInitializer);
	//明该类的构造函数ARadar,造函数在类的公共部分中声明，并被赋予一个类型参数FObjectInitializer来初始化对象



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
		float Radius; //射线半径
		float Angle; //射线角度
		bool Hitted; //是否碰撞
		float RelativeVelocity; // 速度
		FVector2D AzimuthAndElevation; //？？
		float Distance; //光线击中距离
	};



	std::vector<RayData> Rays;

};
