// Fill out your copyright notice in the Description page of Project Settings.


#include "MinMapButton.h"

#include "DigitalTwin/Actor/Camera/RoamCamera.h"
#include "Kismet/GameplayStatics.h"

void UMinMapButton::NativeConstruct()
{
	Super::NativeConstruct();
	if (B_MMButton)
	{
		B_MMButton->OnClicked.Clear(); // 防止重复绑定
		B_MMButton->OnClicked.AddDynamic(this, &UMinMapButton::HandleButtonClick);
	}
}

void UMinMapButton::HandleButtonClick()
{
	// 触发委托，将 MapButton 指针传出去
	OnMinMapButtonClicked.Broadcast(MapButton);
	ARoamCamera*  RoamCamera = Cast<ARoamCamera>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (RoamCamera)
	{
		RoamCamera->SpawnedObject->Destroyed();
	}
}