// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Car/Util/RandomEngine.h"
#include "Sensor.generated.h"


struct FActorDescription;



UCLASS()
class CAR_API ASensor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY()
		USceneComponent* Root;
	// Sets default values for this actor's properties
	ASensor(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/// Random Engine used to provide noise for sensor output.
	UPROPERTY()
		//	URandomEngine* RandomEngine = nullptr;
		URandomEngine* RandomEngine = nullptr;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
