// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "DigitalTwin/Actor/Camera/SwitchingCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIGITALTWIN_API UClass* Z_Construct_UClass_ACamera_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_ASwitchingCamera_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UFunctionLibrary();
DIGITALTWIN_API UClass* Z_Construct_UClass_UFunctionLibrary_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucencyType();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UFunctionLibrary Function CallSetTimeAndDirection
struct Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics
{
	struct FunctionLibrary_eventCallSetTimeAndDirection_Parms
	{
		UObject* WorldContextObject;
		float TimeOfDay;
		float SunYaw;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraDynamicSky" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SunYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventCallSetTimeAndDirection_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventCallSetTimeAndDirection_Parms, TimeOfDay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::NewProp_SunYaw = { "SunYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventCallSetTimeAndDirection_Parms, SunYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::NewProp_TimeOfDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::NewProp_SunYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "CallSetTimeAndDirection", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::FunctionLibrary_eventCallSetTimeAndDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::FunctionLibrary_eventCallSetTimeAndDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execCallSetTimeAndDirection)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfDay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SunYaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFunctionLibrary::CallSetTimeAndDirection(Z_Param_WorldContextObject,Z_Param_TimeOfDay,Z_Param_SunYaw);
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function CallSetTimeAndDirection

// Begin Class UFunctionLibrary Function GetCamera
struct Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics
{
	struct FunctionLibrary_eventGetCamera_Parms
	{
		ACamera* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "CompactNodeTitle", "MainCamera" },
		{ "DisplayName", "GetCamera" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetCamera_Parms, ReturnValue), Z_Construct_UClass_ACamera_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "GetCamera", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::FunctionLibrary_eventGetCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::FunctionLibrary_eventGetCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_GetCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_GetCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execGetCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACamera**)Z_Param__Result=UFunctionLibrary::GetCamera();
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function GetCamera

// Begin Class UFunctionLibrary Function GetMainMenu
struct Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics
{
	struct FunctionLibrary_eventGetMainMenu_Parms
	{
		UObject* WorldContextObject;
		UMainMenu* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UMG" },
		{ "CompactNodeTitle", "MainMenu" },
		{ "DisplayName", "GetMainMenu" },
		{ "Keywords", "GetMainMenu" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetMainMenu_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetMainMenu_Parms, ReturnValue), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "GetMainMenu", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::FunctionLibrary_eventGetMainMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::FunctionLibrary_eventGetMainMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_GetMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_GetMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execGetMainMenu)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMainMenu**)Z_Param__Result=UFunctionLibrary::GetMainMenu(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function GetMainMenu

// Begin Class UFunctionLibrary Function GetNumberedTexture
struct Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics
{
	struct FunctionLibrary_eventGetNumberedTexture_Parms
	{
		FString FolderPath;
		int32 Index;
		bool bIsLastTexture;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File|Image" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bIsLastTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLastTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetNumberedTexture_Parms, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderPath_MetaData), NewProp_FolderPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetNumberedTexture_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_bIsLastTexture_SetBit(void* Obj)
{
	((FunctionLibrary_eventGetNumberedTexture_Parms*)Obj)->bIsLastTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_bIsLastTexture = { "bIsLastTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventGetNumberedTexture_Parms), &Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_bIsLastTexture_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetNumberedTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_FolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_bIsLastTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "GetNumberedTexture", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::FunctionLibrary_eventGetNumberedTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::FunctionLibrary_eventGetNumberedTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execGetNumberedTexture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FolderPath);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_bIsLastTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UFunctionLibrary::GetNumberedTexture(Z_Param_FolderPath,Z_Param_Index,Z_Param_Out_bIsLastTexture);
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function GetNumberedTexture

// Begin Class UFunctionLibrary Function GetNumberedVideo
struct Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics
{
	struct FunctionLibrary_eventGetNumberedVideo_Parms
	{
		FString FolderPath;
		int32 Index;
		bool bIsLastVideo;
		UMediaSource* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File|Video" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bIsLastVideo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLastVideo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetNumberedVideo_Parms, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderPath_MetaData), NewProp_FolderPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetNumberedVideo_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_bIsLastVideo_SetBit(void* Obj)
{
	((FunctionLibrary_eventGetNumberedVideo_Parms*)Obj)->bIsLastVideo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_bIsLastVideo = { "bIsLastVideo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventGetNumberedVideo_Parms), &Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_bIsLastVideo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventGetNumberedVideo_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_FolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_bIsLastVideo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "GetNumberedVideo", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::FunctionLibrary_eventGetNumberedVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::FunctionLibrary_eventGetNumberedVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execGetNumberedVideo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FolderPath);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_bIsLastVideo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaSource**)Z_Param__Result=UFunctionLibrary::GetNumberedVideo(Z_Param_FolderPath,Z_Param_Index,Z_Param_Out_bIsLastVideo);
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function GetNumberedVideo

// Begin Class UFunctionLibrary Function IsNoInputForFiveMinutes
struct Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics
{
	struct FunctionLibrary_eventIsNoInputForFiveMinutes_Parms
	{
		float Time;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventIsNoInputForFiveMinutes_Parms, Time), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionLibrary_eventIsNoInputForFiveMinutes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventIsNoInputForFiveMinutes_Parms), &Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "IsNoInputForFiveMinutes", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::FunctionLibrary_eventIsNoInputForFiveMinutes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::FunctionLibrary_eventIsNoInputForFiveMinutes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execIsNoInputForFiveMinutes)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFunctionLibrary::IsNoInputForFiveMinutes(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function IsNoInputForFiveMinutes

// Begin Class UFunctionLibrary Function OutputString
struct Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics
{
	struct FunctionLibrary_eventOutputString_Parms
	{
		FString InString;
		float Duration;
		FLinearColor TextColor;
		bool bPrintToScreen;
		bool bPrintToLog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Development" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "CPP_Default_InString", "Hello" },
		{ "CPP_Default_TextColor", "(R=1.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static void NewProp_bPrintToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
	static void NewProp_bPrintToLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventOutputString_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventOutputString_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventOutputString_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
{
	((FunctionLibrary_eventOutputString_Parms*)Obj)->bPrintToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventOutputString_Parms), &Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
{
	((FunctionLibrary_eventOutputString_Parms*)Obj)->bPrintToLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventOutputString_Parms), &Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_bPrintToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::NewProp_bPrintToLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "OutputString", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::FunctionLibrary_eventOutputString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::FunctionLibrary_eventOutputString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_OutputString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_OutputString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execOutputString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
	P_GET_UBOOL(Z_Param_bPrintToScreen);
	P_GET_UBOOL(Z_Param_bPrintToLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFunctionLibrary::OutputString(Z_Param_InString,Z_Param_Duration,Z_Param_TextColor,Z_Param_bPrintToScreen,Z_Param_bPrintToLog);
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function OutputString

// Begin Class UFunctionLibrary Function SetPostProcessType
struct Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics
{
	struct FunctionLibrary_eventSetPostProcessType_Parms
	{
		APostProcessVolume* TargetPostProcessVolume;
		bool bEnablePostProcess;
		ETranslucencyType TranslucencyType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PostProcess" },
		{ "CPP_Default_bEnablePostProcess", "true" },
		{ "CPP_Default_TargetPostProcessVolume", "None" },
		{ "CPP_Default_TranslucencyType", "Raster" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPostProcessVolume;
	static void NewProp_bEnablePostProcess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePostProcess;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslucencyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslucencyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_TargetPostProcessVolume = { "TargetPostProcessVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSetPostProcessType_Parms, TargetPostProcessVolume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_bEnablePostProcess_SetBit(void* Obj)
{
	((FunctionLibrary_eventSetPostProcessType_Parms*)Obj)->bEnablePostProcess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_bEnablePostProcess = { "bEnablePostProcess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventSetPostProcessType_Parms), &Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_bEnablePostProcess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_TranslucencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_TranslucencyType = { "TranslucencyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSetPostProcessType_Parms, TranslucencyType), Z_Construct_UEnum_Engine_ETranslucencyType, METADATA_PARAMS(0, nullptr) }; // 1421844469
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_TargetPostProcessVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_bEnablePostProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_TranslucencyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::NewProp_TranslucencyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "SetPostProcessType", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::FunctionLibrary_eventSetPostProcessType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::FunctionLibrary_eventSetPostProcessType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execSetPostProcessType)
{
	P_GET_OBJECT(APostProcessVolume,Z_Param_TargetPostProcessVolume);
	P_GET_UBOOL(Z_Param_bEnablePostProcess);
	P_GET_ENUM(ETranslucencyType,Z_Param_TranslucencyType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFunctionLibrary::SetPostProcessType(Z_Param_TargetPostProcessVolume,Z_Param_bEnablePostProcess,ETranslucencyType(Z_Param_TranslucencyType));
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function SetPostProcessType

// Begin Class UFunctionLibrary Function SetTagActorShow
struct Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics
{
	struct FunctionLibrary_eventSetTagActorShow_Parms
	{
		UObject* WorldContextObject;
		FName TagName;
		bool bIsShow;
		TArray<AActor*> TagActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorTag" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static void NewProp_bIsShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSetTagActorShow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSetTagActorShow_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_bIsShow_SetBit(void* Obj)
{
	((FunctionLibrary_eventSetTagActorShow_Parms*)Obj)->bIsShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_bIsShow = { "bIsShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventSetTagActorShow_Parms), &Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_bIsShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_TagActors_Inner = { "TagActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_TagActors = { "TagActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSetTagActorShow_Parms, TagActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_bIsShow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_TagActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::NewProp_TagActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "SetTagActorShow", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::FunctionLibrary_eventSetTagActorShow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::FunctionLibrary_eventSetTagActorShow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execSetTagActorShow)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_GET_UBOOL(Z_Param_bIsShow);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_TagActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFunctionLibrary::SetTagActorShow(Z_Param_WorldContextObject,Z_Param_TagName,Z_Param_bIsShow,Z_Param_Out_TagActors);
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function SetTagActorShow

// Begin Class UFunctionLibrary Function SwitchCamera
struct Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics
{
	struct FunctionLibrary_eventSwitchCamera_Parms
	{
		int32 CameraIndex;
		bool bPlaySound;
		ASwitchingCamera* OutCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CameraIndex;
	static void NewProp_bPlaySound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaySound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::NewProp_CameraIndex = { "CameraIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchCamera_Parms, CameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraIndex_MetaData), NewProp_CameraIndex_MetaData) };
void Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::NewProp_bPlaySound_SetBit(void* Obj)
{
	((FunctionLibrary_eventSwitchCamera_Parms*)Obj)->bPlaySound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::NewProp_bPlaySound = { "bPlaySound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventSwitchCamera_Parms), &Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::NewProp_bPlaySound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::NewProp_OutCamera = { "OutCamera", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchCamera_Parms, OutCamera), Z_Construct_UClass_ASwitchingCamera_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::NewProp_CameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::NewProp_bPlaySound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::NewProp_OutCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "SwitchCamera", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::FunctionLibrary_eventSwitchCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::FunctionLibrary_eventSwitchCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_SwitchCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_SwitchCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execSwitchCamera)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CameraIndex);
	P_GET_UBOOL(Z_Param_bPlaySound);
	P_GET_OBJECT_REF(ASwitchingCamera,Z_Param_Out_OutCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFunctionLibrary::SwitchCamera(Z_Param_CameraIndex,Z_Param_bPlaySound,P_ARG_GC_BARRIER(Z_Param_Out_OutCamera));
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function SwitchCamera

// Begin Class UFunctionLibrary Function SwitchCameraLocation
struct Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics
{
	struct FunctionLibrary_eventSwitchCameraLocation_Parms
	{
		int32 CameraIndex;
		FVector NewPosition;
		float NewRotationYaw;
		ASwitchingCamera* OutCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CameraIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRotationYaw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::NewProp_CameraIndex = { "CameraIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchCameraLocation_Parms, CameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraIndex_MetaData), NewProp_CameraIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchCameraLocation_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::NewProp_NewRotationYaw = { "NewRotationYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchCameraLocation_Parms, NewRotationYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::NewProp_OutCamera = { "OutCamera", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchCameraLocation_Parms, OutCamera), Z_Construct_UClass_ASwitchingCamera_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::NewProp_CameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::NewProp_NewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::NewProp_NewRotationYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::NewProp_OutCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "SwitchCameraLocation", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::FunctionLibrary_eventSwitchCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::FunctionLibrary_eventSwitchCameraLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execSwitchCameraLocation)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CameraIndex);
	P_GET_STRUCT(FVector,Z_Param_NewPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRotationYaw);
	P_GET_OBJECT_REF(ASwitchingCamera,Z_Param_Out_OutCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFunctionLibrary::SwitchCameraLocation(Z_Param_CameraIndex,Z_Param_NewPosition,Z_Param_NewRotationYaw,P_ARG_GC_BARRIER(Z_Param_Out_OutCamera));
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function SwitchCameraLocation

// Begin Class UFunctionLibrary Function SwitchControlRights
struct Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics
{
	struct FunctionLibrary_eventSwitchControlRights_Parms
	{
		bool bIsCamera;
		int32 CameraIndex;
		int32 RoamCameraIndex;
		ASwitchingCamera* OutCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoamCameraIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCamera;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CameraIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoamCameraIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_bIsCamera_SetBit(void* Obj)
{
	((FunctionLibrary_eventSwitchControlRights_Parms*)Obj)->bIsCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_bIsCamera = { "bIsCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionLibrary_eventSwitchControlRights_Parms), &Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_bIsCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_CameraIndex = { "CameraIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchControlRights_Parms, CameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraIndex_MetaData), NewProp_CameraIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_RoamCameraIndex = { "RoamCameraIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchControlRights_Parms, RoamCameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoamCameraIndex_MetaData), NewProp_RoamCameraIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_OutCamera = { "OutCamera", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventSwitchControlRights_Parms, OutCamera), Z_Construct_UClass_ASwitchingCamera_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_bIsCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_CameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_RoamCameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::NewProp_OutCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "SwitchControlRights", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::FunctionLibrary_eventSwitchControlRights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::FunctionLibrary_eventSwitchControlRights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execSwitchControlRights)
{
	P_GET_UBOOL(Z_Param_bIsCamera);
	P_GET_PROPERTY(FIntProperty,Z_Param_CameraIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_RoamCameraIndex);
	P_GET_OBJECT_REF(ASwitchingCamera,Z_Param_Out_OutCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFunctionLibrary::SwitchControlRights(Z_Param_bIsCamera,Z_Param_CameraIndex,Z_Param_RoamCameraIndex,P_ARG_GC_BARRIER(Z_Param_Out_OutCamera));
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function SwitchControlRights

// Begin Class UFunctionLibrary Function TimeConversion
struct Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics
{
	struct FunctionLibrary_eventTimeConversion_Parms
	{
		float TimeOfDay;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventTimeConversion_Parms, TimeOfDay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionLibrary_eventTimeConversion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::NewProp_TimeOfDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, nullptr, "TimeConversion", nullptr, nullptr, Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::FunctionLibrary_eventTimeConversion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::FunctionLibrary_eventTimeConversion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionLibrary_TimeConversion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionLibrary_TimeConversion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionLibrary::execTimeConversion)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfDay);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFunctionLibrary::TimeConversion(Z_Param_TimeOfDay);
	P_NATIVE_END;
}
// End Class UFunctionLibrary Function TimeConversion

// Begin Class UFunctionLibrary
void UFunctionLibrary::StaticRegisterNativesUFunctionLibrary()
{
	UClass* Class = UFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallSetTimeAndDirection", &UFunctionLibrary::execCallSetTimeAndDirection },
		{ "GetCamera", &UFunctionLibrary::execGetCamera },
		{ "GetMainMenu", &UFunctionLibrary::execGetMainMenu },
		{ "GetNumberedTexture", &UFunctionLibrary::execGetNumberedTexture },
		{ "GetNumberedVideo", &UFunctionLibrary::execGetNumberedVideo },
		{ "IsNoInputForFiveMinutes", &UFunctionLibrary::execIsNoInputForFiveMinutes },
		{ "OutputString", &UFunctionLibrary::execOutputString },
		{ "SetPostProcessType", &UFunctionLibrary::execSetPostProcessType },
		{ "SetTagActorShow", &UFunctionLibrary::execSetTagActorShow },
		{ "SwitchCamera", &UFunctionLibrary::execSwitchCamera },
		{ "SwitchCameraLocation", &UFunctionLibrary::execSwitchCameraLocation },
		{ "SwitchControlRights", &UFunctionLibrary::execSwitchControlRights },
		{ "TimeConversion", &UFunctionLibrary::execTimeConversion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFunctionLibrary);
UClass* Z_Construct_UClass_UFunctionLibrary_NoRegister()
{
	return UFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/FunctionLibrary.h" },
		{ "ModuleRelativePath", "Data/FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFunctionLibrary_CallSetTimeAndDirection, "CallSetTimeAndDirection" }, // 2606216752
		{ &Z_Construct_UFunction_UFunctionLibrary_GetCamera, "GetCamera" }, // 3357477887
		{ &Z_Construct_UFunction_UFunctionLibrary_GetMainMenu, "GetMainMenu" }, // 4237446049
		{ &Z_Construct_UFunction_UFunctionLibrary_GetNumberedTexture, "GetNumberedTexture" }, // 1321296547
		{ &Z_Construct_UFunction_UFunctionLibrary_GetNumberedVideo, "GetNumberedVideo" }, // 1323059894
		{ &Z_Construct_UFunction_UFunctionLibrary_IsNoInputForFiveMinutes, "IsNoInputForFiveMinutes" }, // 1318934921
		{ &Z_Construct_UFunction_UFunctionLibrary_OutputString, "OutputString" }, // 4223272216
		{ &Z_Construct_UFunction_UFunctionLibrary_SetPostProcessType, "SetPostProcessType" }, // 1183671358
		{ &Z_Construct_UFunction_UFunctionLibrary_SetTagActorShow, "SetTagActorShow" }, // 1467927082
		{ &Z_Construct_UFunction_UFunctionLibrary_SwitchCamera, "SwitchCamera" }, // 1141063906
		{ &Z_Construct_UFunction_UFunctionLibrary_SwitchCameraLocation, "SwitchCameraLocation" }, // 3227380250
		{ &Z_Construct_UFunction_UFunctionLibrary_SwitchControlRights, "SwitchControlRights" }, // 2569254599
		{ &Z_Construct_UFunction_UFunctionLibrary_TimeConversion, "TimeConversion" }, // 2947682234
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFunctionLibrary_Statics::ClassParams = {
	&UFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFunctionLibrary.OuterSingleton, Z_Construct_UClass_UFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFunctionLibrary.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UFunctionLibrary>()
{
	return UFunctionLibrary::StaticClass();
}
UFunctionLibrary::UFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionLibrary);
UFunctionLibrary::~UFunctionLibrary() {}
// End Class UFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFunctionLibrary, UFunctionLibrary::StaticClass, TEXT("UFunctionLibrary"), &Z_Registration_Info_UClass_UFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFunctionLibrary), 3183237926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_2480712431(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
