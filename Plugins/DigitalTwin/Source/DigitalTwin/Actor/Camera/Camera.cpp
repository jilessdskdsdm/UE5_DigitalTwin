// Fill out your copyright notice in the Description page of Project Settings.
#include "Camera.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


class UEnhancedInputLocalPlayerSubsystem;

ACamera::ACamera()
{
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	RootComponent = SpringArm;
	SpringArm->bDoCollisionTest = false;
	SpringArm->TargetArmLength = 600.0f;
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraLagSpeed = 8;
	SpringArm->CameraRotationLagSpeed = 8;
	SpringArm->SetRelativeRotation(FRotator(-30.f, 0.f, 0.f));
	SpringArm->ComponentTags.Add(TEXT("Camera"));
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->ComponentTags.Add(TEXT("Camera"));
	
	
	//AutoPossessPlayer = EAutoReceiveInput::Player0;
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

	static ConstructorHelpers::FObjectFinder<UInputAction> ZoomAsset(
		TEXT("/DigitalTwin/Input/IA_Zoom"));
	IA_Zoom = ZoomAsset.Succeeded() ? ZoomAsset.Object : nullptr;
	
	
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> TransparentMatAsset(
		TEXT("/DigitalTwin/Material/Mat_Obstacles_Inst"));
	CameraData.MatTransparent = TransparentMatAsset.Succeeded() ? TransparentMatAsset.Object : nullptr;
}


void ACamera::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	SpringArm->TargetArmLength = FMath::Clamp(CameraData.DefaultDistance, CameraData.MinDistance, CameraData.MaxDistance);
}



void ACamera::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
		FInputModeGameAndUI InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock); // 不锁定鼠标
		InputMode.SetHideCursorDuringCapture(false); // 显示鼠标
		PC->SetInputMode(InputMode);
		
		PC->SetShowMouseCursor(true);
		PC->bEnableClickEvents = true;
	}
	
	SpringArm->TargetArmLength = CameraData.DefaultDistance;
	CurrentArmLength = CameraData.DefaultDistance;
	CameraData.CameraTransform = GetActorTransform();
	
}

void ACamera::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	// 确保 MappingContext 被添加
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


void ACamera::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	SetSmoothSwitching(deltaTime);
	
	WhetherToTest();
	
	if (!CameraData.bIsAutoRotation) return;
	FRotator ArmRotator = SpringArm->GetComponentRotation();
	ArmRotator.Yaw += CameraData.AutoSpeed;
	SpringArm->SetWorldRotation(ArmRotator);

	
}



void ACamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(IA_TurnLook, ETriggerEvent::Triggered, this, &ACamera::HandleTurnLook);
		Input->BindAction(IA_Zoom, ETriggerEvent::Triggered, this, &ACamera::HandleZoom);
		Input->BindAction(IA_LeftKey, ETriggerEvent::Triggered, this, &ACamera::StartRotate);
		Input->BindAction(IA_RightKey, ETriggerEvent::Triggered, this, &ACamera::RightKeyClick);
		PlayerInputComponent->BindTouch(IE_Pressed, this, &ACamera::OnTouchPressed);
		PlayerInputComponent->BindTouch(IE_Released, this, &ACamera::OnTouchReleased);
	}
}


void ACamera::SetTargetActor(AActor* TargetActor)
{
	CameraData.SurroundTarget = TargetActor;
}

void ACamera::EnableLag()
{
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;
}

void ACamera::WhetherToTest()
{
	
	if (!CameraData.bIsDetect)return;
	DetectIfThereIsObstacleAhead();
}

void ACamera::HandleTurnLook(const FInputActionValue& Value)
{
	FVector2D Axis = Value.Get<FVector2D>();
	SpringArm->CameraLagSpeed = 8;
	SpringArm->CameraRotationLagSpeed = 8;
	DeltaTimes = GetWorld()->GetDeltaSeconds();
	if (bIsPanning)
	{
		FVector Right = GetActorRightVector();
		FVector Forward = GetActorUpVector();

		// 目标速度（基于输入轴的方向）
		TargetVelocity = (Right * Axis.X + Forward * Axis.Y) * CameraData.MoveSpeed;
		
		// 使用插值使当前速度慢慢接近目标速度，实现“滞后感”
		CurrentVelocity = FMath::VInterpTo(CurrentVelocity, TargetVelocity, DeltaTimes, CameraData.MovementSpeed);
		// 实际移动
		CameraData.bIsAutoRotation = false;
		AddActorWorldOffset(CurrentVelocity);
	}
	else
	{
		// 如果没有输入，目标速度是 0
		TargetVelocity = FVector::ZeroVector;
	}
	
	if (bIsRotating)
	{
		FRotator Rot = SpringArm->GetRelativeRotation();

		if (FMath::Abs(Axis.X) > KINDA_SMALL_NUMBER)
		{
			CameraData.bIsAutoRotation = false;

			float NewYaw = FMath::UnwindDegrees(Rot.Yaw + Axis.X * CameraData.TurnSpeed);

			// 限制在 [LimitYaw.X, LimitYaw.Y]
			if (IsAngleInRange(NewYaw, CameraData.LimitYaw.X, CameraData.LimitYaw.Y))
			{
				Rot.Yaw = NewYaw;
			}

			SpringArm->SetRelativeRotation(Rot);
		}

		if (FMath::Abs(Axis.Y) > KINDA_SMALL_NUMBER)
		{
			CameraData.bIsAutoRotation = false;

			float NewPitch = FMath::UnwindDegrees(Rot.Pitch + Axis.Y * CameraData.TurnSpeed);

			if (IsAngleInRange(NewPitch, CameraData.LimitPitch.X, CameraData.LimitPitch.Y))
			{
				Rot.Pitch = NewPitch;
			}

			SpringArm->SetRelativeRotation(Rot);
		}
	}
}

