// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "GameFramework/Actor.h"
#include "MapButton.generated.h"

UCLASS()
class DIGITALTWIN_API AMapButton : public AActor
{
	GENERATED_BODY()

public:
	AMapButton();

	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
