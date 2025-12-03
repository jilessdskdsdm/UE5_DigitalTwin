#include "HouseMinMap.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "InsertionImage.h"
#include "Kismet/GameplayStatics.h"

void UHouseMinMap::SetMinMap(UTexture2D* Image, float Size)
{
	if (!Image) return;
	MinMapImage->SetImageData(Image,nullptr,Size);
}

UMinMapButton* UHouseMinMap::CreateMinMapButton(AMapButton* RelatedMapButton,FVector WorldLocation, FVector MapOrigin, float MapWidth, float MapHeight)
{
	if (!ButtonWidgetClass || !ButtonContainer || !MinMapImage)
		return nullptr;
	
	// 给它赋值对应的场景按钮实例
	
	UMinMapButton* NewWidget = CreateWidget<UMinMapButton>(GetWorld(), ButtonWidgetClass);
	if (!NewWidget) return nullptr;

	ButtonContainer->AddChild(NewWidget);

	NewWidget->MapButton = RelatedMapButton;


	if (UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(NewWidget->Slot))
	{
		PanelSlot->SetAutoSize(true);
		PanelSlot->SetAlignment(FVector2D(0.5f, 0.5f));    // ✅ 设置对齐方式为中心
		PanelSlot->SetAnchors(FAnchors(0.5f, 0.5f));        // ✅ 锚点设置为中心

		FVector2D ImageSize = MinMapImage->GetDesiredSize();
		FVector RelativeLocation = WorldLocation - MapOrigin;

		// 修复镜像（X 方向反过来），Y 方向保持翻转
		float U = (-RelativeLocation.X / MapWidth) * ImageSize.X;
		float V = (-RelativeLocation.Y / MapHeight) * ImageSize.Y;

		// 最终位置：相对图片中心
		FVector2D FinalPosition = FVector2D(U, V);

		PanelSlot->SetPosition(FinalPosition); // ✅ 现在以中心为基准放置
	}

	return NewWidget;
}

void UHouseMinMap::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	
}


void UHouseMinMap::UpdateCameraPosition(const FVector& WorldLocation, const FRotator& WorldRotation, const FVector& MapOrigin, float MapWidth, float MapHeight)
{
	if (!CameraPosition || !MinMapImage) return;

	if (UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(CameraPosition->Slot))
	{
		PanelSlot->SetAutoSize(true);
		PanelSlot->SetAlignment(FVector2D(0.5f, 0.5f));
		PanelSlot->SetAnchors(FAnchors(0.5f, 0.5f));

		FVector2D ImageSize = MinMapImage->GetDesiredSize();
		FVector RelativeLocation = WorldLocation - MapOrigin;

		float U = (-RelativeLocation.X / MapWidth) * ImageSize.X;
		float V = (-RelativeLocation.Y / MapHeight) * ImageSize.Y;

		FVector2D FinalPosition(U, V);
		PanelSlot->SetPosition(FinalPosition);
	}

	CameraPosition->SetRenderTransformAngle(WorldRotation.Yaw + 90.f); // 旋转小地图图标
}

