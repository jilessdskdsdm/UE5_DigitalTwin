#include "HouseMinMapControl.h"

#include "MapButton.h"
#include "Components/StaticMeshComponent.h"
#include "Blueprint/UserWidget.h"
#include "DigitalTwin/UserWidget/HouseMinMap.h"
#include "Components/CanvasPanelSlot.h"
#include "TimerManager.h"
#include "DigitalTwin/Actor/Camera/Camera.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

AHouseMinMapControl::AHouseMinMapControl()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	MapMapping = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MapMapping"));
	MapMapping->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAsset(TEXT("/Engine/BasicShapes/Plane"));
	if (PlaneAsset.Succeeded())
	{
		MapMapping->SetStaticMesh(PlaneAsset.Object);
	}

	
}

void AHouseMinMapControl::BeginPlay()
{
	Super::BeginPlay();
}

void AHouseMinMapControl::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (!MapMapping || !MapMaterialInstance)  return;
	if (!MapMaterialDynamic)
	{
		// 第一次运行或无动态实例，创建一个动态实例
		MapMaterialDynamic = UMaterialInstanceDynamic::Create(MapMaterialInstance, this);
		if (MapMaterialDynamic)
		{
			MapMapping->SetMaterial(0, MapMaterialDynamic);
		}
	}

	if (MapMaterialDynamic && HouseMap)
	{
		// 设置纹理参数为HouseMap
		MapMaterialDynamic->SetTextureParameterValue(FName("T_MinMap"), HouseMap);
	}

	// 调整网格缩放
	MapToWorld();
}

void AHouseMinMapControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!MinMapWidgetInstance || !PlayerPawn)return;

	FVector MapOrigin = MapMapping->GetComponentLocation();
	float MapWidth = MapMapping->GetComponentScale().X * 100.f;
	float MapHeight = MapMapping->GetComponentScale().Y * 100.f;
	MinMapWidgetInstance->UpdateCameraPosition(PlayerPawn->GetActorLocation(), PlayerPawn->GetActorRotation(), MapOrigin, MapWidth, MapHeight);
	
}

void AHouseMinMapControl::MapToWorld()
{
	if (MapMaterialDynamic && HouseMap)
	{
		int32 Width = HouseMap->GetSizeX();
		int32 Height = HouseMap->GetSizeY();

		float ScaleX = (Width / 100.f) * MapMappingSize;
		float ScaleY = (Height / 100.f) * MapMappingSize;

		MapMapping->SetWorldScale3D(FVector(ScaleX, ScaleY, 1.0f));
		
		MapMaterialDynamic->SetTextureParameterValue("T_MinMap", HouseMap);
	}
}

void AHouseMinMapControl::SetMinMap(UTexture2D* Image,float MapSize,float MinMapSize)
{
	HouseMap = Image;
	MapMappingSize = MapSize;

	if (MinMapWidgetClass && HouseMap)
	{
		MinMapWidgetInstance = CreateWidget<UHouseMinMap>(GetWorld(), MinMapWidgetClass);
		if (MinMapWidgetInstance)
		{
			MinMapWidgetInstance->SetMinMap(HouseMap, MinMapSize);
			MinMapWidgetInstance->AddToViewport();

			// 延迟一帧以确保 UI 初始化完成
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
			{
				FVector MapOrigin = MapMapping->GetComponentLocation();
				float MapWidth = MapMapping->GetComponentScale().X * 100.f;
				float MapHeight = MapMapping->GetComponentScale().Y * 100.f;

				for (AMapButton * MapButton : AllMinMapButton)
				{
					if (MapButton)
					{
						MinMapWidgetInstance->CreateMinMapButton(
							MapButton,MapButton->GetActorLocation(), MapOrigin, MapWidth, MapHeight);
					}
				}
			}, 0.1f, false);
		}
	}

	if (MapMaterialDynamic && HouseMap)
	{
		MapMaterialDynamic->SetTextureParameterValue(FName("T_MinMap"), HouseMap);
	}

	MapToWorld();
}