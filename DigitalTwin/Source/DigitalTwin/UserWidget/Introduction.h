// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Introduction.generated.h"



UCLASS()
class DIGITALTWIN_API UIntroduction : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativePreConstruct() override;

	
public:
	UPROPERTY(meta=(BindWidget))
	class UCanvasPanel* CanvasPanel = nullptr;
	UPROPERTY(meta=(BindWidget))
	class UInsertionImage* ImageL;
	UPROPERTY(meta=(BindWidget))
	class UInsertionImage* ImageR;
	
	UFUNCTION(BlueprintCallable,Category="Introduction")
	void GetResolution();
};
