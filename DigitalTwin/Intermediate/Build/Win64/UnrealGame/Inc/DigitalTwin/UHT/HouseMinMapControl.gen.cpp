// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/HouseType/HouseMinMapControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHouseMinMapControl() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DIGITALTWIN_API UClass* Z_Construct_UClass_AHouseMinMapControl();
DIGITALTWIN_API UClass* Z_Construct_UClass_AHouseMinMapControl_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_AMapButton_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UHouseMinMap_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class AHouseMinMapControl Function MapToWorld
struct Z_Construct_UFunction_AHouseMinMapControl_MapToWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinMapData" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseMinMapControl_MapToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseMinMapControl, nullptr, "MapToWorld", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseMinMapControl_MapToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseMinMapControl_MapToWorld_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHouseMinMapControl_MapToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseMinMapControl_MapToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseMinMapControl::execMapToWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MapToWorld();
	P_NATIVE_END;
}
// End Class AHouseMinMapControl Function MapToWorld

// Begin Class AHouseMinMapControl Function SetMinMap
struct Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics
{
	struct HouseMinMapControl_eventSetMinMap_Parms
	{
		UTexture2D* Image;
		float MapSize;
		float MinMapSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinMapData" },
		{ "CPP_Default_MapSize", "1.000000" },
		{ "CPP_Default_MinMapSize", "0.250000" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMapSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMapControl_eventSetMinMap_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::NewProp_MapSize = { "MapSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMapControl_eventSetMinMap_Parms, MapSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::NewProp_MinMapSize = { "MinMapSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseMinMapControl_eventSetMinMap_Parms, MinMapSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::NewProp_MapSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::NewProp_MinMapSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseMinMapControl, nullptr, "SetMinMap", nullptr, nullptr, Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::HouseMinMapControl_eventSetMinMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::HouseMinMapControl_eventSetMinMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHouseMinMapControl_SetMinMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseMinMapControl_SetMinMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseMinMapControl::execSetMinMap)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MapSize);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinMapSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinMap(Z_Param_Image,Z_Param_MapSize,Z_Param_MinMapSize);
	P_NATIVE_END;
}
// End Class AHouseMinMapControl Function SetMinMap

// Begin Class AHouseMinMapControl
void AHouseMinMapControl::StaticRegisterNativesAHouseMinMapControl()
{
	UClass* Class = AHouseMinMapControl::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MapToWorld", &AHouseMinMapControl::execMapToWorld },
		{ "SetMinMap", &AHouseMinMapControl::execSetMinMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHouseMinMapControl);
UClass* Z_Construct_UClass_AHouseMinMapControl_NoRegister()
{
	return AHouseMinMapControl::StaticClass();
}
struct Z_Construct_UClass_AHouseMinMapControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HouseType/HouseMinMapControl.h" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseMap_MetaData[] = {
		{ "Category", "MinMapData" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMaterialDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMaterialInstance_MetaData[] = {
		{ "Category", "MinMapData" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMappingSize_MetaData[] = {
		{ "Category", "MinMapData" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMapWidgetClass_MetaData[] = {
		{ "Category", "MinMapData" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMapWidgetInstance_MetaData[] = {
		{ "Category", "MinMapData" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllMinMapButton_MetaData[] = {
		{ "Category", "MinMapData" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMapping_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseMinMapControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HouseMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMaterialDynamic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMaterialInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapMappingSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MinMapWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinMapWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllMinMapButton_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllMinMapButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHouseMinMapControl_MapToWorld, "MapToWorld" }, // 663208177
		{ &Z_Construct_UFunction_AHouseMinMapControl_SetMinMap, "SetMinMap" }, // 3018510270
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHouseMinMapControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_HouseMap = { "HouseMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, HouseMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseMap_MetaData), NewProp_HouseMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MapMaterialDynamic = { "MapMaterialDynamic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, MapMaterialDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMaterialDynamic_MetaData), NewProp_MapMaterialDynamic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MapMaterialInstance = { "MapMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, MapMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMaterialInstance_MetaData), NewProp_MapMaterialInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MapMappingSize = { "MapMappingSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, MapMappingSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMappingSize_MetaData), NewProp_MapMappingSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MinMapWidgetClass = { "MinMapWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, MinMapWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHouseMinMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMapWidgetClass_MetaData), NewProp_MinMapWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MinMapWidgetInstance = { "MinMapWidgetInstance", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, MinMapWidgetInstance), Z_Construct_UClass_UHouseMinMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMapWidgetInstance_MetaData), NewProp_MinMapWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_AllMinMapButton_Inner = { "AllMinMapButton", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMapButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_AllMinMapButton = { "AllMinMapButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, AllMinMapButton), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllMinMapButton_MetaData), NewProp_AllMinMapButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MapMapping = { "MapMapping", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseMinMapControl, MapMapping), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMapping_MetaData), NewProp_MapMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHouseMinMapControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_HouseMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MapMaterialDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MapMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MapMappingSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MinMapWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MinMapWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_AllMinMapButton_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_AllMinMapButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseMinMapControl_Statics::NewProp_MapMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseMinMapControl_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHouseMinMapControl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseMinMapControl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHouseMinMapControl_Statics::ClassParams = {
	&AHouseMinMapControl::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHouseMinMapControl_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHouseMinMapControl_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseMinMapControl_Statics::Class_MetaDataParams), Z_Construct_UClass_AHouseMinMapControl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHouseMinMapControl()
{
	if (!Z_Registration_Info_UClass_AHouseMinMapControl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHouseMinMapControl.OuterSingleton, Z_Construct_UClass_AHouseMinMapControl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHouseMinMapControl.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<AHouseMinMapControl>()
{
	return AHouseMinMapControl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHouseMinMapControl);
AHouseMinMapControl::~AHouseMinMapControl() {}
// End Class AHouseMinMapControl

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseMinMapControl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHouseMinMapControl, AHouseMinMapControl::StaticClass, TEXT("AHouseMinMapControl"), &Z_Registration_Info_UClass_AHouseMinMapControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHouseMinMapControl), 1682131129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseMinMapControl_h_2978642108(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseMinMapControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseMinMapControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
