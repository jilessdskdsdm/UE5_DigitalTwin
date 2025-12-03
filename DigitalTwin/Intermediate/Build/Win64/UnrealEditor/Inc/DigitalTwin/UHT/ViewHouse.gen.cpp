// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/HouseType/ViewHouse.h"
#include "DigitalTwin/Data/Structure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewHouse() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_AHouseButton_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_AViewHouse();
DIGITALTWIN_API UClass* Z_Construct_UClass_AViewHouse_NoRegister();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FHouseData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class AViewHouse
void AViewHouse::StaticRegisterNativesAViewHouse()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AViewHouse);
UClass* Z_Construct_UClass_AViewHouse_NoRegister()
{
	return AViewHouse::StaticClass();
}
struct Z_Construct_UClass_AViewHouse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HouseType/ViewHouse.h" },
		{ "ModuleRelativePath", "Actor/HouseType/ViewHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ViewHouseData" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Actor/HouseType/ViewHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ViewHouseData" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Actor/HouseType/ViewHouse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HouseButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HouseData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AViewHouse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AViewHouse_Statics::NewProp_HouseButton = { "HouseButton", nullptr, (EPropertyFlags)0x0041000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AViewHouse, HouseButton), Z_Construct_UClass_AHouseButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseButton_MetaData), NewProp_HouseButton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AViewHouse_Statics::NewProp_HouseData = { "HouseData", nullptr, (EPropertyFlags)0x0041000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AViewHouse, HouseData), Z_Construct_UScriptStruct_FHouseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseData_MetaData), NewProp_HouseData_MetaData) }; // 1703076476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AViewHouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AViewHouse_Statics::NewProp_HouseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AViewHouse_Statics::NewProp_HouseData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewHouse_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AViewHouse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewHouse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AViewHouse_Statics::ClassParams = {
	&AViewHouse::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AViewHouse_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AViewHouse_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AViewHouse_Statics::Class_MetaDataParams), Z_Construct_UClass_AViewHouse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AViewHouse()
{
	if (!Z_Registration_Info_UClass_AViewHouse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AViewHouse.OuterSingleton, Z_Construct_UClass_AViewHouse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AViewHouse.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<AViewHouse>()
{
	return AViewHouse::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AViewHouse);
AViewHouse::~AViewHouse() {}
// End Class AViewHouse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_ViewHouse_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AViewHouse, AViewHouse::StaticClass, TEXT("AViewHouse"), &Z_Registration_Info_UClass_AViewHouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AViewHouse), 1332002643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_ViewHouse_h_1269743663(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_ViewHouse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_ViewHouse_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
