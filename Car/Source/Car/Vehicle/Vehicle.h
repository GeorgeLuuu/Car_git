// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"

#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Vehicle.generated.h"



class UCameraComponent;
class USpringArmComponent;
/**
 *
 */


USTRUCT(BlueprintType)
struct FVehicleControlData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		float Forward;

	UPROPERTY(BlueprintReadWrite)
		float Back;

	UPROPERTY(BlueprintReadWrite)
		float Left;

	UPROPERTY(BlueprintReadWrite)
		float Right;

	UPROPERTY(BlueprintReadWrite)
		bool Done;

};




UCLASS()
class CAR_API AVehicle : public AWheeledVehiclePawn
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		//UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "CameraComponent")
		UCameraComponent* ExternalCamera;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		//UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "CameraComponent")
		USpringArmComponent* SpringArm;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		float CurrentSpeed;


	bool bHandbraking;

	void MoveForward(float Value);

	void MoveBackward(float Value);

	void MoveRight(float Value);

	void OnHandbrakePressed();

	void OnHandbrakeReleased();

	UFUNCTION(BlueprintCallable, Category = "Control")
	void TriggerBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	float FrontSteerAngle;

public:
	AVehicle();

	void Tick(float DeltaTime);

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;


	UFUNCTION(BlueprintCallable, Category = "Control")
		void UpdateVehicleLocation();




	UFUNCTION(BlueprintCallable, Category = "Control")
		bool ReceiveControlData(const FString& JsonString);

	UFUNCTION(BlueprintCallable, Category = "Control")
		void ApplyControl(const FVehicleControlData& ControlData);

 	UFUNCTION(BlueprintCallable, Category = "Control")
		FString LocationToJsonString() const;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> StaticMeshComponent;


	UPROPERTY(EditAnywhere)
	TObjectPtr<UBoxComponent> BoxComponent;

private:



private:

	struct VehicleLocation {
		float x; // Linear position
		float y; // Angular position
		float yaw; // Vehicle angle
		bool hitted; // Collision status
	};


	std::vector<VehicleLocation> VehicleLocations;

	int CollisionCount;
};
