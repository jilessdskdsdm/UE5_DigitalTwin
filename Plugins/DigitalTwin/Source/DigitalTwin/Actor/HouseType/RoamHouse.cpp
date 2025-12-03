// Fill out your copyright notice in the Description page of Project Settings.
#include "RoamHouse.h"


ARoamHouse::ARoamHouse()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;
	MinMapControl = CreateDefaultSubobject<UChildActorComponent>(TEXT("MinMapControl"));
	MinMapControl->SetupAttachment(RootComponent);
	RoamCamera = CreateDefaultSubobject<UChildActorComponent>(TEXT("RoamCamera"));
	RoamCamera->SetupAttachment(RootComponent);
}

void ARoamHouse::BeginPlay()
{
	Super::BeginPlay();
}

void ARoamHouse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

