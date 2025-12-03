// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HouseButtonControl.generated.h"

class AHouseButton;
class ALayerButtons;

UCLASS()
class DIGITALTWIN_API AHouseButtonControl : public AActor
{
	GENERATED_BODY()

public:
	AHouseButtonControl();
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void BeginPlay() override;



public:
	
	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "HouseButton", meta = (CompactNodeTitle = "AllHouseButton"))
	TArray<AHouseButton*> GetAllHouseButton();
	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "HouseButton", meta = (CompactNodeTitle = "AllHouseButton"))
	TArray<ALayerButtons*> GetAllLayerButton();
	
	UFUNCTION(BlueprintCallable, Category = "HouseButton")
	void DisableAllButtons();

	UFUNCTION(BlueprintCallable, Category = "HouseButton")
	void ActivateCurrentBuildingButton(int32 Number ,bool bIsActivate ,TArray<AHouseButton*>& HouseButton);
};
