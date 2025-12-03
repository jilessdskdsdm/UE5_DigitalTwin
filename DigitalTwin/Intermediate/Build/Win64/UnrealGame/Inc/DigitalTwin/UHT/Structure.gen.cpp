// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Data/Structure.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructure() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DIGITALTWIN_API UClass* Z_Construct_UClass_ARoamCamera_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_ARoamHouse_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_AViewHouse_NoRegister();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_ECameraMode();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EMenuIndex();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyles();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FCameraData();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FHouseData();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetected();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FLayerData();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FMenuLevelConfig();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FTagInfo();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin ScriptStruct FCameraData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraData;
class UScriptStruct* FCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraData, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("CameraData"));
	}
	return Z_Registration_Info_UScriptStruct_CameraData.OuterSingleton;
}
template<> DIGITALTWIN_API UScriptStruct* StaticStruct<FCameraData>()
{
	return FCameraData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTime_MetaData[] = {
		{ "Category", "Sky" },
		{ "ClampMax", "360.000000" },
		{ "ClampMin", "-360.000000" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Sky" },
		{ "ClampMax", "24.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunYaw_MetaData[] = {
		{ "Category", "Sky" },
		{ "ClampMax", "360.000000" },
		{ "ClampMin", "-360.000000" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ClampMax", "300.000000" },
		{ "ClampMin", "10.000000" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutoRotation_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSpeed_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInstantSwitching_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollingMovementSpeed_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmMovementSpeed_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitPitch_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitYaw_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDistance_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[] = {
		{ "Category", "CameraData|Obstacle" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurroundTarget_MetaData[] = {
		{ "Category", "CameraData|Obstacle" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDetect_MetaData[] = {
		{ "Category", "CameraData|Obstacle" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisualDetectionRange_MetaData[] = {
		{ "Category", "CameraData|Obstacle" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatTransparent_MetaData[] = {
		{ "Category", "CameraData|Obstacle" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeOfDetection_MetaData[] = {
		{ "Category", "CameraData|Obstacle" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "CameraData|Obstacle" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SunYaw;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static void NewProp_bIsAutoRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutoRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSpeed;
	static void NewProp_bIsInstantSwitching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInstantSwitching;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollingMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringArmMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitPitch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SurroundTarget;
	static void NewProp_bIsDetect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDetect;
	static void NewProp_bVisualDetectionRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualDetectionRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatTransparent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeOfDetection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsTime_SetBit(void* Obj)
{
	((FCameraData*)Obj)->bIsTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsTime = { "bIsTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraData), &Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTime_MetaData), NewProp_bIsTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_SunYaw = { "SunYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, SunYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunYaw_MetaData), NewProp_SunYaw_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_CameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, CameraMode), Z_Construct_UEnum_DigitalTwin_ECameraMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMode_MetaData), NewProp_CameraMode_MetaData) }; // 2390512701
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionMode_MetaData), NewProp_ProjectionMode_MetaData) }; // 785982369
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
void Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsAutoRotation_SetBit(void* Obj)
{
	((FCameraData*)Obj)->bIsAutoRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsAutoRotation = { "bIsAutoRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraData), &Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsAutoRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAutoRotation_MetaData), NewProp_bIsAutoRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_AutoSpeed = { "AutoSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, AutoSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSpeed_MetaData), NewProp_AutoSpeed_MetaData) };
void Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsInstantSwitching_SetBit(void* Obj)
{
	((FCameraData*)Obj)->bIsInstantSwitching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsInstantSwitching = { "bIsInstantSwitching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraData), &Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsInstantSwitching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInstantSwitching_MetaData), NewProp_bIsInstantSwitching_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_RollingMovementSpeed = { "RollingMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, RollingMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollingMovementSpeed_MetaData), NewProp_RollingMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_SpringArmMovementSpeed = { "SpringArmMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, SpringArmMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmMovementSpeed_MetaData), NewProp_SpringArmMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, TurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSpeed_MetaData), NewProp_TurnSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_LimitPitch = { "LimitPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, LimitPitch), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitPitch_MetaData), NewProp_LimitPitch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_LimitYaw = { "LimitYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, LimitYaw), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitYaw_MetaData), NewProp_LimitYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_DefaultDistance = { "DefaultDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, DefaultDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDistance_MetaData), NewProp_DefaultDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTransform_MetaData), NewProp_CameraTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_SurroundTarget = { "SurroundTarget", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, SurroundTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurroundTarget_MetaData), NewProp_SurroundTarget_MetaData) };
void Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsDetect_SetBit(void* Obj)
{
	((FCameraData*)Obj)->bIsDetect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsDetect = { "bIsDetect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraData), &Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsDetect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDetect_MetaData), NewProp_bIsDetect_MetaData) };
void Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bVisualDetectionRange_SetBit(void* Obj)
{
	((FCameraData*)Obj)->bVisualDetectionRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bVisualDetectionRange = { "bVisualDetectionRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraData), &Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bVisualDetectionRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisualDetectionRange_MetaData), NewProp_bVisualDetectionRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MatTransparent = { "MatTransparent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, MatTransparent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatTransparent_MetaData), NewProp_MatTransparent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_RangeOfDetection = { "RangeOfDetection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, RangeOfDetection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeOfDetection_MetaData), NewProp_RangeOfDetection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraData, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_SunYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_CameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_ProjectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsAutoRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_AutoSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsInstantSwitching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_RollingMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_SpringArmMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_TurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_LimitPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_LimitYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_DefaultDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_CameraTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_SurroundTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bIsDetect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_bVisualDetectionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_MatTransparent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_RangeOfDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraData_Statics::NewProp_ObjectTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	&NewStructOps,
	"CameraData",
	Z_Construct_UScriptStruct_FCameraData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraData_Statics::PropPointers),
	sizeof(FCameraData),
	alignof(FCameraData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraData()
{
	if (!Z_Registration_Info_UScriptStruct_CameraData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraData.InnerSingleton, Z_Construct_UScriptStruct_FCameraData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraData.InnerSingleton;
}
// End ScriptStruct FCameraData

// Begin ScriptStruct FItemDetected
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemDetected;
class UScriptStruct* FItemDetected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDetected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemDetected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDetected, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("ItemDetected"));
	}
	return Z_Registration_Info_UScriptStruct_ItemDetected.OuterSingleton;
}
template<> DIGITALTWIN_API UScriptStruct* StaticStruct<FItemDetected>()
{
	return FItemDetected::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemDetected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "ItemDetected" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemUMaterial_MetaData[] = {
		{ "Category", "ItemDetected" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemUMaterial_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemUMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDetected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDetected_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDetected, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDetected_Statics::NewProp_ItemUMaterial_Inner = { "ItemUMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemDetected_Statics::NewProp_ItemUMaterial = { "ItemUMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDetected, ItemUMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemUMaterial_MetaData), NewProp_ItemUMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetected_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetected_Statics::NewProp_ItemUMaterial_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetected_Statics::NewProp_ItemUMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDetected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	&NewStructOps,
	"ItemDetected",
	Z_Construct_UScriptStruct_FItemDetected_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetected_Statics::PropPointers),
	sizeof(FItemDetected),
	alignof(FItemDetected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemDetected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemDetected()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDetected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemDetected.InnerSingleton, Z_Construct_UScriptStruct_FItemDetected_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemDetected.InnerSingleton;
}
// End ScriptStruct FItemDetected

// Begin ScriptStruct FButtonStyles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ButtonStyles;
class UScriptStruct* FButtonStyles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ButtonStyles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ButtonStyles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FButtonStyles, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("ButtonStyles"));
	}
	return Z_Registration_Info_UScriptStruct_ButtonStyles.OuterSingleton;
}
template<> DIGITALTWIN_API UScriptStruct* StaticStruct<FButtonStyles>()
{
	return FButtonStyles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FButtonStyles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePressedChangeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZoom_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSelect_MetaData[] = {
		{ "Category", "Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe9\xa6\x96\xe9\x80\x89\xe6\x8c\x89\xe9\x92\xae\xef\xbc\x88\xe9\xbb\x98\xe8\xae\xa4\xe9\x80\x89\xe4\xb8\xad\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Data/Structure.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe9\xa6\x96\xe9\x80\x89\xe6\x8c\x89\xe9\x92\xae\xef\xbc\x88\xe9\xbb\x98\xe8\xae\xa4\xe9\x80\x89\xe4\xb8\xad\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowName_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAnim_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bEnablePressedChangeImage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePressedChangeImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PressedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleZoom;
	static void NewProp_bAutoSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSelect;
	static void NewProp_bIsShowName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowName;
	static void NewProp_bIsAnim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FButtonStyles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyles, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bEnablePressedChangeImage_SetBit(void* Obj)
{
	((FButtonStyles*)Obj)->bEnablePressedChangeImage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bEnablePressedChangeImage = { "bEnablePressedChangeImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FButtonStyles), &Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bEnablePressedChangeImage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePressedChangeImage_MetaData), NewProp_bEnablePressedChangeImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_NormalImage = { "NormalImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyles, NormalImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalImage_MetaData), NewProp_NormalImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_PressedImage = { "PressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyles, PressedImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedImage_MetaData), NewProp_PressedImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_PressedColor = { "PressedColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyles, PressedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedColor_MetaData), NewProp_PressedColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_ScaleZoom = { "ScaleZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyles, ScaleZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleZoom_MetaData), NewProp_ScaleZoom_MetaData) };
void Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bAutoSelect_SetBit(void* Obj)
{
	((FButtonStyles*)Obj)->bAutoSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bAutoSelect = { "bAutoSelect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FButtonStyles), &Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bAutoSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSelect_MetaData), NewProp_bAutoSelect_MetaData) };
void Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bIsShowName_SetBit(void* Obj)
{
	((FButtonStyles*)Obj)->bIsShowName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bIsShowName = { "bIsShowName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FButtonStyles), &Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bIsShowName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsShowName_MetaData), NewProp_bIsShowName_MetaData) };
void Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bIsAnim_SetBit(void* Obj)
{
	((FButtonStyles*)Obj)->bIsAnim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bIsAnim = { "bIsAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FButtonStyles), &Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bIsAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAnim_MetaData), NewProp_bIsAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FButtonStyles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bEnablePressedChangeImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_NormalImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_PressedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_PressedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_ScaleZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bAutoSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bIsShowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyles_Statics::NewProp_bIsAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FButtonStyles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	&NewStructOps,
	"ButtonStyles",
	Z_Construct_UScriptStruct_FButtonStyles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyles_Statics::PropPointers),
	sizeof(FButtonStyles),
	alignof(FButtonStyles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FButtonStyles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FButtonStyles()
{
	if (!Z_Registration_Info_UScriptStruct_ButtonStyles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ButtonStyles.InnerSingleton, Z_Construct_UScriptStruct_FButtonStyles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ButtonStyles.InnerSingleton;
}
// End ScriptStruct FButtonStyles

// Begin ScriptStruct FMenuLevelConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MenuLevelConfig;
class UScriptStruct* FMenuLevelConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MenuLevelConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MenuLevelConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMenuLevelConfig, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("MenuLevelConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MenuLevelConfig.OuterSingleton;
}
template<> DIGITALTWIN_API UScriptStruct* StaticStruct<FMenuLevelConfig>()
{
	return FMenuLevelConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMenuLevelConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyles_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThatMenu_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutDirection_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonSpacing_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuOffset_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPoint_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageSize_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonOffset_MetaData[] = {
		{ "Category", "MenuLevelConfig" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ButtonStyles;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThatMenu_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThatMenu;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ButtonSpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubMenuOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundImageSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMenuLevelConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ButtonStyles_Inner = { "ButtonStyles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FButtonStyles, METADATA_PARAMS(0, nullptr) }; // 419811243
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ButtonStyles = { "ButtonStyles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, ButtonStyles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyles_MetaData), NewProp_ButtonStyles_MetaData) }; // 419811243
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ThatMenu_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ThatMenu = { "ThatMenu", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, ThatMenu), Z_Construct_UEnum_DigitalTwin_EMenuIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThatMenu_MetaData), NewProp_ThatMenu_MetaData) }; // 2482169467
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_LayoutDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_LayoutDirection = { "LayoutDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, LayoutDirection), Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutDirection_MetaData), NewProp_LayoutDirection_MetaData) }; // 3584208971
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ButtonSpacing = { "ButtonSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, ButtonSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonSpacing_MetaData), NewProp_ButtonSpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_SubMenuOffset = { "SubMenuOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, SubMenuOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubMenuOffset_MetaData), NewProp_SubMenuOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_AnchorPoint = { "AnchorPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, AnchorPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPoint_MetaData), NewProp_AnchorPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, BackgroundImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_BackgroundImageSize = { "BackgroundImageSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, BackgroundImageSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageSize_MetaData), NewProp_BackgroundImageSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ButtonOffset = { "ButtonOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMenuLevelConfig, ButtonOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonOffset_MetaData), NewProp_ButtonOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ButtonStyles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ButtonStyles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ThatMenu_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ThatMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_LayoutDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_LayoutDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ButtonSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_SubMenuOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_AnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_BackgroundImageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewProp_ButtonOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	&NewStructOps,
	"MenuLevelConfig",
	Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::PropPointers),
	sizeof(FMenuLevelConfig),
	alignof(FMenuLevelConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMenuLevelConfig()
{
	if (!Z_Registration_Info_UScriptStruct_MenuLevelConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MenuLevelConfig.InnerSingleton, Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MenuLevelConfig.InnerSingleton;
}
// End ScriptStruct FMenuLevelConfig

// Begin ScriptStruct FTagInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TagInfo;
class UScriptStruct* FTagInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TagInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TagInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagInfo, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("TagInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TagInfo.OuterSingleton;
}
template<> DIGITALTWIN_API UScriptStruct* StaticStruct<FTagInfo>()
{
	return FTagInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTagInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconLittleName_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTexture1_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTexture2_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTexture3_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconPivot_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClick_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "TagInfo|Time" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunYaw_MetaData[] = {
		{ "Category", "TagInfo|Time" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchCameraIndex_MetaData[] = {
		{ "Category", "TagInfo|Data" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoamCamera_MetaData[] = {
		{ "Category", "TagInfo|Data" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRoam_MetaData[] = {
		{ "Category", "TagInfo|Data" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagIndex_MetaData[] = {
		{ "Category", "TagInfo|Data" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsScope_MetaData[] = {
		{ "Category", "TagInfo|Data" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopeSize_MetaData[] = {
		{ "Category", "TagInfo|Data" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IconName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IconLittleName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconTexture1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconTexture2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconTexture3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IconSize;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconPivot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static void NewProp_bIsClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SunYaw;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SwitchCameraIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoamCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoRoam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagIndex;
	static void NewProp_bIsScope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScopeSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, IconName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconName_MetaData), NewProp_IconName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconLittleName = { "IconLittleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, IconLittleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconLittleName_MetaData), NewProp_IconLittleName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconTexture1 = { "IconTexture1", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, IconTexture1), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTexture1_MetaData), NewProp_IconTexture1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconTexture2 = { "IconTexture2", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, IconTexture2), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTexture2_MetaData), NewProp_IconTexture2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconTexture3 = { "IconTexture3", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, IconTexture3), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTexture3_MetaData), NewProp_IconTexture3_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, IconSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSize_MetaData), NewProp_IconSize_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconPivot = { "IconPivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, IconPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconPivot_MetaData), NewProp_IconPivot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, TextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) }; // 2024315916
void Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_bIsClick_SetBit(void* Obj)
{
	((FTagInfo*)Obj)->bIsClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_bIsClick = { "bIsClick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTagInfo), &Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_bIsClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClick_MetaData), NewProp_bIsClick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_SunYaw = { "SunYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, SunYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunYaw_MetaData), NewProp_SunYaw_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_SwitchCameraIndex = { "SwitchCameraIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, SwitchCameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchCameraIndex_MetaData), NewProp_SwitchCameraIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_RoamCamera = { "RoamCamera", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, RoamCamera), Z_Construct_UClass_ARoamCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoamCamera_MetaData), NewProp_RoamCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_AutoRoam = { "AutoRoam", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, AutoRoam), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRoam_MetaData), NewProp_AutoRoam_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_TagIndex = { "TagIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, TagIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagIndex_MetaData), NewProp_TagIndex_MetaData) };
void Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_bIsScope_SetBit(void* Obj)
{
	((FTagInfo*)Obj)->bIsScope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_bIsScope = { "bIsScope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTagInfo), &Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_bIsScope_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsScope_MetaData), NewProp_bIsScope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_ScopeSize = { "ScopeSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagInfo, ScopeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopeSize_MetaData), NewProp_ScopeSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconLittleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconTexture1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconTexture2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconTexture3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_IconPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_bIsClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_SunYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_SwitchCameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_RoamCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_AutoRoam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_TagIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_bIsScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagInfo_Statics::NewProp_ScopeSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	&NewStructOps,
	"TagInfo",
	Z_Construct_UScriptStruct_FTagInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagInfo_Statics::PropPointers),
	sizeof(FTagInfo),
	alignof(FTagInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTagInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTagInfo()
{
	if (!Z_Registration_Info_UScriptStruct_TagInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TagInfo.InnerSingleton, Z_Construct_UScriptStruct_FTagInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TagInfo.InnerSingleton;
}
// End ScriptStruct FTagInfo

// Begin ScriptStruct FHouseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HouseData;
class UScriptStruct* FHouseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HouseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HouseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHouseData, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("HouseData"));
	}
	return Z_Registration_Info_UScriptStruct_HouseData.OuterSingleton;
}
template<> DIGITALTWIN_API UScriptStruct* StaticStruct<FHouseData>()
{
	return FHouseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHouseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomNumber_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftOrRight_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OddOrEven_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Odd_MinMap_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Odd_SpawnViewHouse_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Odd_SpawnRoamHouse_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Even_MinMap_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Even_SpawnViewHouse_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Even_SpawnRoamHouse_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseTypeID_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Building;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static void NewProp_bLeftOrRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftOrRight;
	static void NewProp_OddOrEven_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OddOrEven;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Odd_MinMap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Odd_SpawnViewHouse;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Odd_SpawnRoamHouse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Even_MinMap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Even_SpawnViewHouse;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Even_SpawnRoamHouse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HouseTypeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHouseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_RoomNumber = { "RoomNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, RoomNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomNumber_MetaData), NewProp_RoomNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Building), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Unit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Layer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) };
void Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_bLeftOrRight_SetBit(void* Obj)
{
	((FHouseData*)Obj)->bLeftOrRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_bLeftOrRight = { "bLeftOrRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHouseData), &Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_bLeftOrRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftOrRight_MetaData), NewProp_bLeftOrRight_MetaData) };
void Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_OddOrEven_SetBit(void* Obj)
{
	((FHouseData*)Obj)->OddOrEven = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_OddOrEven = { "OddOrEven", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHouseData), &Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_OddOrEven_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OddOrEven_MetaData), NewProp_OddOrEven_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Odd_MinMap = { "Odd_MinMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Odd_MinMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Odd_MinMap_MetaData), NewProp_Odd_MinMap_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Odd_SpawnViewHouse = { "Odd_SpawnViewHouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Odd_SpawnViewHouse), Z_Construct_UClass_UClass, Z_Construct_UClass_AViewHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Odd_SpawnViewHouse_MetaData), NewProp_Odd_SpawnViewHouse_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Odd_SpawnRoamHouse = { "Odd_SpawnRoamHouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Odd_SpawnRoamHouse), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoamHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Odd_SpawnRoamHouse_MetaData), NewProp_Odd_SpawnRoamHouse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Even_MinMap = { "Even_MinMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Even_MinMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Even_MinMap_MetaData), NewProp_Even_MinMap_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Even_SpawnViewHouse = { "Even_SpawnViewHouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Even_SpawnViewHouse), Z_Construct_UClass_UClass, Z_Construct_UClass_AViewHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Even_SpawnViewHouse_MetaData), NewProp_Even_SpawnViewHouse_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Even_SpawnRoamHouse = { "Even_SpawnRoamHouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, Even_SpawnRoamHouse), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoamHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Even_SpawnRoamHouse_MetaData), NewProp_Even_SpawnRoamHouse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_HouseTypeID = { "HouseTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseData, HouseTypeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseTypeID_MetaData), NewProp_HouseTypeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHouseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_RoomNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Building,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_bLeftOrRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_OddOrEven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Odd_MinMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Odd_SpawnViewHouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Odd_SpawnRoamHouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Even_MinMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Even_SpawnViewHouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_Even_SpawnRoamHouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseData_Statics::NewProp_HouseTypeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHouseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHouseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	&NewStructOps,
	"HouseData",
	Z_Construct_UScriptStruct_FHouseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHouseData_Statics::PropPointers),
	sizeof(FHouseData),
	alignof(FHouseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHouseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHouseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHouseData()
{
	if (!Z_Registration_Info_UScriptStruct_HouseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HouseData.InnerSingleton, Z_Construct_UScriptStruct_FHouseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HouseData.InnerSingleton;
}
// End ScriptStruct FHouseData

// Begin ScriptStruct FLayerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayerData;
class UScriptStruct* FLayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerData, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("LayerData"));
	}
	return Z_Registration_Info_UScriptStruct_LayerData.OuterSingleton;
}
template<> DIGITALTWIN_API UScriptStruct* StaticStruct<FLayerData>()
{
	return FLayerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomNumber_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftOrRight_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OddOrEven_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Odd_MinMap_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Odd_SpawnViewHouse_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Odd_SpawnRoamHouse_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_MinMap_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Even_SpawnViewHouse_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Even_SpawnRoamHouse_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseTypeID_MetaData[] = {
		{ "Category", "HouseData" },
		{ "ModuleRelativePath", "Data/Structure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Building;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static void NewProp_bLeftOrRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftOrRight;
	static void NewProp_OddOrEven_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OddOrEven;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Odd_MinMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Odd_MinMap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Odd_SpawnViewHouse;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Odd_SpawnRoamHouse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Odd_SpawnRoamHouse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_MinMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_T_MinMap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Even_SpawnViewHouse;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Even_SpawnRoamHouse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Even_SpawnRoamHouse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HouseTypeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_RoomNumber = { "RoomNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, RoomNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomNumber_MetaData), NewProp_RoomNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, Building), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, Unit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, Layer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) };
void Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_bLeftOrRight_SetBit(void* Obj)
{
	((FLayerData*)Obj)->bLeftOrRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_bLeftOrRight = { "bLeftOrRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayerData), &Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_bLeftOrRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftOrRight_MetaData), NewProp_bLeftOrRight_MetaData) };
void Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_OddOrEven_SetBit(void* Obj)
{
	((FLayerData*)Obj)->OddOrEven = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_OddOrEven = { "OddOrEven", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayerData), &Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_OddOrEven_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OddOrEven_MetaData), NewProp_OddOrEven_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_MinMap_Inner = { "Odd_MinMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_MinMap = { "Odd_MinMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, Odd_MinMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Odd_MinMap_MetaData), NewProp_Odd_MinMap_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_SpawnViewHouse = { "Odd_SpawnViewHouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, Odd_SpawnViewHouse), Z_Construct_UClass_UClass, Z_Construct_UClass_AViewHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Odd_SpawnViewHouse_MetaData), NewProp_Odd_SpawnViewHouse_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_SpawnRoamHouse_Inner = { "Odd_SpawnRoamHouse", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ARoamHouse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_SpawnRoamHouse = { "Odd_SpawnRoamHouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, Odd_SpawnRoamHouse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Odd_SpawnRoamHouse_MetaData), NewProp_Odd_SpawnRoamHouse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_T_MinMap_Inner = { "T_MinMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_T_MinMap = { "T_MinMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, T_MinMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_MinMap_MetaData), NewProp_T_MinMap_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Even_SpawnViewHouse = { "Even_SpawnViewHouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, Even_SpawnViewHouse), Z_Construct_UClass_UClass, Z_Construct_UClass_AViewHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Even_SpawnViewHouse_MetaData), NewProp_Even_SpawnViewHouse_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Even_SpawnRoamHouse_Inner = { "Even_SpawnRoamHouse", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ARoamHouse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Even_SpawnRoamHouse = { "Even_SpawnRoamHouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, Even_SpawnRoamHouse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Even_SpawnRoamHouse_MetaData), NewProp_Even_SpawnRoamHouse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_HouseTypeID = { "HouseTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerData, HouseTypeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseTypeID_MetaData), NewProp_HouseTypeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_RoomNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Building,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_bLeftOrRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_OddOrEven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_MinMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_MinMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_SpawnViewHouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_SpawnRoamHouse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Odd_SpawnRoamHouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_T_MinMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_T_MinMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Even_SpawnViewHouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Even_SpawnRoamHouse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_Even_SpawnRoamHouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerData_Statics::NewProp_HouseTypeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	&NewStructOps,
	"LayerData",
	Z_Construct_UScriptStruct_FLayerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerData_Statics::PropPointers),
	sizeof(FLayerData),
	alignof(FLayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayerData()
{
	if (!Z_Registration_Info_UScriptStruct_LayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayerData.InnerSingleton, Z_Construct_UScriptStruct_FLayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LayerData.InnerSingleton;
}
// End ScriptStruct FLayerData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Structure_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraData::StaticStruct, Z_Construct_UScriptStruct_FCameraData_Statics::NewStructOps, TEXT("CameraData"), &Z_Registration_Info_UScriptStruct_CameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraData), 819173481U) },
		{ FItemDetected::StaticStruct, Z_Construct_UScriptStruct_FItemDetected_Statics::NewStructOps, TEXT("ItemDetected"), &Z_Registration_Info_UScriptStruct_ItemDetected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemDetected), 544726581U) },
		{ FButtonStyles::StaticStruct, Z_Construct_UScriptStruct_FButtonStyles_Statics::NewStructOps, TEXT("ButtonStyles"), &Z_Registration_Info_UScriptStruct_ButtonStyles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FButtonStyles), 419811243U) },
		{ FMenuLevelConfig::StaticStruct, Z_Construct_UScriptStruct_FMenuLevelConfig_Statics::NewStructOps, TEXT("MenuLevelConfig"), &Z_Registration_Info_UScriptStruct_MenuLevelConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMenuLevelConfig), 837296593U) },
		{ FTagInfo::StaticStruct, Z_Construct_UScriptStruct_FTagInfo_Statics::NewStructOps, TEXT("TagInfo"), &Z_Registration_Info_UScriptStruct_TagInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTagInfo), 2571573736U) },
		{ FHouseData::StaticStruct, Z_Construct_UScriptStruct_FHouseData_Statics::NewStructOps, TEXT("HouseData"), &Z_Registration_Info_UScriptStruct_HouseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHouseData), 1703076476U) },
		{ FLayerData::StaticStruct, Z_Construct_UScriptStruct_FLayerData_Statics::NewStructOps, TEXT("LayerData"), &Z_Registration_Info_UScriptStruct_LayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayerData), 3306208353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Structure_h_3740370735(TEXT("/Script/DigitalTwin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Structure_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Structure_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
