// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "GameFramework/Character.h"
#include "RoamCamera.generated.h"


UCLASS()
class DIGITALTWIN_API ARoamCamera : public ACharacter
{
	GENERATED_BODY()

public:
	ARoamCamera();

protected:
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

	void OnLeftKeyStarted(const FInputActionValue& Value);
	void OnLeftKeyCompleted(const FInputActionValue& Value);
	void OnRightKeyStarted(const FInputActionValue& Value);
	void OnRightKeyCompleted(const FInputActionValue& Value);
	

	void Look(const FInputActionValue& Value);

	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	UFUNCTION(BlueprintCallable, Category="Move")
	void BeginMove(ETouchIndex::Type FingerIndex, FVector Location);
	void HandleTouchPressed(ETouchIndex::Type FingerIndex, FVector Location);
	void ProcessMovement(FVector TargetLocation, AActor* HitActor, UPrimitiveComponent* HitComponent);
	void MoveToClickLocation();
	UFUNCTION()
	void CheckIfReachedDestination();
	UFUNCTION(BlueprintCallable, Category="Move")
	void StopMovement();

	

public:
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	


private:
	

	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"))
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"))
	class UCameraComponent* Camera;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_TurnLook = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_LeftKey = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_RightKey = nullptr;
	
	
	

#if WITH_EDITOR
	virtual void PostEditImport() override;  // 检测复制
#endif

	UPROPERTY()
	bool bHasAssignedIndex = false;


	
public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="CameraData",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = -1))
	float TurnSpeed = 1.f;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="CameraData",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = -1))
	int32 RoamCameraIndex = -1;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="CameraData",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = -1))
	float ClickTime = 0.5f;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="CameraData",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = -1))
	TObjectPtr<UClass> SpawnObject = nullptr;
	
	UPROPERTY()
	TObjectPtr<AActor> SpawnedObject;

	FTimerHandle MoveTimerHandle;



	
private:
	
	float PressStartTime_Left;
	float PressStartTime_Right;
	bool bIsLeftTurningView;
	bool bIsRightTurningView;
	bool bIsMoving;
	bool bHasRotatedDuringPress;


	
public:


#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override
	{
		Super::PostEditChangeProperty(PropertyChangedEvent);

		const FName PropertyName = PropertyChangedEvent.Property 
			? PropertyChangedEvent.Property->GetFName() 
			: NAME_None;

		// 当手动修改 RoamCameraIndex 时
		if (PropertyName == GET_MEMBER_NAME_CHECKED(ARoamCamera, RoamCameraIndex))
		{
			// 名字同步更新（只更新 Label，不改 Actor 名字）
			SetActorLabel(FString::Printf(TEXT("RoamCamera_%d"), RoamCameraIndex));

			// 标记为已分配，避免 OnConstruction 再次覆盖
			bHasAssignedIndex = true;
		}
	}
#endif
};
