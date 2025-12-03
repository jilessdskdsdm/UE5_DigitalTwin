// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InsertionImage.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Widget/MinMapButton.h"
#include "HouseMinMap.generated.h"

/**
 * 
 */
UCLASS()
class DIGITALTWIN_API UHouseMinMap : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "HouseMinMap")
	UInsertionImage* MinMapImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "HouseMinMap")
	UInsertionImage* CameraPosition;
	
	UFUNCTION(BlueprintCallable,Category="MinMap",meta = (DisplayPriority = 1))
	void SetMinMap(UTexture2D* Image,float Size = 1.f);
	

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget),Category="MinMap")
	UCanvasPanel* ButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MinMap",meta = (DisplayPriority = 1))
	TSubclassOf<UMinMapButton> ButtonWidgetClass;

	UFUNCTION(BlueprintCallable, Category="MinMap",meta = (DisplayPriority = 1))
	UMinMapButton* CreateMinMapButton(AMapButton* RelatedMapButton,FVector WorldLocation, FVector MapOrigin, float MapWidth, float MapHeight);

	UFUNCTION(BlueprintCallable, Category="MinMap",meta = (DisplayPriority = 1))
	void UpdateCameraPosition(const FVector& WorldLocation, const FRotator& WorldRotation, const FVector& MapOrigin,
							  float MapWidth, float MapHeight);
protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
};
