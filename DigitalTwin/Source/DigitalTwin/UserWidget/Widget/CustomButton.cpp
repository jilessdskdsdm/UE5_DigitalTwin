#include "CustomButton.h"

UCustomButton* UCustomButton::CurrentlySelectedButton = nullptr;

UCustomButton::UCustomButton()
{
	ButtonStyles.ScaleZoom = 1.0f;
	ButtonStyles.PressedColor = FLinearColor::Yellow;
}

void UCustomButton::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	OnClicked.RemoveDynamic(this, &UCustomButton::OnSelfClicked);
	OnClicked.AddUniqueDynamic(this, &UCustomButton::OnSelfClicked);

	UpdateButtonDisplay(); // ✅ 初始化样式
}

#if WITH_EDITOR
void UCustomButton::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCustomButton, ButtonStyles))
	{
		UpdateButtonDisplay();
	}
}
#endif

void UCustomButton::OnSelfClicked()
{
	if (!IsValid(this)) return;

	// 切换选中状态
	if (CurrentlySelectedButton && CurrentlySelectedButton != this && IsValid(CurrentlySelectedButton))
	{
		CurrentlySelectedButton->SetSelected(false);
	}

	bIsSelected = !bIsSelected;
	CurrentlySelectedButton = bIsSelected ? this : nullptr;

	UpdateButtonDisplay();
}

void UCustomButton::SetSelected(bool bSelected)
{
	if (!IsValid(this)) return;

	bIsSelected = bSelected;
	UpdateButtonDisplay();
}

bool UCustomButton::AreTexturesValid() const
{
	return ButtonStyles.NormalImage != nullptr &&
		   ButtonStyles.NormalImage->IsValidLowLevel() &&
		   (!ButtonStyles.bEnablePressedChangeImage || (ButtonStyles.PressedImage && ButtonStyles.PressedImage->IsValidLowLevel()));
}

void UCustomButton::UpdateButtonDisplay()
{
	if (!IsValid(this)) return;

	FButtonStyle NewStyle = GetStyle();

	// 默认大小防崩溃
	FVector2D DefaultSize(64.0f, 64.0f);

	FSlateBrush NormalBrush;
	if (ButtonStyles.NormalImage && ButtonStyles.NormalImage->IsValidLowLevel())
	{
		NormalBrush.SetResourceObject(ButtonStyles.NormalImage);
		NormalBrush.ImageSize = FVector2D(
			ButtonStyles.NormalImage->GetSizeX(),
			ButtonStyles.NormalImage->GetSizeY()
		) * ButtonStyles.ScaleZoom;
		NormalBrush.DrawAs = ESlateBrushDrawType::Image;
	}
	else
	{
		NormalBrush.TintColor = FLinearColor::Gray;
		NormalBrush.ImageSize = DefaultSize;
		NormalBrush.DrawAs = ESlateBrushDrawType::Box;
	}

	FSlateBrush FinalBrush = NormalBrush;

	if (bIsSelected)
	{
		if (ButtonStyles.bEnablePressedChangeImage &&
			ButtonStyles.PressedImage &&
			ButtonStyles.PressedImage->IsValidLowLevel())
		{
			FinalBrush.SetResourceObject(ButtonStyles.PressedImage);
			FinalBrush.ImageSize = FVector2D(
				ButtonStyles.PressedImage->GetSizeX(),
				ButtonStyles.PressedImage->GetSizeY()
			) * ButtonStyles.ScaleZoom;
			FinalBrush.DrawAs = ESlateBrushDrawType::Image;
		}
		else
		{
			FinalBrush.TintColor = ButtonStyles.PressedColor;
		}
	}

	NewStyle.Normal = FinalBrush;
	NewStyle.Hovered = FinalBrush;
	NewStyle.Pressed = FinalBrush;
	NewStyle.Disabled = FinalBrush;

	SetStyle(NewStyle); // ✅ 最终更新样式（不再调用 SynchronizeProperties）
}
