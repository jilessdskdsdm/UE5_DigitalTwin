#include "RoamCamera.h"
#include "EngineUtils.h"
#include "AIController.h"
#include "AITypes.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Components/CapsuleComponent.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

ARoamCamera::ARoamCamera()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetCapsuleSize(45.f, 95.f);
	GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->bDoCollisionTest = false;
	SpringArm->TargetArmLength = 1.0f;
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraLagSpeed = 8;
	SpringArm->CameraRotationLagSpeed = 8;
	SpringArm->SetupAttachment(GetCapsuleComponent());
	SpringArm->SetRelativeLocation(FVector(0.f, 0.f, GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	static ConstructorHelpers::FObjectFinder<UInputMappingContext> DefaultMappingContextAsset(
		TEXT("/DigitalTwin/Input/IMC_RoamCamera"));
	DefaultMappingContext = DefaultMappingContextAsset.Succeeded() ? DefaultMappingContextAsset.Object : nullptr;

	static ConstructorHelpers::FObjectFinder<UInputAction> TurnLookAsset(
		TEXT("/DigitalTwin/Input/IA_CTurn"));
	IA_TurnLook = TurnLookAsset.Succeeded() ? TurnLookAsset.Object : nullptr;

	static ConstructorHelpers::FObjectFinder<UInputAction> LeftKeyAsset(
		TEXT("/DigitalTwin/Input/IA_LeftKey"));
	IA_LeftKey = LeftKeyAsset.Succeeded() ? LeftKeyAsset.Object : nullptr;

	static ConstructorHelpers::FObjectFinder<UInputAction> RightKeyAsset(
		TEXT("/DigitalTwin/Input/IA_RightKey"));
	IA_RightKey = RightKeyAsset.Succeeded() ? RightKeyAsset.Object : nullptr;
}

void ARoamCamera::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (APlayerController* PC = Cast<APlayerController>(NewController))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ARoamCamera::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
		FInputModeGameAndUI InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		InputMode.SetHideCursorDuringCapture(false);
		PC->SetInputMode(InputMode);
		PC->SetShowMouseCursor(true);
		PC->bEnableClickEvents = true;
		
	}
}

void ARoamCamera::OnConstruction(const FTransform& Transform)
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
		for (TActorIterator<ARoamCamera> It(GetWorld()); It; ++It)
		{
			ARoamCamera* Other = *It;
			if (Other && Other != this)
			{
				ExistingIndices.Add(Other->RoamCameraIndex);
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
		RoamCameraIndex = NewIndex;
		bHasAssignedIndex = true;
		// 设置名字
		if (!HasAnyFlags(RF_Transient))
		{
			SetActorLabel(FString::Printf(TEXT("RoamCamera_%d"), RoamCameraIndex));
		}
	}

#endif
}

#if WITH_EDITOR
void ARoamCamera::PostEditImport()
{
	Super::PostEditImport();
	bHasAssignedIndex = false;
	RoamCameraIndex = -1;
}
#endif




void ARoamCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARoamCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(IA_TurnLook, ETriggerEvent::Triggered, this, &ARoamCamera::Look);
		Input->BindAction(IA_LeftKey, ETriggerEvent::Started, this, &ARoamCamera::OnLeftKeyStarted);
		Input->BindAction(IA_LeftKey, ETriggerEvent::Completed, this, &ARoamCamera::OnLeftKeyCompleted);
		Input->BindAction(IA_RightKey, ETriggerEvent::Started, this, &ARoamCamera::OnRightKeyStarted);
		Input->BindAction(IA_RightKey, ETriggerEvent::Completed, this, &ARoamCamera::OnRightKeyCompleted);
	}
}

void ARoamCamera::OnLeftKeyStarted(const FInputActionValue& Value)
{
	PressStartTime_Left = GetWorld()->GetTimeSeconds();
	bIsLeftTurningView = true;
	bHasRotatedDuringPress = false;
}

void ARoamCamera::OnLeftKeyCompleted(const FInputActionValue& Value)
{
	float HeldTime = GetWorld()->GetTimeSeconds() - PressStartTime_Left;
	bIsLeftTurningView = false;

	if (HeldTime < ClickTime && !bHasRotatedDuringPress)
	{
		bIsMoving = true;
		MoveToClickLocation();
	}
}

void ARoamCamera::OnRightKeyStarted(const FInputActionValue& Value)
{
	PressStartTime_Right = GetWorld()->GetTimeSeconds();
	bIsRightTurningView = true;
	bHasRotatedDuringPress = false;
}

void ARoamCamera::OnRightKeyCompleted(const FInputActionValue& Value)
{
	float HeldTime = GetWorld()->GetTimeSeconds() - PressStartTime_Right;
	bIsRightTurningView = false;

	if (HeldTime < ClickTime && !bHasRotatedDuringPress)
	{
		bIsMoving = true;
		MoveToClickLocation();
	}
}

void ARoamCamera::Look(const FInputActionValue& Value)
{
	FVector2D LookAxis = Value.Get<FVector2D>();
	if (!bIsLeftTurningView && !bIsRightTurningView) return;
	if (!LookAxis.IsNearlyZero())
	{
		bHasRotatedDuringPress = true;
		AddControllerYawInput(LookAxis.X * TurnSpeed);
		AddControllerPitchInput(LookAxis.Y * TurnSpeed);
	}
}

