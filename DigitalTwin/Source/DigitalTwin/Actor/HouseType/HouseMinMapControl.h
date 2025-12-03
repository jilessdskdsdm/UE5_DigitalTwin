#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HouseMinMapControl.generated.h"

class UHouseMinMap;
class UStaticMeshComponent;
class AMapButton ;
UCLASS()
class DIGITALTWIN_API AHouseMinMapControl : public AActor
{
	GENERATED_BODY()

public:
	AHouseMinMapControl();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

private:


public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MinMapData",meta = (DisplayPriority = 1))
	UTexture2D* HouseMap;

	UPROPERTY()
	UMaterialInstanceDynamic* MapMaterialDynamic;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "MinMapData",meta = (DisplayPriority = 1))
	UMaterialInstance* MapMaterialInstance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MinMapData",meta = (DisplayPriority = 1))
	float MapMappingSize = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MinMapData",meta = (DisplayPriority = 1))
	TSubclassOf<UHouseMinMap> MinMapWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MinMapData",meta = (DisplayPriority = 1))
	UHouseMinMap* MinMapWidgetInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MinMapData",meta = (DisplayPriority = 1))
	TArray<AMapButton *> AllMinMapButton;

	UFUNCTION(BlueprintCallable, Category = "MinMapData",meta = (DisplayPriority = 1))
	void MapToWorld();

	UFUNCTION(BlueprintCallable, Category = "MinMapData",meta = (DisplayPriority = 1))
	void SetMinMap(UTexture2D* Image,float MapSize= 1.f,float MinMapSize= 0.25f);


	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MapMapping;
};
