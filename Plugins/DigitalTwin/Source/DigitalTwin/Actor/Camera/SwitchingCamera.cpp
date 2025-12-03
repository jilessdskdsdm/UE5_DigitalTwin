#include "SwitchingCamera.h"
#include "EngineUtils.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/ConstructorHelpers.h"

int32 ASwitchingCamera::GlobalCameraCounter = 0;

ASwitchingCamera::ASwitchingCamera()
{
	PrimaryActorTick.bCanEverTick = true;

	// 确保有根组件
	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Root);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bEnableCameraLag = true;
	SpringArm->TargetArmLength = 600.0f;
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->SetRelativeRotation(FRotator(-30.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	// 安全加载默认材质
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> TransparentMatAsset(
		TEXT("/DigitalTwin/Material/Mat_Obstacles_Inst"));
	CameraData.MatTransparent = TransparentMatAsset.Succeeded() ? TransparentMatAsset.Object : nullptr;
}

void ASwitchingCamera::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// 避免编辑器加载和CDO时执行
	if (!GetWorld() || HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
		return;

	if (!SpringArm || !Camera)
		return;

	SpringArm->TargetArmLength = CameraData.DefaultDistance;

#if WITH_EDITOR
	// 检查是否需要重新分配索引
	if (!bHasAssignedIndex)
	{
		TArray<int32> ExistingIndices;
		for (TActorIterator<ASwitchingCamera> It(GetWorld()); It; ++It)
		{
			ASwitchingCamera* Other = *It;
			if (Other && Other != this)
			{
				ExistingIndices.Add(Other->CameraIndex);
			}
		}
		ExistingIndices.Sort();

		int32 NewIndex = 0;
		for (int32 i = 0; i < ExistingIndices.Num(); ++i)
		{
			if (ExistingIndices[i] != i)
			{
				NewIndex = i;
				break;
			}
			NewIndex = i + 1;
		}

		CameraIndex = NewIndex;
		bHasAssignedIndex = true;
	}

	// 设置名字
	if (!HasAnyFlags(RF_Transient))
	{
		SetActorLabel(FString::Printf(TEXT("SCamera_%d"), CameraIndex));
	}
#endif
}

#if WITH_EDITOR
void ASwitchingCamera::PostEditImport()
{
	Super::PostEditImport();

	// 标记为未分配，OnConstruction再分配
	bHasAssignedIndex = false;
	CameraIndex = -1;
}
#endif

void ASwitchingCamera::BeginPlay()
{
	Super::BeginPlay();

	if (SpringArm)
	{
		SpringArm->TargetArmLength = CameraData.DefaultDistance;
	}
	CameraData.CameraTransform = GetActorTransform();
}

void ASwitchingCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
