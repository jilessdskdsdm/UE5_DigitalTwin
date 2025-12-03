// Fill out your copyright notice in the Description page of Project Settings.


#include "LayerButtons.h"
#include "HouseButton.h"
#include "HouseButtonControl.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"


ALayerButtons::ALayerButtons()
{
	PrimaryActorTick.bCanEverTick = true;
	
	ButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMesh"));
	RootComponent = ButtonMesh; // 设为根组件

	// 加载引擎自带的立方体模型
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(
		TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")
	);
	if (CubeMeshAsset.Succeeded())
	{
		ButtonMesh->SetStaticMesh(CubeMeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> DefaultMaterialAsset(
		TEXT("/DigitalTwin/Actor/HouseType/Material/Mat_HouseButton"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> HoveredMaterialAsset(
		TEXT("/DigitalTwin/Actor/HouseType/Material/Mat_HouseButton_Inst"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> NoShowAsset(
		TEXT("/DigitalTwin/Actor/HouseType/Material/Mat_HouseButton_Inst1"));


	DefaultMaterial = DefaultMaterialAsset.Succeeded() ? DefaultMaterialAsset.Object : nullptr;
	HoveredMaterial = HoveredMaterialAsset.Succeeded() ? HoveredMaterialAsset.Object : nullptr;
	NoShowMaterial = NoShowAsset.Succeeded() ? NoShowAsset.Object : nullptr;
	
	if (DefaultMaterial.IsValid()) ButtonMesh->SetMaterial(0, DefaultMaterial.Get());

	// 启用悬停事件
	ButtonMesh->SetNotifyRigidBodyCollision(true);
	ButtonMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ButtonMesh->SetGenerateOverlapEvents(true);
	
}


void ALayerButtons::BeginPlay()
{
	Super::BeginPlay();
	
	if (ButtonMesh)
	{
		ButtonMesh->OnBeginCursorOver.AddDynamic(this, &ALayerButtons::OnHoverBegin);
		ButtonMesh->OnEndCursorOver.AddDynamic(this, &ALayerButtons::OnHoverEnd);
		ButtonMesh->OnClicked.AddDynamic(this, &ALayerButtons::OnButtonClicked);
	}
	if (DefaultMaterial.IsValid())
	{
		ButtonMesh->SetMaterial(0, DefaultMaterial.Get());
	}	
}


void ALayerButtons::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ALayerButtons::OnHoverBegin(UPrimitiveComponent* TouchedComponent)
{
	if (HoveredMaterial.IsValid())
		ButtonMesh->SetMaterial(0, HoveredMaterial.Get());
}

void ALayerButtons::OnHoverEnd(UPrimitiveComponent* TouchedComponent)
{
	if (DefaultMaterial.IsValid())
		ButtonMesh->SetMaterial(0, DefaultMaterial.Get());
}


void ALayerButtons::SpawnHouseButton(const float VerticalSpacing, const float NumFloors)
{
	UWorld* World = GetWorld();
	if (!World) return;
	FVector CurrentLocation = GetActorLocation();
	FRotator CurrentRotation = GetActorRotation();
	FVector CurrentScale = GetActorScale();
	
	for (int32 i = 1; i <= NumFloors; ++i)
	{
		if (!IsValid(SpawnObject))return;
		// 计算新位置（当前Z坐标 + 高度偏移）
		FVector NewLocation = CurrentLocation + FVector(0.f, 0.f, (i-1) * VerticalSpacing);

		FTransform SpawnTransform;
		SpawnTransform.SetLocation(NewLocation);
		SpawnTransform.SetRotation(CurrentRotation.Quaternion());
		SpawnTransform.SetScale3D(CurrentScale);
		
		// 生成新按钮
		ALayerButtons* NewButton = World->SpawnActor<ALayerButtons>(
			SpawnObject,         // 使用当前类作为模板
			SpawnTransform   // 保持相同旋转
		);

		if (!NewButton) return;
		
		NewButton->LayerData = LayerData;
		NewButton->LayerData.Layer = i;
		NewButton->LayerData.OddOrEven = (i % 2 == 0); 
		
		int32 LeftOrRight = NewButton->LayerData.bLeftOrRight ? 2 : 1; 
		
		NewButton->LayerData.RoomNumber = FString::Printf(
			TEXT("%d栋%d单元%d层%02d"), 
			NewButton->LayerData.Building,
			NewButton->LayerData.Unit,
			NewButton->LayerData.Layer,
			LeftOrRight);
	}
	Destroy();
}

void ALayerButtons::OnButtonClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed)
{
	OnLayerButtonClicked.Broadcast(this, LayerData);

	AHouseButtonControl* HouseButtonControl = Cast<AHouseButtonControl>(UGameplayStatics::GetActorOfClass(GetWorld(), AHouseButtonControl::StaticClass()));
	if (HouseButtonControl)
	{
		HouseButtonControl->DisableAllButtons();
	}
	
}



