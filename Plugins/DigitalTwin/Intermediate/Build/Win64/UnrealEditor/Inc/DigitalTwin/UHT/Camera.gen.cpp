// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/Camera/Camera.h"
#include "DigitalTwin/Data/Structure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamera() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_ACamera();
DIGITALTWIN_API UClass* Z_Construct_UClass_ACamera_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_ASwitchingCamera_NoRegister();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FCameraData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class ACamera Function DetectIfThereIsObstacleAhead
struct Z_Construct_UFunction_ACamera_DetectIfThereIsObstacleAhead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_DetectIfThereIsObstacleAhead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "DetectIfThereIsObstacleAhead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_DetectIfThereIsObstacleAhead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_DetectIfThereIsObstacleAhead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACamera_DetectIfThereIsObstacleAhead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_DetectIfThereIsObstacleAhead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execDetectIfThereIsObstacleAhead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetectIfThereIsObstacleAhead();
	P_NATIVE_END;
}
// End Class ACamera Function DetectIfThereIsObstacleAhead

// Begin Class ACamera Function EnableLag
struct Z_Construct_UFunction_ACamera_EnableLag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_EnableLag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "EnableLag", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_EnableLag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_EnableLag_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACamera_EnableLag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_EnableLag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execEnableLag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableLag();
	P_NATIVE_END;
}
// End Class ACamera Function EnableLag

