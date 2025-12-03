// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DigitalTwin/Data/Structure.h"
#include "GameFramework/Actor.h"
#include "RoamHouse.generated.h"

UCLASS()
class DIGITALTWIN_API ARoamHouse : public AActor
{
	GENERATED_BODY()

public:
	ARoamHouse();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	USceneComponent* SceneRoot;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Component")
	UChildActorComponent* MinMapControl;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Component")
	UChildActorComponent* RoamCamera;
	
protected:
	virtual void BeginPlay() override;


private:
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ViewHouseData", meta = (AllowPrivateAccess="true",ExposeOnSpawn = true))
	FHouseData HouseData = FHouseData();
};
