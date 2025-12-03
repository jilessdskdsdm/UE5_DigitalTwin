#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "DigitalTwin/Data/Structure.h"
#include "CustomButton.generated.h"

UCLASS()
class DIGITALTWIN_API UCustomButton : public UButton
{
	GENERATED_BODY()
	
public:
	UCustomButton();

	// 当前选中的按钮（静态）
	static UCustomButton* CurrentlySelectedButton;

	// 外部配置的按钮样式
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	FButtonStyles ButtonStyles;

	// 当前是否选中
	UPROPERTY(BlueprintReadOnly, Category = "State")
	bool bIsSelected = false;

	// 设置选中状态
	UFUNCTION(BlueprintCallable, Category = "MenuButton")
	void SetSelected(bool bSelected);

	// 手动刷新按钮外观
	UFUNCTION(BlueprintCallable, Category = "MenuButton")
	void UpdateButtonDisplay();

	// 检查贴图是否有效
	UFUNCTION(BlueprintCallable, Category = "Button")
	bool AreTexturesValid() const;

protected:
	virtual void SynchronizeProperties() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	UFUNCTION()
	void OnSelfClicked();
};
