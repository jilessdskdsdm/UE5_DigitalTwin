
#pragma once

#include "CoreMinimal.h"
#include "DigitalTwin/Data/Structure.h"
#include "GameFramework/Actor.h"
#include "LayerButtons.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLayerButtonClicked, ALayerButtons*, Button, const FLayerData&, Data);

class UMaterialInterface;

UCLASS()

class DIGITALTWIN_API ALayerButtons : public AActor
{
	GENERATED_BODY()

public:
	ALayerButtons();
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Component")
	class UStaticMeshComponent* ButtonMesh;

	
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnHoverBegin(UPrimitiveComponent* TouchedComponent);

	UFUNCTION()
	void OnHoverEnd(UPrimitiveComponent* TouchedComponent);

	UPROPERTY(BlueprintAssignable, Category = "Event")
	FOnLayerButtonClicked OnLayerButtonClicked;
	
	

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ButtonData", meta = (AllowPrivateAccess = "true",DisplayPriority = 0))
	TSoftObjectPtr<UMaterialInterface> NoShowMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ButtonData", meta = (AllowPrivateAccess = "true",DisplayPriority = 0))
	TSoftObjectPtr<UMaterialInterface> DefaultMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ButtonData", meta = (AllowPrivateAccess = "true",DisplayPriority = 0))
	TSoftObjectPtr<UMaterialInterface> HoveredMaterial;

	

	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ButtonData", meta = (AllowPrivateAccess = "true",DisplayPriority = 0))
	FLayerData LayerData = FLayerData();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ButtonData", meta = (AllowPrivateAccess = "true",DisplayPriority = 0))
	TObjectPtr<UClass> SpawnObject = nullptr;
	
	UFUNCTION(BlueprintCallable, Category = "HouseButton")
	void SpawnHouseButton(const float VerticalSpacing,const float NumFloors);

	UFUNCTION(BlueprintCallable, Category = "HouseButton")
	void OnButtonClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "ViewHouseData")
	class AViewLayerHouse* ViewHouse;
	
	

};
