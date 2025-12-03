#include "InsertionImage.h"

#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Texture2D.h"


UInsertionImage::UInsertionImage()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(
		TEXT("/DigitalTwin/UserWidget/MenuMat/T_Testing"));
	Image = ImageAsset.Succeeded() ? ImageAsset.Object : nullptr;
}

void UInsertionImage::SynchronizeProperties()
{
	Super::SynchronizeProperties();
	UpdateImageDisplay();
}



void UInsertionImage::UpdateImageDisplay()
{
	if (!DynamicImage)
	{
		if (!Image) return;

		const int32 Width = Image->GetSizeX();
		const int32 Height = Image->GetSizeY();
		const FVector2D ImageSize = FVector2D(Width, Height) * ScaleZoom;

		// 设置CanvasSlot尺寸
		if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Slot))
		{
			//CanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
			CanvasSlot->SetSize(ImageSize);
		}

		// UE5.5+ 替代 SetBrushSize 的方案
		FSlateBrush NewBrush;
		NewBrush.SetResourceObject(Image);
		NewBrush.ImageSize = ImageSize;  // 直接设置尺寸
		NewBrush.DrawAs = ESlateBrushDrawType::Image;
		SetBrush(NewBrush);
	}
	else
	{
		if (!Image) return;

		const int32 Width = Image->GetSizeX();
		const int32 Height = Image->GetSizeY();
		const FVector2D ImageSize = FVector2D(Width, Height) * ScaleZoom;

		// 设置CanvasSlot尺寸
		if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Slot))
		{
			//CanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
			CanvasSlot->SetSize(ImageSize);
		}

		// UE5.5+ 替代 SetBrushSize 的方案
		FSlateBrush NewBrush;
		NewBrush.SetResourceObject(DynamicImage);
		NewBrush.ImageSize = ImageSize;  // 直接设置尺寸
		NewBrush.DrawAs = ESlateBrushDrawType::Image;
		SetBrush(NewBrush);
	}

}

void UInsertionImage::SetImageData(UTexture2D* NewImage,UObject* NewDynamicImage = nullptr,float NewZoom)
{
	Image = NewImage;
	DynamicImage = NewDynamicImage;
	ScaleZoom = NewZoom;
	UpdateImageDisplay();
}

#if WITH_EDITOR
void UInsertionImage::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	UpdateImageDisplay();
}
#endif