void ARoamCamera::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (SpawnedObject)
	{
		SpawnedObject->Destroyed();
	}
}

void ARoamCamera::BeginMove(ETouchIndex::Type FingerIndex, FVector Location)
{
	bIsMoving = true;
	HandleTouchPressed(FingerIndex, Location);
}

void ARoamCamera::HandleTouchPressed(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (!GetWorld()) return;
	if (FingerIndex != ETouchIndex::Touch1) return;

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC) return;

	FVector WorldLocation, WorldDirection;
	if (!PC->DeprojectScreenPositionToWorld(Location.X, Location.Y, WorldLocation, WorldDirection)) return;

	FVector TraceEnd = WorldLocation + (WorldDirection * 10000.0f);
	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.bTraceComplex = true;

	if (!GetWorld()->LineTraceSingleByChannel(Hit, WorldLocation, TraceEnd, ECC_Visibility, Params)) return;
	if (!Hit.bBlockingHit) return;

	ProcessMovement(Hit.ImpactPoint, Hit.GetActor(), Hit.GetComponent());
}

void ARoamCamera::ProcessMovement(FVector TargetLocation, AActor* HitActor, UPrimitiveComponent* HitComponent)
{
	if (!GetWorld()) return;

	if (IsValid(SpawnedObject))
	{
		SpawnedObject->Destroy();
		SpawnedObject = nullptr;
	}

	const FName TagToCheck = TEXT("MinMap");
	if (!(HitActor && HitActor->Tags.Contains(TagToCheck)) &&
		!(HitComponent && HitComponent->ComponentHasTag(TagToCheck)))
	{
		return;
	}

	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSys || !SpawnObject) return;

	FNavLocation NavLocation;
	if (!NavSys->ProjectPointToNavigation(TargetLocation, NavLocation)) return;

	if (!SpawnObject->IsChildOf(AActor::StaticClass())) return;
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnedObject = GetWorld()->SpawnActor<AActor>(SpawnObject, TargetLocation, FRotator::ZeroRotator, SpawnParams);

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC) return;

	UAIBlueprintHelperLibrary::SimpleMoveToLocation(PC, TargetLocation);

	GetWorldTimerManager().SetTimer(
		MoveTimerHandle,
		this,
		&ARoamCamera::CheckIfReachedDestination,
		0.02f,
		true
	);

	bIsMoving = true;
	bHasRotatedDuringPress = false;
}

void ARoamCamera::MoveToClickLocation()
{
	if (!GetWorld()) return;

	if (IsValid(SpawnedObject))
	{
		SpawnedObject->Destroy();
		SpawnedObject = nullptr;
	}

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC) return;

	FHitResult Hit;
	if (!PC->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, Hit)) return;
	if (!Hit.bBlockingHit) return;

	DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 20.f, 12, FColor::Green, false, 5.0f);

	AActor* HitActor = Hit.GetActor();
	UPrimitiveComponent* HitComponent = Hit.GetComponent();
	const FName TagToCheck = TEXT("MinMap");

	if (!(HitActor && HitActor->Tags.Contains(TagToCheck)) &&
		!(HitComponent && HitComponent->ComponentHasTag(TagToCheck))) return;

	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSys || !SpawnObject) return;

	FNavLocation NavLocation;
	if (!NavSys->ProjectPointToNavigation(Hit.ImpactPoint, NavLocation)) return;

	if (!SpawnObject->IsChildOf(AActor::StaticClass())) return;
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnedObject = GetWorld()->SpawnActor<AActor>(SpawnObject, Hit.ImpactPoint, FRotator::ZeroRotator, SpawnParams);

	UAIBlueprintHelperLibrary::SimpleMoveToLocation(PC, Hit.ImpactPoint);

	GetWorldTimerManager().SetTimer(
		MoveTimerHandle,
		this,
		&ARoamCamera::CheckIfReachedDestination,
		0.02f,
		true
	);

	bIsMoving = true;
	bHasRotatedDuringPress = false;
}

void ARoamCamera::CheckIfReachedDestination()
{
	if (!GetWorld())
	{
		GetWorldTimerManager().ClearTimer(MoveTimerHandle);
		return;
	}

	if (!IsValid(SpawnedObject))
	{
		GetWorldTimerManager().ClearTimer(MoveTimerHandle);
		return;
	}

	const FVector Velocity = GetVelocity();
	const float Speed = Velocity.Size();

	float Distance = FVector::Distance(GetActorLocation(), SpawnedObject->GetActorLocation());
	if (Distance < 120.f || Speed < 10.0f)
	{
		GetWorldTimerManager().ClearTimer(MoveTimerHandle);

		if (IsValid(SpawnedObject))
		{
			SpawnedObject->Destroy();
		}

		SpawnedObject = nullptr;
		bIsMoving = false;
		bHasRotatedDuringPress = true;
	}
}


void ARoamCamera::StopMovement()
{
	if (!GetWorld()) return;

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		// 停止 SimpleMoveToLocation
		PC->StopMovement();
	}

	// 停止计时器
	if (MoveTimerHandle.IsValid())
	{
		GetWorldTimerManager().ClearTimer(MoveTimerHandle);
	}

	// 清理生成的指示对象
	if (IsValid(SpawnedObject))
	{
		SpawnedObject->Destroy();
		SpawnedObject = nullptr;
	}

	// 状态重置
	bIsMoving = false;
	bHasRotatedDuringPress = false;
}

