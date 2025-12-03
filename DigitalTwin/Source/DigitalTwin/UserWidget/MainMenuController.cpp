// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuController.h"
#include "DigitalTwin/UserWidget/MainMenu.h"
#include "Blueprint/UserWidget.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"


AMainMenuController::AMainMenuController()
{
	PrimaryActorTick.bCanEverTick = true;
	
}


void AMainMenuController::BeginPlay()
{
	Super::BeginPlay();
	
	if (MainMenuWidgetClass)
	{
		MainMenuInstance = CreateWidget<UMainMenu>(GetWorld(), MainMenuWidgetClass);
		if (MainMenuInstance)
		{
			MainMenuInstance->AddToViewport();
		}
	}
}

void AMainMenuController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

