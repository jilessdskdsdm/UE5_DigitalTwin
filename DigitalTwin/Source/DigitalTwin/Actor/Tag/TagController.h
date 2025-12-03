// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TagController.generated.h"


UCLASS()
class DIGITALTWIN_API ATagController : public AActor
{
	GENERATED_BODY()
	
public:
	ATagController();
	virtual void Tick(float DeltaTime) override;
	
protected:
	virtual void BeginPlay() override;
};
