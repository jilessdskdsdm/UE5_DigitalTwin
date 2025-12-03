// Fill out your copyright notice in the Description page of Project Settings.
#include "HouseButton.h"
#include "HouseButtonControl.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"


AHouseButton::AHouseButton()
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


void AHouseButton::BeginPlay()
{
	Super::BeginPlay();
	
	if (ButtonMesh)
	{
		ButtonMesh->OnBeginCursorOver.AddDynamic(this, &AHouseButton::OnHoverBegin);
		ButtonMesh->OnEndCursorOver.AddDynamic(this, &AHouseButton::OnHoverEnd);
		ButtonMesh->OnClicked.AddDynamic(this, &AHouseButton::OnButtonClicked);
	}
	if (DefaultMaterial.IsValid())
	{
		ButtonMesh->SetMaterial(0, DefaultMaterial.Get());
	}	
}


void AHouseButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AHouseButton::OnHoverBegin(UPrimitiveComponent* TouchedComponent)
{
	if (HoveredMaterial.IsValid())
		ButtonMesh->SetMaterial(0, HoveredMaterial.Get());
}

void AHouseButton::OnHoverEnd(UPrimitiveComponent* TouchedComponent)
{
	if (DefaultMaterial.IsValid())
		ButtonMesh->SetMaterial(0, DefaultMaterial.Get());
}


void AHouseButton::SpawnHouseButton(const float VerticalSpacing, const float NumFloors)
{
	UWorld* World = GetWorld();
	if (!World) return;
	FVector CurrentLocation = GetActorLocation();
	FRotator CurrentRotation = GetActorRotation();
	FVector CurrentScale = GetActorScale();
	
	for (int32 i = 0; i <= NumFloors; ++i)
	{
		if (!IsValid(SpawnObject))return;
		// 计算新位置（当前Z坐标 + 高度偏移）
		FVector NewLocation = CurrentLocation + FVector(0.f, 0.f, (i) * VerticalSpacing);

		FTransform SpawnTransform;
		SpawnTransform.SetLocation(NewLocation);
		SpawnTransform.SetRotation(CurrentRotation.Quaternion());
		SpawnTransform.SetScale3D(CurrentScale);
		
		// 生成新按钮
		AHouseButton* NewButton = World->SpawnActor<AHouseButton>(
			SpawnObject,         // 使用当前类作为模板
			SpawnTransform   // 保持相同旋转
		);

		if (!NewButton) return;
		int32 Layer =  HouseData.Layer + i;
		NewButton->HouseData = HouseData;
		NewButton->HouseData.Layer = Layer;
		NewButton->HouseData.OddOrEven = (Layer % 2 == 0); 
		
		int32 LeftOrRight = NewButton->HouseData.bLeftOrRight ? 2 : 1; 
		
		NewButton->HouseData.RoomNumber = FString::Printf(
			TEXT("%d单元%d%02d"), 
			NewButton->HouseData.Unit,
			NewButton->HouseData.Layer,
			LeftOrRight);
	}
	Destroy();
}

void AHouseButton::OnButtonClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed)
{
	OnHouseButtonClicked.Broadcast(this, HouseData);

	AHouseButtonControl* HouseButtonControl = Cast<AHouseButtonControl>(UGameplayStatics::GetActorOfClass(GetWorld(), AHouseButtonControl::StaticClass()));
	if (HouseButtonControl)
	{
		HouseButtonControl->DisableAllButtons();
	}
	
}



