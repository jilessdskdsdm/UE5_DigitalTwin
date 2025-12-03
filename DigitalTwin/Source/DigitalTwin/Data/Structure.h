#pragma once

#include "CoreMinimal.h"
#include "Enumeration.h"
#include "DigitalTwin/Actor/Camera/RoamCamera.h"
#include "Structure.generated.h"

USTRUCT(BlueprintType)
struct FCameraData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sky", meta = (ClampMin = -360.f, ClampMax = 360.f))
	bool bIsTime = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sky", meta = (ClampMin = 0.f, ClampMax = 24.f))
	float Time = 7.50f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sky", meta = (ClampMin = -360.f, ClampMax = 360.f))
	float SunYaw = 88.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	ECameraMode CameraMode = ECameraMode::OnlyRS;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode = ECameraProjectionMode::Type::Perspective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData", meta = (ClampMin = 10.f, ClampMax = 300.f))
	float FieldOfView = 100.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	bool bIsAutoRotation = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float AutoSpeed = 0.15f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	bool bIsInstantSwitching = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float MoveSpeed = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float MovementSpeed = 3.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float RollingMovementSpeed = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float SpringArmMovementSpeed= 1.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float TurnSpeed = 2.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	FVector2D LimitPitch = FVector2D(-89.f,-10.f);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	FVector2D LimitYaw = FVector2D(-180.f,180.f);
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float DefaultDistance = 1000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float MinDistance = 500.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float MaxDistance = 10000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData")
	float ZoomSpeed = 500.f;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData|Obstacle")
	mutable FTransform CameraTransform = FTransform();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData|Obstacle")
	TObjectPtr<AActor> SurroundTarget = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData|Obstacle")
	bool bIsDetect = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData|Obstacle")
	bool bVisualDetectionRange = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraData|Obstacle")
	UMaterialInterface* MatTransparent = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="CameraData|Obstacle" )
	FVector RangeOfDetection = FVector(500.f,500.f,500.f);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="CameraData|Obstacle" )
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes  = {};

	
	void Validate()
	{
		MinDistance = FMath::Clamp(MinDistance, 0.f, MaxDistance);
		MaxDistance = FMath::Max(MaxDistance, MinDistance + 1.f);
		DefaultDistance = FMath::Clamp(DefaultDistance, MinDistance, MaxDistance);
	}
	
};


USTRUCT(BlueprintType)
struct FItemDetected
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemDetected")
	AActor* Item = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemDetected")
	TArray<UMaterialInterface*> ItemUMaterial = {};
};

USTRUCT(BlueprintType)
struct FButtonStyles
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	FString Name = "MenuButton";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	bool bEnablePressedChangeImage = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UTexture2D* NormalImage = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UTexture2D* PressedImage = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	FLinearColor PressedColor = FLinearColor::Gray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	float ScaleZoom = 1.0f;

	// 是否为首选按钮（默认选中）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	bool bAutoSelect = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	bool bIsShowName= false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	bool bIsAnim = true;
	
};


USTRUCT(BlueprintType)
struct FMenuLevelConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MenuLevelConfig")
	TArray<FButtonStyles> ButtonStyles = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MenuLevelConfig")
	EMenuIndex ThatMenu = EMenuIndex::OneMenu;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MenuLevelConfig")
	EMenuLayoutDirection LayoutDirection = EMenuLayoutDirection::TopToBottom;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MenuLevelConfig")
	float ButtonSpacing = 50.0f;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MenuLevelConfig")
	FVector2D SubMenuOffset = FVector2D(0.0f, 0.0f);
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MenuLevelConfig")
	FVector2D AnchorPoint = FVector2D(0.5f, 0.5f);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MenuLevelConfig")
	UTexture2D* BackgroundImage = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MenuLevelConfig")
	float BackgroundImageSize = 0.55;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MenuLevelConfig")
	FVector2D ButtonOffset = FVector2D(0.0f, 0.0f);

};


USTRUCT(BlueprintType)
struct FTagInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	FString IconName = FString("");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	FString IconLittleName = FString("");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	TObjectPtr<UObject> IconTexture1 = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	TObjectPtr<UObject> IconTexture2 = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	TObjectPtr<UObject> IconTexture3 = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	float IconSize = 0.0f;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	FName TagName = "";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	FVector2D IconPivot = FVector2D(0.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	FSlateColor TextColor = FSlateColor(FLinearColor::White);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo")
	bool bIsClick = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo|Time")
	float Time = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo|Time")
	float SunYaw = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo|Data")
	int32 SwitchCameraIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo|Data")
	TObjectPtr<ARoamCamera> RoamCamera = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo|Data")
	TObjectPtr<AActor> AutoRoam = nullptr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo|Data")
	int32 TagIndex = -1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo|Data")
	bool bIsScope = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo|Data")
	float ScopeSize = 500.f;
	
	
};




USTRUCT(BlueprintType)
struct FHouseData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	FString RoomNumber = FString("");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	int32 Building = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	int32 Unit = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	int32 Layer = 0 ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	bool bLeftOrRight = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	bool OddOrEven = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	UTexture2D* Odd_MinMap = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TSubclassOf<class AViewHouse> Odd_SpawnViewHouse= nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TSubclassOf<class ARoamHouse> Odd_SpawnRoamHouse= nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	UTexture2D* Even_MinMap = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TSubclassOf<class AViewHouse> Even_SpawnViewHouse= nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TSubclassOf<class ARoamHouse> Even_SpawnRoamHouse= nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	int32 HouseTypeID = 0;
};



USTRUCT(BlueprintType)
struct FLayerData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	FString RoomNumber = FString("");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	int32 Building = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	int32 Unit = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	int32 Layer = 0 ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	bool bLeftOrRight = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	bool OddOrEven = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TArray<UTexture2D*> Odd_MinMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TSubclassOf<class AViewHouse> Odd_SpawnViewHouse = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TArray<TSubclassOf<class ARoamHouse>> Odd_SpawnRoamHouse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TArray<UTexture2D*> T_MinMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TSubclassOf<class AViewHouse> Even_SpawnViewHouse = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	TArray<TSubclassOf<class ARoamHouse>> Even_SpawnRoamHouse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HouseData")
	int32 HouseTypeID = 0;
};