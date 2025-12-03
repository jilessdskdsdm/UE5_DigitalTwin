// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DigitalTwin/Data/Structure.h"
#include "GameFramework/Actor.h"
#include "ViewLayerHouse.generated.h"


UCLASS()
class DIGITALTWIN_API AViewLayerHouse : public AActor
{
	GENERATED_BODY()

public:
	AViewLayerHouse();
	virtual void Tick(float DeltaTime) override;

	
protected:
	virtual void BeginPlay() override;


private:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ViewHouseData", meta = (AllowPrivateAccess="true",ExposeOnSpawn = true))
	class ALayerButtons* LayerButton = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ViewHouseData", meta = (AllowPrivateAccess="true",ExposeOnSpawn = true))
	FLayerData LayerData = FLayerData();
	

public:


	
};