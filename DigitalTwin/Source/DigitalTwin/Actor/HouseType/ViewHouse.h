// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "DigitalTwin/Data/Structure.h"
#include "GameFramework/Actor.h"
#include "ViewHouse.generated.h"



UCLASS()
class DIGITALTWIN_API AViewHouse : public AActor
{
	GENERATED_BODY()

public:
	AViewHouse();
	virtual void Tick(float DeltaTime) override;

	
protected:
	virtual void BeginPlay() override;


private:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ViewHouseData", meta = (AllowPrivateAccess="true",ExposeOnSpawn = true))
	class AHouseButton* HouseButton = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ViewHouseData", meta = (AllowPrivateAccess="true",ExposeOnSpawn = true))
	FHouseData HouseData = FHouseData();
	

public:


	
};
