// Fill out your copyright notice in the Description page of Project Settings.


#include "HouseButtonControl.h"
#include "HouseButton.h"
#include "LayerButtons.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "Kismet/GameplayStatics.h"


AHouseButtonControl::AHouseButtonControl()
{
	PrimaryActorTick.bCanEverTick = true;
}


void AHouseButtonControl::BeginPlay()
{
	Super::BeginPlay();
}

void AHouseButtonControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// 获取场景中的所有户型按钮
TArray<AHouseButton*> AHouseButtonControl::GetAllHouseButton()
{
	TArray<AHouseButton*> Result;
	TArray<AActor*> AllButtonsActor;

	// 获取当前世界中所有 AHouseButton 类型的 Actor
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AHouseButton::StaticClass(), AllButtonsActor);

	// 转换为 AHouseButton 类型
	for (AActor* Actor : AllButtonsActor)
	{
		if (AHouseButton* Button = Cast<AHouseButton>(Actor))
		{
			Result.Add(Button);
		}
	}

	return Result;
}

TArray<ALayerButtons*> AHouseButtonControl::GetAllLayerButton()
{
	
	TArray<ALayerButtons*> Result;
	TArray<AActor*> AllButtonsActor;

	// 获取当前世界中所有 AHouseButton 类型的 Actor
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALayerButtons::StaticClass(), AllButtonsActor);

	// 转换为 AHouseButton 类型
	for (AActor* Actor : AllButtonsActor)
	{
		if (ALayerButtons* Button = Cast<ALayerButtons>(Actor))
		{
			Result.Add(Button);
		}
	}

	return Result;
}


void AHouseButtonControl::DisableAllButtons()
{
	if (GetAllHouseButton().IsEmpty())return;

	for (AHouseButton* Button  :GetAllHouseButton())
	{
		if (!IsValid(Button) || !IsValid(Button->ButtonMesh)) return;
		
		// 启用按钮交互和可见性
		Button->SetActorHiddenInGame(true);
		Button->SetActorEnableCollision(false);
		Button->ButtonMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		Button->ButtonMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);
	}
		
}

void AHouseButtonControl::ActivateCurrentBuildingButton(int32 Number, bool bIsActivate,TArray<AHouseButton*>& HouseButton )
{
	if (GetAllHouseButton().IsEmpty())return;

	if (!HouseButton.IsEmpty())
	{
		HouseButton.Empty();
	}
	for (AHouseButton* Button  :GetAllHouseButton())
	{
		if (!IsValid(Button) || !IsValid(Button->ButtonMesh)) return;

		if (Button->HouseData.Building == Number)
		{
			HouseButton.Add(Button);
			// 启用按钮交互和可见性
			Button->SetActorHiddenInGame(!bIsActivate);
			Button->SetActorEnableCollision(bIsActivate);
			Button->ButtonMesh->SetCollisionEnabled( bIsActivate ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
			Button->ButtonMesh->SetCollisionResponseToChannel(ECC_Visibility, bIsActivate ? ECR_Block : ECR_Ignore);
		}
	}
}