void ACamera::HandleZoom(const FInputActionValue& Value)
{
	bIsTouch = false;
	float ZoomValue = Value.Get<float>();
	HandleZoomEvent(ZoomValue);
	
}

void ACamera::HandleZoomEvent(float ZoomValue)
{
	SpringArm->CameraLagSpeed = 8;
	SpringArm->CameraRotationLagSpeed = 8;
	switch (CameraData.CameraMode)
	{
	case  ECameraMode::NoMode:
	case  ECameraMode::OnlyTR:
		break;
	case  ECameraMode::OnlyS:
	case  ECameraMode::OnlyTS:
	case  ECameraMode::OnlyRS:
	case  ECameraMode::AllMode:
	default:
		TargetLength = FMath::Clamp(SpringArm->TargetArmLength - ZoomValue * CameraData.ZoomSpeed, CameraData.MinDistance, CameraData.MaxDistance);
		GetWorldTimerManager().SetTimer(ZoomInterpTimerHandle,this,&ACamera::UpdateZoomInterp,
			 0.003125f,  true);
		break;
	}
}

void ACamera::UpdateZoomInterp()
{
	CameraData.bIsAutoRotation = false;
	SpringArm->CameraLagSpeed = 8;
	SpringArm->CameraRotationLagSpeed = 8;
	CurrentArmLength = FMath::FInterpTo(CurrentArmLength, TargetLength, GetWorld()->GetDeltaSeconds(), CameraData.RollingMovementSpeed);
	SpringArm->TargetArmLength = CurrentArmLength;
	
	if (FMath::IsNearlyEqual(CurrentArmLength, TargetLength, 0.1f))
	{
		SpringArm->TargetArmLength = TargetLength;
		GetWorldTimerManager().ClearTimer(ZoomInterpTimerHandle);
	}
}

void ACamera::SetSmoothSwitching(float DeltaTime)
{
	if (CameraData.bIsInstantSwitching) return;
	if (bSmoothSwitching)
	{
		SmoothElapsed += DeltaTime;
		float Alpha = FMath::Clamp(SmoothElapsed / CameraData.SpringArmMovementSpeed, 0.f, 1.f);
		float SmoothAlpha = FMath::InterpEaseInOut(0.f, 1.f, Alpha, SmoothEase);

		// 平滑插值 Transform
		FVector NewLoc = FMath::Lerp(StartTransform.GetLocation(), TargetTransformSmooth.GetLocation(), SmoothAlpha);
		FQuat NewRot = FQuat::Slerp(StartTransform.GetRotation(), TargetTransformSmooth.GetRotation(), SmoothAlpha);
		SetActorLocationAndRotation(NewLoc, NewRot, false, nullptr, ETeleportType::TeleportPhysics);

		// 平滑插值 SpringArm
		float NewLength = FMath::Lerp(StartArmLength, TargetArmLengthSmooth, SmoothAlpha);
		SpringArm->TargetArmLength = NewLength;

		// 到达目标
		if (Alpha >= 1.f)
		{
			bSmoothSwitching = false;
			SetActorTransform(TargetTransformSmooth);
			SpringArm->TargetArmLength = TargetArmLengthSmooth;

			if (CachedControllerForSwitch)
			{
				CachedControllerForSwitch->SetIgnoreLookInput(false);
				CachedControllerForSwitch->SetIgnoreMoveInput(false);
				CachedControllerForSwitch = nullptr;
			}
		}
	}
	
}

