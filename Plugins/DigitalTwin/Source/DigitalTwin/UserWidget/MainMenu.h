#pragma once

#include "CoreMinimal.h"
#include "TimeBar.h"
#include "Blueprint/UserWidget.h"
#include "Components/PanelWidget.h"
#include "DigitalTwin/Data/Structure.h"
#include "Widget/MainMenuButtonBackground.h"
#include "MainMenu.generated.h"

class UMainMenuButton;


UCLASS()
class DIGITALTWIN_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget),Category="MainMenu")
	UPanelWidget* RootMenuContainer;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget),Category="MainMenu")
	UTimeBar* TimeBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UMGButton")
	TSubclassOf<UMainMenuButton> MainMenuButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu")
	TMap<FString, FMenuLevelConfig> MenuConfigs;

	UFUNCTION(BlueprintCallable, Category="MainMenu")
	UMainMenuButtonBackground* GetBackgroundByKey(const FString& MenuKey) const;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UMGButton")
	FString LastSelectedName;
	
	// 当前这次点击的按钮名（用于辅助记录上一次）
	UPROPERTY()
	FString CurrentSelectedName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu")
	TMap<EMenuIndex, UMainMenuButtonBackground*> LevelToBackgroundWidgetMap;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu")
	TSubclassOf<UMainMenuButtonBackground> MainMenuButtonBackgroundClass;


protected:
	virtual void NativeConstruct() override;

private:
	
	TMap<EMenuIndex, TArray<UMainMenuButton*>> LevelKeyToButtonsMap;
	TMap<EMenuIndex, FString> MenuLevelToSelectedName;
	TMap<EMenuIndex, FVector2D> MenuLevelToButtonPosition;

	FString CurrentMenuKey;

	void PositionButtons(const FMenuLevelConfig& Config, const TArray<UMainMenuButton*>& Buttons);
	void ClearMenusFromLevelIndex(EMenuIndex FromLevel);

public:
	UFUNCTION(BlueprintCallable, Category = "MainMenu")
	void GenerateLevelOneMenu(const FString& MenuKey);

	UFUNCTION(BlueprintCallable, Category = "MainMenu")
	void GenerateMenuByKey(const FString& MenuKey, bool bIsShow );

	UFUNCTION()
	void HandleMenuButtonClick(UMainMenuButton* ClickedButton, FString LevelName);
	
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "MainMenu",meta = (CompactNodeTitle = "FindMenuKey"))
	FString FindMenuKeyByButtonName(const FString& ButtonName);
	
	UFUNCTION(BlueprintCallable, Category = "MainMenu")
	TArray<UMainMenuButton*> GetAllMenuButtons() const;
};