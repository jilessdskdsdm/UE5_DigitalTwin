#include "MainMenuButtonBackground.h"
#include "MainMenuButton.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "Components/Widget.h"

void UMainMenuButtonBackground::SetLayoutDirection(EMenuLayoutDirection LayoutDir)
{
	if (!VerticalBox || !HorizontalBox) return;

	const bool bIsVertical = (LayoutDir == EMenuLayoutDirection::TopToBottom || LayoutDir == EMenuLayoutDirection::BottomToTop);
	VerticalBox->SetVisibility(bIsVertical ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	HorizontalBox->SetVisibility(bIsVertical ? ESlateVisibility::Collapsed : ESlateVisibility::Visible);
}

void UMainMenuButtonBackground::AddButtonToLayout(UMainMenuButton* Button, EMenuLayoutDirection LayoutDir, bool bReverseOrder)
{
	if (!Button) return;

	if ((LayoutDir == EMenuLayoutDirection::TopToBottom || LayoutDir == EMenuLayoutDirection::BottomToTop) && VerticalBox)
	{
		bReverseOrder ? VerticalBox->InsertChildAt(0, Button) : VerticalBox->AddChild(Button);
	}
	else if (HorizontalBox)
	{
		bReverseOrder ? HorizontalBox->InsertChildAt(0, Button) : HorizontalBox->AddChild(Button);
	}
}

void UMainMenuButtonBackground::SetButtonSpacing(float InSpacing, EMenuLayoutDirection LayoutDirection)
{
	const float HalfSpacing = InSpacing * 0.5f;

	if ((LayoutDirection == EMenuLayoutDirection::TopToBottom || LayoutDirection == EMenuLayoutDirection::BottomToTop) && VerticalBox)
	{
		for (int32 i = 0; i < VerticalBox->GetChildrenCount(); i++)
		{
			if (UWidget* Child = VerticalBox->GetChildAt(i))
			{
				if (UVerticalBoxSlot* VBSlot = Cast<UVerticalBoxSlot>(Child->Slot))
				{
					VBSlot->SetPadding(FMargin(0, HalfSpacing, 0, HalfSpacing));
				}
			}
		}
	}
	else if ((LayoutDirection == EMenuLayoutDirection::LeftToRight || LayoutDirection == EMenuLayoutDirection::RightToLeft) && HorizontalBox)
	{
		for (int32 i = 0; i < HorizontalBox->GetChildrenCount(); i++)
		{
			if (UWidget* Child = HorizontalBox->GetChildAt(i))
			{
				if (UHorizontalBoxSlot* HBSlot = Cast<UHorizontalBoxSlot>(Child->Slot))
				{
					HBSlot->SetPadding(FMargin(HalfSpacing, 0, HalfSpacing, 0));
				}
			}
		}
	}
}


void UMainMenuButtonBackground::SetBackgroundBrush(UTexture2D* Texture,float BackgroundSize)
{
	if (!Background) return;

	if (Texture)
	{
		Background->SetImageData(Texture,nullptr,BackgroundSize);
		Background->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
	else
	{
		Background->SetVisibility(ESlateVisibility::Hidden);
	}
}


void UMainMenuButtonBackground::SetAnchorAndOffset(FVector2D Anchor, FVector2D Offset, FVector2D InOffset)
{
	if (!ButtonCanvasPanel) return;
	if (UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(ButtonCanvasPanel->Slot))
	{
		// PanelSlot->SetAnchors(FAnchors(Anchor.X, Anchor.Y));
		// PanelSlot->SetAlignment(Anchor);
		PanelSlot->SetPosition(InOffset);
	}
	
	// if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(this->Slot))
	// {
	// 	CanvasSlot->SetAnchors(FAnchors(Anchor.X, Anchor.Y));
	// 	CanvasSlot->SetAlignment(Anchor);
	// 	CanvasSlot->SetPosition(Offset);
	// }
}