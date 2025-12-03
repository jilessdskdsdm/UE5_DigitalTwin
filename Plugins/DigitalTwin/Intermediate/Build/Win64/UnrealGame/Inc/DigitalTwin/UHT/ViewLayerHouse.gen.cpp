// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/HouseType/ViewLayerHouse.h"
#include "DigitalTwin/Data/Structure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewLayerHouse() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_ALayerButtons_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_AViewLayerHouse();
DIGITALTWIN_API UClass* Z_Construct_UClass_AViewLayerHouse_NoRegister();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FLayerData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class AViewLayerHouse
void AViewLayerHouse::StaticRegisterNativesAViewLayerHouse()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AViewLayerHouse);
UClass* Z_Construct_UClass_AViewLayerHouse_NoRegister()
{
	return AViewLayerHouse::StaticClass();
}
struct Z_Construct_UClass_AViewLayerHouse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HouseType/ViewLayerHouse.h" },
		{ "ModuleRelativePath", "Actor/HouseType/ViewLayerHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ViewHouseData" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Actor/HouseType/ViewLayerHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ViewHouseData" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Actor/HouseType/ViewLayerHouse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AViewLayerHouse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AViewLayerHouse_Statics::NewProp_LayerButton = { "LayerButton", nullptr, (EPropertyFlags)0x0041000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AViewLayerHouse, LayerButton), Z_Construct_UClass_ALayerButtons_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerButton_MetaData), NewProp_LayerButton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AViewLayerHouse_Statics::NewProp_LayerData = { "LayerData", nullptr, (EPropertyFlags)0x0041000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AViewLayerHouse, LayerData), Z_Construct_UScriptStruct_FLayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerData_MetaData), NewProp_LayerData_MetaData) }; // 3306208353
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AViewLayerHouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AViewLayerHouse_Statics::NewProp_LayerButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AViewLayerHouse_Statics::NewProp_LayerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewLayerHouse_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AViewLayerHouse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewLayerHouse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AViewLayerHouse_Statics::ClassParams = {
	&AViewLayerHouse::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AViewLayerHouse_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AViewLayerHouse_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AViewLayerHouse_Statics::Class_MetaDataParams), Z_Construct_UClass_AViewLayerHouse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AViewLayerHouse()
{
	if (!Z_Registration_Info_UClass_AViewLayerHouse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AViewLayerHouse.OuterSingleton, Z_Construct_UClass_AViewLayerHouse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AViewLayerHouse.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<AViewLayerHouse>()
{
	return AViewLayerHouse::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AViewLayerHouse);
AViewLayerHouse::~AViewLayerHouse() {}
// End Class AViewLayerHouse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_ViewLayerHouse_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AViewLayerHouse, AViewLayerHouse::StaticClass, TEXT("AViewLayerHouse"), &Z_Registration_Info_UClass_AViewLayerHouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AViewLayerHouse), 827966320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_ViewLayerHouse_h_4120167229(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_ViewLayerHouse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_ViewLayerHouse_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
