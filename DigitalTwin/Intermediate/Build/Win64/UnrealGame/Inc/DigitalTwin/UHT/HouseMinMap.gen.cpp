// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/HouseMinMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHouseMinMap() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIGITALTWIN_API UClass* Z_Construct_UClass_AMapButton_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UHouseMinMap();
DIGITALTWIN_API UClass* Z_Construct_UClass_UHouseMinMap_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UInsertionImage_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMinMapButton_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UHouseMinMap Function CreateMinMapButton
struct Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics
{
	struct HouseMinMap_eventCreateMinMapButton_Parms
	{
		AMapButton* RelatedMapButton;
		FVector WorldLocation;
		FVector MapOrigin;
		float MapWidth;
		float MapHeight;
		UMinMapButton* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinMap" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "UserWidget/HouseMinMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedMapButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapOrigin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_RelatedMapButton = { "RelatedMapButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventCreateMinMapButton_Parms, RelatedMapButton), Z_Construct_UClass_AMapButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventCreateMinMapButton_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_MapOrigin = { "MapOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventCreateMinMapButton_Parms, MapOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventCreateMinMapButton_Parms, MapWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventCreateMinMapButton_Parms, MapHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventCreateMinMapButton_Parms, ReturnValue), Z_Construct_UClass_UMinMapButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_RelatedMapButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_MapOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_MapHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHouseMinMap, nullptr, "CreateMinMapButton", nullptr, nullptr, Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::HouseMinMap_eventCreateMinMapButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::HouseMinMap_eventCreateMinMapButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHouseMinMap::execCreateMinMapButton)
{
	P_GET_OBJECT(AMapButton,Z_Param_RelatedMapButton);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_STRUCT(FVector,Z_Param_MapOrigin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MapWidth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MapHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMinMapButton**)Z_Param__Result=P_THIS->CreateMinMapButton(Z_Param_RelatedMapButton,Z_Param_WorldLocation,Z_Param_MapOrigin,Z_Param_MapWidth,Z_Param_MapHeight);
	P_NATIVE_END;
}
// End Class UHouseMinMap Function CreateMinMapButton

// Begin Class UHouseMinMap Function SetMinMap
struct Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics
{
	struct HouseMinMap_eventSetMinMap_Parms
	{
		UTexture2D* Image;
		float Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinMap" },
		{ "CPP_Default_Size", "1.000000" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "UserWidget/HouseMinMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventSetMinMap_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventSetMinMap_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHouseMinMap, nullptr, "SetMinMap", nullptr, nullptr, Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::HouseMinMap_eventSetMinMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::HouseMinMap_eventSetMinMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHouseMinMap_SetMinMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHouseMinMap_SetMinMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHouseMinMap::execSetMinMap)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinMap(Z_Param_Image,Z_Param_Size);
	P_NATIVE_END;
}
// End Class UHouseMinMap Function SetMinMap

// Begin Class UHouseMinMap Function UpdateCameraPosition
struct Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics
{
	struct HouseMinMap_eventUpdateCameraPosition_Parms
	{
		FVector WorldLocation;
		FRotator WorldRotation;
		FVector MapOrigin;
		float MapWidth;
		float MapHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinMap" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "UserWidget/HouseMinMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapOrigin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventUpdateCameraPosition_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_WorldRotation = { "WorldRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventUpdateCameraPosition_Parms, WorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRotation_MetaData), NewProp_WorldRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_MapOrigin = { "MapOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventUpdateCameraPosition_Parms, MapOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapOrigin_MetaData), NewProp_MapOrigin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventUpdateCameraPosition_Parms, MapWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMap_eventUpdateCameraPosition_Parms, MapHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_WorldRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_MapOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::NewProp_MapHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHouseMinMap, nullptr, "UpdateCameraPosition", nullptr, nullptr, Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::HouseMinMap_eventUpdateCameraPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::HouseMinMap_eventUpdateCameraPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHouseMinMap::execUpdateCameraPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_WorldRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_MapOrigin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MapWidth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MapHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCameraPosition(Z_Param_Out_WorldLocation,Z_Param_Out_WorldRotation,Z_Param_Out_MapOrigin,Z_Param_MapWidth,Z_Param_MapHeight);
	P_NATIVE_END;
}
// End Class UHouseMinMap Function UpdateCameraPosition

// Begin Class UHouseMinMap
void UHouseMinMap::StaticRegisterNativesUHouseMinMap()
{
	UClass* Class = UHouseMinMap::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMinMapButton", &UHouseMinMap::execCreateMinMapButton },
		{ "SetMinMap", &UHouseMinMap::execSetMinMap },
		{ "UpdateCameraPosition", &UHouseMinMap::execUpdateCameraPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHouseMinMap);
UClass* Z_Construct_UClass_UHouseMinMap_NoRegister()
{
	return UHouseMinMap::StaticClass();
}
struct Z_Construct_UClass_UHouseMinMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserWidget/HouseMinMap.h" },
		{ "ModuleRelativePath", "UserWidget/HouseMinMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMapImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HouseMinMap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/HouseMinMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPosition_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HouseMinMap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/HouseMinMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MinMap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/HouseMinMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonWidgetClass_MetaData[] = {
		{ "Category", "MinMap" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "UserWidget/HouseMinMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinMapImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonContainer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ButtonWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHouseMinMap_CreateMinMapButton, "CreateMinMapButton" }, // 4110450416
		{ &Z_Construct_UFunction_UHouseMinMap_SetMinMap, "SetMinMap" }, // 813729267
		{ &Z_Construct_UFunction_UHouseMinMap_UpdateCameraPosition, "UpdateCameraPosition" }, // 3440782791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHouseMinMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHouseMinMap_Statics::NewProp_MinMapImage = { "MinMapImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHouseMinMap, MinMapImage), Z_Construct_UClass_UInsertionImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMapImage_MetaData), NewProp_MinMapImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHouseMinMap_Statics::NewProp_CameraPosition = { "CameraPosition", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHouseMinMap, CameraPosition), Z_Construct_UClass_UInsertionImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPosition_MetaData), NewProp_CameraPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHouseMinMap_Statics::NewProp_ButtonContainer = { "ButtonContainer", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHouseMinMap, ButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonContainer_MetaData), NewProp_ButtonContainer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHouseMinMap_Statics::NewProp_ButtonWidgetClass = { "ButtonWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHouseMinMap, ButtonWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMinMapButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonWidgetClass_MetaData), NewProp_ButtonWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHouseMinMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHouseMinMap_Statics::NewProp_MinMapImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHouseMinMap_Statics::NewProp_CameraPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHouseMinMap_Statics::NewProp_ButtonContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHouseMinMap_Statics::NewProp_ButtonWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHouseMinMap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHouseMinMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHouseMinMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHouseMinMap_Statics::ClassParams = {
	&UHouseMinMap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHouseMinMap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHouseMinMap_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHouseMinMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UHouseMinMap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHouseMinMap()
{
	if (!Z_Registration_Info_UClass_UHouseMinMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHouseMinMap.OuterSingleton, Z_Construct_UClass_UHouseMinMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHouseMinMap.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UHouseMinMap>()
{
	return UHouseMinMap::StaticClass();
}
UHouseMinMap::UHouseMinMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHouseMinMap);
UHouseMinMap::~UHouseMinMap() {}
// End Class UHouseMinMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHouseMinMap, UHouseMinMap::StaticClass, TEXT("UHouseMinMap"), &Z_Registration_Info_UClass_UHouseMinMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHouseMinMap), 586152171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_2925439087(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
