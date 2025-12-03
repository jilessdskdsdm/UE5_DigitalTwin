// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TimeBar.generated.h"


UCLASS()
class DIGITALTWIN_API UTimeBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UPROPERTY(BlueprintReadWrite,meta = (BindWidget),Category="TimeBar")
	class USlider* S_TimeBar;

	UPROPERTY(BlueprintReadWrite,meta = (BindWidget),Category="TimeBar")
	class UTextBlock* T_CurrentTime;

	UFUNCTION(BlueprintCallable,Category="TimeBar")
	void UpdateTimeBar(float TimeOfDay);
	
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="TimeBar",meta = (DisplayName = "GetCompassDirection", CompactNodeTitle = "CompassDirection"))
	FString GetCompassDirection();
	
	UFUNCTION(BlueprintCallable,Category="TimeBar")
	void SetGameTime(const float& Value,float& Time);
	

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "TimeBar")
	float TimeSpeed;

private:
	float CurrentDisplayTime = 1.0f;      // 当前显示的时间
	float DisplayLerpSpeed = 3.0f;     
	
};
