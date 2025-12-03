// Fill out your copyright notice in the Description page of Project Settings.


#include "AutoCamera.h"
#include "EngineUtils.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
AAutoCamera::AAutoCamera()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	RootComponent = SpringArm;
	SpringArm->bDoCollisionTest = false;
	SpringArm->TargetArmLength = 0.0f;
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraLagSpeed = 8;
	SpringArm->CameraRotationLagSpeed = 8;
	SpringArm->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
	SpringArm->ComponentTags.Add(TEXT("Camera"));
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->ComponentTags.Add(TEXT("Camera"));


	static ConstructorHelpers::FObjectFinder<UInputMappingContext> DefaultMappingContextAsset(
		TEXT("/DigitalTwin/Input/IMC_Camera"));
	
	DefaultMappingContext = DefaultMappingContextAsset.Succeeded() ? DefaultMappingContextAsset.Object : nullptr;
	static ConstructorHelpers::FObjectFinder<UInputAction> TurnLookAsset(
			TEXT("/DigitalTwin/Input/IA_TurnLook"));
	IA_TurnLook = TurnLookAsset.Succeeded() ? TurnLookAsset.Object : nullptr;
	
	static ConstructorHelpers::FObjectFinder<UInputAction> LeftKeyAsset(
		TEXT("/DigitalTwin/Input/IA_LeftKey"));
	IA_LeftKey =LeftKeyAsset.Succeeded() ? LeftKeyAsset.Object : nullptr;

	static ConstructorHelpers::FObjectFinder<UInputAction> RightKeyAsset(
		TEXT("/DigitalTwin/Input/IA_RightKey"));
	IA_RightKey = RightKeyAsset.Succeeded() ? RightKeyAsset.Object : nullptr;

}

// Called when the game starts or when spawned
void AAutoCamera::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AAutoCamera::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (APlayerController* PC = Cast<APlayerController>(NewController))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->ClearAllMappings(); // 💥 清除旧的输入绑定
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}



void AAutoCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAutoCamera::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
	// 避免编辑器加载和CDO时执行
	if (!GetWorld() || HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))return;

	if (bHasAssignedIndex) return;

#if WITH_EDITOR
	
	// 检查是否需要重新分配索引
	if (!bHasAssignedIndex)
	{
		TArray<int32> ExistingIndices;
		for (TActorIterator<AAutoCamera> It(GetWorld()); It; ++It)
		{
			AAutoCamera* Other = *It;
			if (Other && Other != this)
			{
				ExistingIndices.Add(Other->AutoCameraIndex);
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
		AutoCameraIndex = NewIndex;
		bHasAssignedIndex = true;
		// 设置名字
		if (!HasAnyFlags(RF_Transient))
		{
			SetActorLabel(FString::Printf(TEXT("AutoCamera_%d"), AutoCameraIndex));
		}
	}

#endif
}

void AAutoCamera::PostEditImport()
{
	Super::PostEditImport();
	bHasAssignedIndex = false;
	AutoCameraIndex = -1;
}


void AAutoCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(IA_TurnLook, ETriggerEvent::Triggered, this, &AAutoCamera::HandleTurnLook);
		Input->BindAction(IA_LeftKey, ETriggerEvent::Triggered, this, &AAutoCamera::StartRotate);
		Input->BindAction(IA_RightKey, ETriggerEvent::Triggered, this, &AAutoCamera::RightKeyClick);
	}
}


void AAutoCamera::StartRotate(const FInputActionValue& Value)
{
	if (!bIsTurn)return;
	
	bool bIsClick = Value.Get<bool>();
	bIsRotating = bIsClick;
}


void AAutoCamera::RightKeyClick(const FInputActionValue& Value)
{
	if (!bIsTurn)return;
	bool bIsClick = Value.Get<bool>();
	bIsRotating = bIsClick;
}



void AAutoCamera::HandleTurnLook(const FInputActionValue& Value)
{
	if (!bIsTurn)return;
	FVector2D Axis = Value.Get<FVector2D>();
	if (!bIsRotating) return; 
	if (!Axis.IsNearlyZero())
	{
		UFunctionLibrary::OutputString("IA_TurnLook");
		AddControllerYawInput(Axis.X * RotationSpeed);
		float NewPitch = FMath::Clamp(Axis.Y, -80.f, 80.f);

		// 🎮 摄像机上下旋转（Pitch）
		AddControllerPitchInput(NewPitch * RotationSpeed);
	}
}
