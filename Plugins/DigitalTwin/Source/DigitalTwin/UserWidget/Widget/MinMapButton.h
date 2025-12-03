// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "DigitalTwin/Actor/HouseType/MapButton.h"
#include "MinMapButton.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMinMapButtonClicked, AMapButton*, TargetMapButton);

UCLASS()
class DIGITALTWIN_API UMinMapButton : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="MinMap")
	UButton* B_MMButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MinMap",meta = (DisplayPriority = 1))
	AMapButton* MapButton ;

	// 点击事件（蓝图可绑定）
	UPROPERTY(BlueprintAssignable, Category = "MinMap")
	FOnMinMapButtonClicked OnMinMapButtonClicked;

	UFUNCTION()
	void HandleButtonClick();
	
protected:
	virtual void NativeConstruct() override;
};
