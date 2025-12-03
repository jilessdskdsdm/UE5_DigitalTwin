// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DigitalTwin/Data/Enumeration.h"
#include "DigitalTwin/UserWidget/InsertionImage.h"
#include "MainMenuButtonBackground.generated.h"

/**
 * 
 */

class UMainMenuButton;
class UBorder;
class UVerticalBox;
class UHorizontalBox;
class UCanvasPanel;

UCLASS()
class DIGITALTWIN_API UMainMenuButtonBackground : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget), BlueprintReadWrite,Category="MainMenuButtonBackground")
	UInsertionImage* Background;
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite,Category="MainMenuButtonBackground")
	UVerticalBox* VerticalBox;
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite,Category="MainMenuButtonBackground")
	UCanvasPanel* ButtonCanvasPanel;
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite,Category="MainMenuButtonBackground")
	UHorizontalBox* HorizontalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MainMenuButtonBackground")
	EMenuLayoutDirection Direction;
	
	UFUNCTION()
	void SetLayoutDirection(EMenuLayoutDirection LayoutDirection);
	UFUNCTION()
	void AddButtonToLayout(UMainMenuButton* Button, EMenuLayoutDirection LayoutDirection, bool bReverseOrder = false);
	UFUNCTION()
	void SetButtonSpacing(float Spacing, EMenuLayoutDirection LayoutDirection);
	UFUNCTION()
	void SetBackgroundBrush(UTexture2D* Texture,float BackgroundSize);
	UFUNCTION()
	void SetAnchorAndOffset(FVector2D Anchor, FVector2D Offset, FVector2D InOffset);

	
};