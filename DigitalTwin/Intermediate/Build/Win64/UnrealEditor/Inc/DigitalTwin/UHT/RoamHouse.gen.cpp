// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/HouseType/RoamHouse.h"
#include "DigitalTwin/Data/Structure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoamHouse() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_ARoamHouse();
DIGITALTWIN_API UClass* Z_Construct_UClass_ARoamHouse_NoRegister();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FHouseData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class ARoamHouse
void ARoamHouse::StaticRegisterNativesARoamHouse()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoamHouse);
UClass* Z_Construct_UClass_ARoamHouse_NoRegister()
{
	return ARoamHouse::StaticClass();
}
struct Z_Construct_UClass_ARoamHouse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HouseType/RoamHouse.h" },
		{ "ModuleRelativePath", "Actor/HouseType/RoamHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HouseType/RoamHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMapControl_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HouseType/RoamHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoamCamera_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HouseType/RoamHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ViewHouseData" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Actor/HouseType/RoamHouse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinMapControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoamCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HouseData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoamHouse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamHouse_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamHouse, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamHouse_Statics::NewProp_MinMapControl = { "MinMapControl", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamHouse, MinMapControl), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMapControl_MetaData), NewProp_MinMapControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamHouse_Statics::NewProp_RoamCamera = { "RoamCamera", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamHouse, RoamCamera), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoamCamera_MetaData), NewProp_RoamCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoamHouse_Statics::NewProp_HouseData = { "HouseData", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoamHouse, HouseData), Z_Construct_UScriptStruct_FHouseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseData_MetaData), NewProp_HouseData_MetaData) }; // 1703076476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoamHouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamHouse_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamHouse_Statics::NewProp_MinMapControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamHouse_Statics::NewProp_RoamCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamHouse_Statics::NewProp_HouseData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoamHouse_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoamHouse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoamHouse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoamHouse_Statics::ClassParams = {
	&ARoamHouse::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARoamHouse_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoamHouse_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoamHouse_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoamHouse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoamHouse()
{
	if (!Z_Registration_Info_UClass_ARoamHouse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoamHouse.OuterSingleton, Z_Construct_UClass_ARoamHouse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoamHouse.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<ARoamHouse>()
{
	return ARoamHouse::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoamHouse);
ARoamHouse::~ARoamHouse() {}
// End Class ARoamHouse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_RoamHouse_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoamHouse, ARoamHouse::StaticClass, TEXT("ARoamHouse"), &Z_Registration_Info_UClass_ARoamHouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoamHouse), 1102043411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_RoamHouse_h_3855275924(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_RoamHouse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_RoamHouse_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
