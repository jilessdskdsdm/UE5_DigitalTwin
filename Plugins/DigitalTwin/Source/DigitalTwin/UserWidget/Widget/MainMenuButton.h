#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DigitalTwin/Data/Structure.h"
#include "MainMenuButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuButtonClicked, class UMainMenuButton*, Button, FString, LevelName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuButtonAgainClicked, class UMainMenuButton*, Button, FString, LevelName);

UCLASS()
class DIGITALTWIN_API UMainMenuButton : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "MainMenuButton")
	class UButton* MMButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "MainMenuButton")
	class UTextBlock* Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenuButton")
	FButtonStyles ButtonStyle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenuButton")
	bool bIsEnableDynamicImage = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenuButton")
	TObjectPtr<UMaterialInterface> NormalMaterial = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenuButton")
	TObjectPtr<UMaterialInterface> PressedMaterial = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	int32 ButtonID= 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenuButton")
	EMenuLayoutDirection Direction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenuButton")
	EMenuIndex ThatLevelMenu = EMenuIndex::OneMenu;

	UPROPERTY(BlueprintReadOnly, Category = "MainMenuButton")
	FString MenuLevelName = "";

	UPROPERTY(BlueprintAssignable, Category = "MainMenuButton")
	FOnMenuButtonClicked OnButtonClicked;
	UPROPERTY(BlueprintAssignable, Category = "MainMenuButton")
	FOnMenuButtonAgainClicked OnButtonAgainClicked;

	UFUNCTION(BlueprintCallable, Category = "MainMenuButton")
	void SetupButton(FString LevelName, const FButtonStyles& Style);

	UFUNCTION(BlueprintCallable, Category = "Button")
	void SetSelected(bool bSelected);

	UFUNCTION(BlueprintCallable, Category = "Button")
	void UpdateButtonDisplay();

	UFUNCTION(BlueprintCallable, Category = "Button")
	void SetShowName();

	UFUNCTION(BlueprintCallable, Category = "Button")
	void UpdateButtonSuspended(bool IsSelected);

	UFUNCTION(BlueprintCallable, Category = "Button")
	FORCEINLINE  bool GetIsSelected() const { return bIsSelected; }

	UFUNCTION(BlueprintCallable, Category = "Button")
	void HandleButtonClick();

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	FSlateSound ClickSound = FSlateSound();

protected:
	virtual void NativeConstruct() override;
	virtual void NativePreConstruct() override;

private:
	bool bIsSelected = false;

};