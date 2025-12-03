// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "GameFramework/Pawn.h"
#include "AutoCamera.generated.h"

UCLASS()
class DIGITALTWIN_API AAutoCamera : public APawn
{
	GENERATED_BODY()

public:
	AAutoCamera();
	virtual void Tick(float DeltaTime) override;
	void OnConstruction(const FTransform& Transform);
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;
	void StartRotate(const FInputActionValue& Value);
	void HandleTurnLook(const FInputActionValue& Value);
	void RightKeyClick(const FInputActionValue& Value);
	bool bIsRotating = false;
	
public:
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	int32 AutoCameraIndex = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Camera",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	bool bIsTurn = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_TurnLook = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_LeftKey = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> IA_RightKey = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	float RotationSpeed = 1.0f;

public:

#if WITH_EDITOR
	virtual void PostEditImport() override;  // 检测复制
#endif

	UPROPERTY()
	bool bHasAssignedIndex = false;
	
	
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override
	{
		Super::PostEditChangeProperty(PropertyChangedEvent);

		const FName PropertyName = PropertyChangedEvent.Property 
			? PropertyChangedEvent.Property->GetFName() 
			: NAME_None;

		// 当手动修改 RoamCameraIndex 时
		if (PropertyName == GET_MEMBER_NAME_CHECKED(AAutoCamera, AutoCameraIndex))
		{
			// 名字同步更新（只更新 Label，不改 Actor 名字）
			SetActorLabel(FString::Printf(TEXT("AutoCamera_%d"), AutoCameraIndex));

			// 标记为已分配，避免 OnConstruction 再次覆盖
			bHasAssignedIndex = true;
		}
	}
#endif
};
