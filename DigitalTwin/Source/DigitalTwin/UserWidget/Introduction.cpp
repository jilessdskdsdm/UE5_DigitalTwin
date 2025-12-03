// Fill out your copyright notice in the Description page of Project Settings.
#include "Introduction.h"
#include "InsertionImage.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"

void UIntroduction::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	
}

void UIntroduction::NativePreConstruct()
{
	Super::NativePreConstruct();
	GetResolution();
}

void UIntroduction::GetResolution()
{
	FVector2D ScreenResolution;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ScreenResolution);
		GEngine->AddOnScreenDebugMessage(-1,0.f,FColor::Red,FString::Printf(TEXT("屏幕分辨率：%fx%f"), ScreenResolution.X, ScreenResolution.Y));
		TArray<UWidget*> ChildrenWidget = CanvasPanel->GetAllChildren();
		for (UWidget* Child : ChildrenWidget)
		{
			if (UInsertionImage* ImageWidget = Cast<UInsertionImage>(Child))
			{
				GEngine->AddOnScreenDebugMessage(-1,0.f,FColor::Yellow,ImageWidget->GetName());
			}
		}
	}

}
