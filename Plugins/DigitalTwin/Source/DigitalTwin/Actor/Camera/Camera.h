// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "SwitchingCamera.h"
#include "DigitalTwin/Data/Structure.h"
#include "GameFramework/Pawn.h"
#include "Camera.generated.h"

UCLASS()
class DIGITALTWIN_API ACamera : public APawn
{
	GENERATED_BODY()

public:
	ACamera();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection")
	TEnumAsByte<EObjectTypeQuery> CanDetected;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "📷CameraData", meta = (DisplayPriority = -1))
	FCameraData CameraData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="CameraData")
	USoundBase* SwitchSound = nullptr;

protected:
	virtual void PossessedBy(AController* NewController) override;
	
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
	//void SetTargetArmLength();
	virtual void Tick(float deltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void StartRotate(const FInputActionValue& Value);
	void RightKeyClick(const FInputActionValue& Value);
	void HandleTurnLook(const FInputActionValue& Value);
	void HandleZoom(const FInputActionValue& Value);
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void HandleZoomEvent(float ZoomValue);
	void UpdateZoomInterp();
	void SetSmoothSwitching(float DeltaTime);

	// 👇 点击统计
	TArray<ETouchIndex::Type> ActiveTouches;
	int32 ClickCount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float MultiClickMaxDelay = 0.25f;   // 推荐 0.22 ~ 0.28

	FTimerHandle MultiClickTimerHandle;

	void MouseMultipleClicksEvent(const FInputActionValue& Value);
	
	UFUNCTION()
	void MouseMultipleClicks(bool bIsClick);
	void HandleClickEvents();
	void OnTouchPressed(ETouchIndex::Type FingerIndex, FVector Location);
	void OnTouchReleased(ETouchIndex::Type FingerIndex, FVector Location);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Camera")
	bool TouchORMouse();

	bool bIsTouch;
	// 检查角度是否在区间 [Min, Max] 内，支持跨越 180 的情况
	static bool IsAngleInRange(float Angle, float Min, float Max)
	{
		float NormAngle = FMath::UnwindDegrees(Angle);
		float NormMin   = FMath::UnwindDegrees(Min);
		float NormMax   = FMath::UnwindDegrees(Max);

		if (NormMin <= NormMax)
		{
			return NormAngle >= NormMin && NormAngle <= NormMax;
		}
		else
		{
			// 区间跨越了 180/-180 边界，比如 [135, 260]
			return (NormAngle >= NormMin && NormAngle <= 180.f) ||
				   (NormAngle >= -180.f && NormAngle <= NormMax);
		}
	}

	

	

private:
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	class UCameraComponent* Camera;

	float DeltaTimes = 0.0f;
	
	FTransform  TargetTransform = FTransform();
	FTimerHandle ZoomInterpTimerHandle;
	
	
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_Zoom = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_TurnLook = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_LeftKey = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_RightKey = nullptr;
	
	

	bool bIsRotating = false;
	
	bool bIsPanning = false;
	FVector CurrentVelocity = FVector::ZeroVector;
	FVector TargetVelocity = FVector::ZeroVector;
	
	float CurrentArmLength;
	float TargetLength;
	FTimerHandle MoveInterpTimerHandle;
	
	TArray<FItemDetected> OriginalMaterials;
	UFUNCTION()
	void DetectIfThereIsObstacleAhead();
	UFUNCTION()
	void RestoreMaterials();
	
public:
	UFUNCTION(BlueprintCallable, Category="Audio")
	void PlaySwitchSound();
	
	UFUNCTION()
	void WhetherToTest();

	UFUNCTION()
	void SetCameraData(const ASwitchingCamera* SwitchingCamera);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetTargetActor(AActor* TargetActor);

	


#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override
	{
		Super::PostEditChangeProperty(PropertyChangedEvent);
		// 每次属性改动后自动校验
		CameraData.Validate();
	}
#endif

	
private:
	bool bSmoothSwitching = false;

	FTransform StartTransform;
	FTransform TargetTransformSmooth;

	float StartArmLength = 0.f;
	float TargetArmLengthSmooth = 0.f;

	float SmoothElapsed = 0.f;

	float SmoothEase = 2.0f;

	bool bDisableInputDuringSwitch = false;
	UPROPERTY()
	APlayerController* CachedControllerForSwitch = nullptr;

	UFUNCTION()
	void EnableLag();

};