void ACamera::StartRotate(const FInputActionValue& Value)
{
	bIsTouch = false;
	bool bIsClick = Value.Get<bool>();
	if (bIsClick)
	{
		CameraData.bIsAutoRotation = false;
	}
	switch (CameraData.CameraMode)
	{
	case ECameraMode::NoMode:
	case ECameraMode::OnlyS:
	case ECameraMode::OnlyTS:
		bIsRotating = false;
		bIsRotating = false;
		break;

	case ECameraMode::AllMode:
	case ECameraMode::OnlyTR:
	case ECameraMode::OnlyRS:
	default:
		bIsPanning = false;
		bIsRotating = bIsClick;
		break;
	}
}

void ACamera::MouseMultipleClicksEvent(const FInputActionValue& Value)
{
	bool bIsClick = Value.Get<bool>();
	MouseMultipleClicks(bIsClick);
}

void ACamera::MouseMultipleClicks(bool bIsClick)
{

	FString Click = bIsClick?"true":"false";
	UFunctionLibrary::OutputString(FString::Printf(TEXT("Click = %s"),*Click ));
	if (!bIsClick)
	{
		// 👆 按键松开时才算一次点击
		ClickCount++;

		if (!GetWorldTimerManager().IsTimerActive(MultiClickTimerHandle))
		{
			GetWorldTimerManager().SetTimer(
				MultiClickTimerHandle,
				this,
				&ACamera::HandleClickEvents,
				MultiClickMaxDelay,
				false
			);
		}
	}
}

void ACamera::HandleClickEvents()
{
	// 防止超范围
	int32 Count = ClickCount;
	ClickCount = 0;
	UFunctionLibrary::OutputString(FString::Printf(TEXT("ClickCount = %d"),ClickCount));
	switch (Count)
	{
	case 1:
		UFunctionLibrary::OutputString(TEXT("👉 单击"));
		break;

	case 2:
		HandleZoomEvent(1);
		UFunctionLibrary::OutputString(TEXT("👉 双击"));
		break;

	case 3:
		HandleZoomEvent(-1);
		UFunctionLibrary::OutputString(TEXT("👉 三击"));
		break;

	default:
		break;
	}
}

void ACamera::OnTouchPressed(ETouchIndex::Type FingerIndex, FVector Location)
{
	bIsTouch = true;
}

void ACamera::OnTouchReleased(ETouchIndex::Type FingerIndex, FVector Location)
{
	bIsTouch = true;
}

bool ACamera::TouchORMouse()
{
	return bIsTouch;
}


void ACamera::RightKeyClick(const FInputActionValue& Value)
{
	bIsTouch = false;
	bool bIsClick = Value.Get<bool>();
	if (bIsClick)
	{
		CameraData.bIsAutoRotation = false;
	}
	switch (CameraData.CameraMode)
	{
	case ECameraMode::NoMode:
	case ECameraMode::OnlyS:
	case ECameraMode::OnlyRS:
		bIsPanning = false;
		bIsRotating = false;
		break;

	case ECameraMode::OnlyTS:
	case ECameraMode::AllMode:
	case ECameraMode::OnlyTR:
	default:
		bIsRotating = false;
		bIsPanning = bIsClick;
		break;
	}
	
}

// Camera Detect

