// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DigitalTwin/Data/Structure.h"
#include "GameFramework/Actor.h"
#include "SwitchingCamera.generated.h"

UCLASS()
class DIGITALTWIN_API ASwitchingCamera : public AActor
{
	GENERATED_BODY()

public:
	ASwitchingCamera();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;


private:
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	class UCameraComponent* Camera;

	float DeltaTimes;

	
private:
	static int32 GlobalCameraCounter;

#if WITH_EDITOR
	virtual void PostEditImport() override;  // 检测复制
#endif

	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "📷CameraData", meta = (DisplayPriority = -1))
	int32 CameraIndex = -1;

	UPROPERTY()
	bool bHasAssignedIndex = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "📷CameraData", meta = (DisplayPriority = -1))
	FCameraData CameraData;

	
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override
	{
		Super::PostEditChangeProperty(PropertyChangedEvent);
		CameraData.Validate();
	}
#endif

	
};