// Begin Class ACamera Function HandleZoomEvent
struct Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics
{
	struct Camera_eventHandleZoomEvent_Parms
	{
		float ZoomValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::NewProp_ZoomValue = { "ZoomValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Camera_eventHandleZoomEvent_Parms, ZoomValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::NewProp_ZoomValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "HandleZoomEvent", nullptr, nullptr, Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::Camera_eventHandleZoomEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::Camera_eventHandleZoomEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACamera_HandleZoomEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_HandleZoomEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execHandleZoomEvent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleZoomEvent(Z_Param_ZoomValue);
	P_NATIVE_END;
}
// End Class ACamera Function HandleZoomEvent

// Begin Class ACamera Function MouseMultipleClicks
struct Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics
{
	struct Camera_eventMouseMultipleClicks_Parms
	{
		bool bIsClick;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::NewProp_bIsClick_SetBit(void* Obj)
{
	((Camera_eventMouseMultipleClicks_Parms*)Obj)->bIsClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::NewProp_bIsClick = { "bIsClick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Camera_eventMouseMultipleClicks_Parms), &Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::NewProp_bIsClick_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::NewProp_bIsClick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "MouseMultipleClicks", nullptr, nullptr, Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::Camera_eventMouseMultipleClicks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::Camera_eventMouseMultipleClicks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACamera_MouseMultipleClicks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_MouseMultipleClicks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execMouseMultipleClicks)
{
	P_GET_UBOOL(Z_Param_bIsClick);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MouseMultipleClicks(Z_Param_bIsClick);
	P_NATIVE_END;
}
// End Class ACamera Function MouseMultipleClicks

// Begin Class ACamera Function PlaySwitchSound
struct Z_Construct_UFunction_ACamera_PlaySwitchSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_PlaySwitchSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "PlaySwitchSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_PlaySwitchSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_PlaySwitchSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACamera_PlaySwitchSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_PlaySwitchSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execPlaySwitchSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySwitchSound();
	P_NATIVE_END;
}
// End Class ACamera Function PlaySwitchSound

// Begin Class ACamera Function RestoreMaterials
struct Z_Construct_UFunction_ACamera_RestoreMaterials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_RestoreMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "RestoreMaterials", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_RestoreMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_RestoreMaterials_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACamera_RestoreMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_RestoreMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execRestoreMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreMaterials();
	P_NATIVE_END;
}
// End Class ACamera Function RestoreMaterials

// Begin Class ACamera Function SetCameraData
struct Z_Construct_UFunction_ACamera_SetCameraData_Statics
{
	struct Camera_eventSetCameraData_Parms
	{
		const ASwitchingCamera* SwitchingCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchingCamera_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchingCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACamera_SetCameraData_Statics::NewProp_SwitchingCamera = { "SwitchingCamera", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Camera_eventSetCameraData_Parms, SwitchingCamera), Z_Construct_UClass_ASwitchingCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchingCamera_MetaData), NewProp_SwitchingCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamera_SetCameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamera_SetCameraData_Statics::NewProp_SwitchingCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetCameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_SetCameraData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "SetCameraData", nullptr, nullptr, Z_Construct_UFunction_ACamera_SetCameraData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetCameraData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACamera_SetCameraData_Statics::Camera_eventSetCameraData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetCameraData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_SetCameraData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACamera_SetCameraData_Statics::Camera_eventSetCameraData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACamera_SetCameraData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_SetCameraData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execSetCameraData)
{
	P_GET_OBJECT(ASwitchingCamera,Z_Param_SwitchingCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraData(Z_Param_SwitchingCamera);
	P_NATIVE_END;
}
// End Class ACamera Function SetCameraData

// Begin Class ACamera Function SetTargetActor
struct Z_Construct_UFunction_ACamera_SetTargetActor_Statics
{
	struct Camera_eventSetTargetActor_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACamera_SetTargetActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Camera_eventSetTargetActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamera_SetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamera_SetTargetActor_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "SetTargetActor", nullptr, nullptr, Z_Construct_UFunction_ACamera_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACamera_SetTargetActor_Statics::Camera_eventSetTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_SetTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACamera_SetTargetActor_Statics::Camera_eventSetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACamera_SetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_SetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execSetTargetActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetActor(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class ACamera Function SetTargetActor

// Begin Class ACamera Function TouchORMouse
struct Z_Construct_UFunction_ACamera_TouchORMouse_Statics
{
	struct Camera_eventTouchORMouse_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACamera_TouchORMouse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Camera_eventTouchORMouse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACamera_TouchORMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Camera_eventTouchORMouse_Parms), &Z_Construct_UFunction_ACamera_TouchORMouse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamera_TouchORMouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamera_TouchORMouse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_TouchORMouse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_TouchORMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "TouchORMouse", nullptr, nullptr, Z_Construct_UFunction_ACamera_TouchORMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_TouchORMouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACamera_TouchORMouse_Statics::Camera_eventTouchORMouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_TouchORMouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_TouchORMouse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACamera_TouchORMouse_Statics::Camera_eventTouchORMouse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACamera_TouchORMouse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_TouchORMouse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execTouchORMouse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TouchORMouse();
	P_NATIVE_END;
}
// End Class ACamera Function TouchORMouse

// Begin Class ACamera Function WhetherToTest
struct Z_Construct_UFunction_ACamera_WhetherToTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_WhetherToTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, nullptr, "WhetherToTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACamera_WhetherToTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACamera_WhetherToTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACamera_WhetherToTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACamera_WhetherToTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACamera::execWhetherToTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WhetherToTest();
	P_NATIVE_END;
}
// End Class ACamera Function WhetherToTest

// Begin Class ACamera
void ACamera::StaticRegisterNativesACamera()
{
	UClass* Class = ACamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetectIfThereIsObstacleAhead", &ACamera::execDetectIfThereIsObstacleAhead },
		{ "EnableLag", &ACamera::execEnableLag },
		{ "HandleZoomEvent", &ACamera::execHandleZoomEvent },
		{ "MouseMultipleClicks", &ACamera::execMouseMultipleClicks },
		{ "PlaySwitchSound", &ACamera::execPlaySwitchSound },
		{ "RestoreMaterials", &ACamera::execRestoreMaterials },
		{ "SetCameraData", &ACamera::execSetCameraData },
		{ "SetTargetActor", &ACamera::execSetTargetActor },
		{ "TouchORMouse", &ACamera::execTouchORMouse },
		{ "WhetherToTest", &ACamera::execWhetherToTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACamera);
UClass* Z_Construct_UClass_ACamera_NoRegister()
{
	return ACamera::StaticClass();
}
struct Z_Construct_UClass_ACamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actor/Camera/Camera.h" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanDetected_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[] = {
		{ "Category", "\xf0\x9f\x93\xb7""CameraData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchSound_MetaData[] = {
		{ "Category", "CameraData" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiClickMaxDelay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Zoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TurnLook_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_LeftKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_RightKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControllerForSwitch_MetaData[] = {
		{ "ModuleRelativePath", "Actor/Camera/Camera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CanDetected;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiClickMaxDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Zoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TurnLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_LeftKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_RightKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedControllerForSwitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACamera_DetectIfThereIsObstacleAhead, "DetectIfThereIsObstacleAhead" }, // 680470742
		{ &Z_Construct_UFunction_ACamera_EnableLag, "EnableLag" }, // 1672523783
		{ &Z_Construct_UFunction_ACamera_HandleZoomEvent, "HandleZoomEvent" }, // 3904156943
		{ &Z_Construct_UFunction_ACamera_MouseMultipleClicks, "MouseMultipleClicks" }, // 1983714877
		{ &Z_Construct_UFunction_ACamera_PlaySwitchSound, "PlaySwitchSound" }, // 1340750884
		{ &Z_Construct_UFunction_ACamera_RestoreMaterials, "RestoreMaterials" }, // 531264308
		{ &Z_Construct_UFunction_ACamera_SetCameraData, "SetCameraData" }, // 849630183
		{ &Z_Construct_UFunction_ACamera_SetTargetActor, "SetTargetActor" }, // 4182081478
		{ &Z_Construct_UFunction_ACamera_TouchORMouse, "TouchORMouse" }, // 3070037913
		{ &Z_Construct_UFunction_ACamera_WhetherToTest, "WhetherToTest" }, // 1307838197
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_CanDetected = { "CanDetected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, CanDetected), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanDetected_MetaData), NewProp_CanDetected_MetaData) }; // 1798967895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, CameraData), Z_Construct_UScriptStruct_FCameraData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraData_MetaData), NewProp_CameraData_MetaData) }; // 819173481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_SwitchSound = { "SwitchSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, SwitchSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchSound_MetaData), NewProp_SwitchSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_MultiClickMaxDelay = { "MultiClickMaxDelay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, MultiClickMaxDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiClickMaxDelay_MetaData), NewProp_MultiClickMaxDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_IA_Zoom = { "IA_Zoom", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, IA_Zoom), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Zoom_MetaData), NewProp_IA_Zoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_IA_TurnLook = { "IA_TurnLook", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, IA_TurnLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TurnLook_MetaData), NewProp_IA_TurnLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_IA_LeftKey = { "IA_LeftKey", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, IA_LeftKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_LeftKey_MetaData), NewProp_IA_LeftKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_IA_RightKey = { "IA_RightKey", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, IA_RightKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_RightKey_MetaData), NewProp_IA_RightKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_CachedControllerForSwitch = { "CachedControllerForSwitch", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamera, CachedControllerForSwitch), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControllerForSwitch_MetaData), NewProp_CachedControllerForSwitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_CanDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_CameraData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_SwitchSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_MultiClickMaxDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_IA_Zoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_IA_TurnLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_IA_LeftKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_IA_RightKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_CachedControllerForSwitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACamera_Statics::ClassParams = {
	&ACamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACamera()
{
	if (!Z_Registration_Info_UClass_ACamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACamera.OuterSingleton, Z_Construct_UClass_ACamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACamera.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<ACamera>()
{
	return ACamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACamera);
ACamera::~ACamera() {}
// End Class ACamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACamera, ACamera::StaticClass, TEXT("ACamera"), &Z_Registration_Info_UClass_ACamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACamera), 3079861765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_2936351900(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