void ACamera::DetectIfThereIsObstacleAhead()
{
    if (!Camera)
        return;

    // ✅ 如果 SurroundTarget 不存在，强制恢复所有材质
    if (!CameraData.SurroundTarget)
    {
        for (const FItemDetected& Item : OriginalMaterials)
        {
            AActor* Actor = Item.Item;
            if (!IsValid(Actor)) continue;

            UMeshComponent* MeshComp = Cast<UMeshComponent>(Actor->GetComponentByClass(UMeshComponent::StaticClass()));
            if (MeshComp)
            {
                for (int32 j = 0; j < MeshComp->GetNumMaterials() && j < Item.ItemUMaterial.Num(); j++)
                {
                    MeshComp->SetMaterial(j, Item.ItemUMaterial[j]);
                }
            }
        }

        OriginalMaterials.Empty(); // ✅ 清空记录
        return; // ✅ 提前返回，不再执行检测逻辑
    }

    // 正常执行检测逻辑 ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
    FVector Start = Camera->GetComponentLocation();
    FVector End = CameraData.SurroundTarget->GetActorLocation();

    TArray<FHitResult> HitResults;
    TArray<AActor*> ActorsToIgnore;
    ActorsToIgnore.Add(CameraData.SurroundTarget);

    bool bHit = UKismetSystemLibrary::BoxTraceMultiForObjects(
        GetWorld(), Start, End, CameraData.RangeOfDetection,
        Camera->GetComponentRotation(), CameraData.ObjectTypes,
        false, ActorsToIgnore,
        CameraData.bVisualDetectionRange ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None,
        HitResults, true
    );

    TSet<AActor*> CurrentHitActors;
    if (bHit)
    {
        for (const FHitResult& Hit : HitResults)
        {
            AActor* HitActor = Hit.GetActor();
            if (HitActor && HitActor != CameraData.SurroundTarget)
            {
                CurrentHitActors.Add(HitActor);

                UMeshComponent* MeshComp = Cast<UMeshComponent>(HitActor->GetComponentByClass(UMeshComponent::StaticClass()));
                if (MeshComp)
                {
                    bool bAlreadyExists = false;
                    for (FItemDetected& Item : OriginalMaterials)
                    {
                        if (Item.Item == HitActor)
                        {
                            bAlreadyExists = true;
                            break;
                        }
                    }

                    if (!bAlreadyExists)
                    {
                        FItemDetected NewItem;
                        NewItem.Item = HitActor;
                        for (int32 i = 0; i < MeshComp->GetNumMaterials(); i++)
                        {
                            NewItem.ItemUMaterial.Add(MeshComp->GetMaterial(i));
                        }
                        OriginalMaterials.Add(NewItem);
                    }

                    UMaterialInstanceDynamic* DynMaterial = UMaterialInstanceDynamic::Create(CameraData.MatTransparent, this);
                    for (int32 i = 0; i < MeshComp->GetNumMaterials(); i++)
                    {
                        MeshComp->SetMaterial(i, DynMaterial);
                    }
                }
            }
        }
    }

    for (int32 i = OriginalMaterials.Num() - 1; i >= 0; i--)
    {
        if (!CurrentHitActors.Contains(OriginalMaterials[i].Item))
        {
            AActor* Actor = OriginalMaterials[i].Item;
            UMeshComponent* MeshComp = Cast<UMeshComponent>(Actor->GetComponentByClass(UMeshComponent::StaticClass()));
            if (MeshComp)
            {
                for (int32 j = 0; j < MeshComp->GetNumMaterials() && j < OriginalMaterials[i].ItemUMaterial.Num(); j++)
                {
                    MeshComp->SetMaterial(j, OriginalMaterials[i].ItemUMaterial[j]);
                }
            }
            OriginalMaterials.RemoveAt(i);
        }
    }
}


void ACamera::RestoreMaterials()
{
    for (FItemDetected& Item : OriginalMaterials)
    {
        if (AActor* Actor = Item.Item)
        {
            UMeshComponent* MeshComp = Cast<UMeshComponent>(Actor->GetComponentByClass(UMeshComponent::StaticClass()));
            if (MeshComp)
            {
                for (int32 i = 0; i < MeshComp->GetNumMaterials() && i < Item.ItemUMaterial.Num(); i++)
                {
                    MeshComp->SetMaterial(i, Item.ItemUMaterial[i]);
                }
            }
        }
    }
    OriginalMaterials.Empty();
}


void ACamera::PlaySwitchSound()
{
	if (SwitchSound)
	{
		UGameplayStatics::PlaySound2D(this, SwitchSound);
	}
}





void ACamera::SetCameraData(const ASwitchingCamera* SwitchingCamera)
{
	if (!SwitchingCamera) return;

	Camera->SetProjectionMode(CameraData.ProjectionMode);
	Camera->SetFieldOfView(CameraData.FieldOfView);
	if (GetWorld())
	{
		if (CameraData.bIsTime)
		{
			UFunctionLibrary::SetTimeAndDirection(GetWorld(),CameraData.Time,CameraData.SunYaw);
		}
	}
	
	if (CameraData.bIsInstantSwitching)
	{
		SpringArm->bEnableCameraLag = false;
		SpringArm->bEnableCameraRotationLag = false;
		SpringArm->TargetArmLength = CameraData.DefaultDistance;
		CurrentArmLength = CameraData.DefaultDistance;
		TargetLength = CameraData.DefaultDistance;
		SetActorTransform(CameraData.CameraTransform);
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(
			TimerHandle,this,&ACamera::EnableLag,0.2f,false);
	}
	else
	{
		CurrentArmLength = CameraData.DefaultDistance;
		TargetLength = CameraData.DefaultDistance;
		CameraData = SwitchingCamera->CameraData;
		// 停止上一次
		bSmoothSwitching = false;
		StartTransform = GetActorTransform();
		StartArmLength = SpringArm->TargetArmLength;

		TargetTransformSmooth = CameraData.CameraTransform;
		TargetArmLengthSmooth = CameraData.DefaultDistance;

		SmoothElapsed = 0.f;
	
		bSmoothSwitching = true;
		bDisableInputDuringSwitch = true;

		// 禁用输入
		CachedControllerForSwitch = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (CachedControllerForSwitch)
		{
			CachedControllerForSwitch->SetIgnoreLookInput(true);
			CachedControllerForSwitch->SetIgnoreMoveInput(true);
		}
	}
}
