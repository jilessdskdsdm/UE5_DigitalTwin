// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/Camera/RoamCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoamCamera() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIGITALTWIN_API UClass* Z_Construct_UClass_ARoamCamera();
DIGITALTWIN_API UClass* Z_Construct_UClass_ARoamCamera_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class ARoamCamera Function BeginMove
struct Z_Construct_UFunction_ARoamCamera_BeginMove_Statics
{
	struct RoamCamera_eventBeginMove_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoamCamera_eventBeginMove_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoamCamera_eventBeginMove_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoamCamera, nullptr, "BeginMove", nullptr, nullptr, Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::RoamCamera_eventBeginMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::RoamCamera_eventBeginMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoamCamera_BeginMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoamCamera_BeginMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoamCamera::execBeginMove)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginMove(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Location);
	P_NATIVE_END;
}
// End Class ARoamCamera Function BeginMove

// Begin Class ARoamCamera Function CheckIfReachedDestination
struct Z_Construct_UFunction_ARoamCamera_CheckIfReachedDestination_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoamCamera_CheckIfReachedDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoamCamera, nullptr, "CheckIfReachedDestination", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoamCamera_CheckIfReachedDestination_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoamCamera_CheckIfReachedDestination_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARoamCamera_CheckIfReachedDestination()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoamCamera_CheckIfReachedDestination_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoamCamera::execCheckIfReachedDestination)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckIfReachedDestination();
	P_NATIVE_END;
}
// End Class ARoamCamera Function CheckIfReachedDestination

// Begin Class ARoamCamera Function StopMovement
struct Z_Construct_UFunction_ARoamCamera_StopMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoamCamera_StopMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoamCamera, nullptr, "StopMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoamCamera_StopMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoamCamera_StopMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARoamCamera_StopMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoamCamera_StopMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoamCamera::execStopMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMovement();
	P_NATIVE_END;
}
// End Class ARoamCamera Function StopMovement

// Begin Class ARoamCamera
void ARoamCamera::StaticRegisterNativesARoamCamera()
{
	UClass* Class = ARoamCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginMove", &ARoamCamera::execBeginMove },
		{ "CheckIfReachedDestination", &ARoamCamera::execCheckIfReachedDestination },
		{ "StopMovement", &ARoamCamera::execStopMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoamCamera);
UClass* Z_Construct_UClass_ARoamCamera_NoRegister()
{
	return ARoamCamera::StaticClass();
}
struct Z_Construct_UClass_ARoamCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actor/Camera/RoamCamera.h" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TurnLook_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_LeftKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_RightKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAssignedIndex_MetaData[] = {
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoamCameraIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnObject_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedObject_MetaData[] = {
		{ "ModuleRelativePath", "Actor/Camera/RoamCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TurnLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_LeftKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_RightKey;
	static void NewProp_bHasAssignedIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAssignedIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoamCameraIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClickTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoamCamera_BeginMove, "BeginMove" }, // 881747261
		{ &Z_Construct_UFunction_ARoamCamera_CheckIfReachedDestination, "CheckIfReachedDestination" }, // 261224442
		{ &Z_Construct_UFunction_ARoamCamera_StopMovement, "StopMovement" }, // 1483812426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoamCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_IA_TurnLook = { "IA_TurnLook", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, IA_TurnLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TurnLook_MetaData), NewProp_IA_TurnLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_IA_LeftKey = { "IA_LeftKey", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, IA_LeftKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_LeftKey_MetaData), NewProp_IA_LeftKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_IA_RightKey = { "IA_RightKey", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, IA_RightKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_RightKey_MetaData), NewProp_IA_RightKey_MetaData) };
void Z_Construct_UClass_ARoamCamera_Statics::NewProp_bHasAssignedIndex_SetBit(void* Obj)
{
	((ARoamCamera*)Obj)->bHasAssignedIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_bHasAssignedIndex = { "bHasAssignedIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoamCamera), &Z_Construct_UClass_ARoamCamera_Statics::NewProp_bHasAssignedIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAssignedIndex_MetaData), NewProp_bHasAssignedIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, TurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSpeed_MetaData), NewProp_TurnSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_RoamCameraIndex = { "RoamCameraIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, RoamCameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoamCameraIndex_MetaData), NewProp_RoamCameraIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_ClickTime = { "ClickTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, ClickTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickTime_MetaData), NewProp_ClickTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_SpawnObject = { "SpawnObject", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, SpawnObject), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnObject_MetaData), NewProp_SpawnObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamCamera_Statics::NewProp_SpawnedObject = { "SpawnedObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamCamera, SpawnedObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedObject_MetaData), NewProp_SpawnedObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoamCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_IA_TurnLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_IA_LeftKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_IA_RightKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_bHasAssignedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_TurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_RoamCameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_ClickTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_SpawnObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamCamera_Statics::NewProp_SpawnedObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoamCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoamCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoamCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoamCamera_Statics::ClassParams = {
	&ARoamCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARoamCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoamCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoamCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoamCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoamCamera()
{
	if (!Z_Registration_Info_UClass_ARoamCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoamCamera.OuterSingleton, Z_Construct_UClass_ARoamCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoamCamera.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<ARoamCamera>()
{
	return ARoamCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoamCamera);
ARoamCamera::~ARoamCamera() {}
// End Class ARoamCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoamCamera, ARoamCamera::StaticClass, TEXT("ARoamCamera"), &Z_Registration_Info_UClass_ARoamCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoamCamera), 3880535659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_3944188808(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
