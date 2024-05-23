// Fill out your copyright notice in the Description page of Project Settings.


#include "Sensor.h"

// Sets default values

// Sets default values
ASensor::ASensor(const FObjectInitializer& ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

}

// Called when the game starts or when spawned
void ASensor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASensor::Tick(float DeltaTime)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(ASensor::Tick);
	Super::Tick(DeltaTime);

}

