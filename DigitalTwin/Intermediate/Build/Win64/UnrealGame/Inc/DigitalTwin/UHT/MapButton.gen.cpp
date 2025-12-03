// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/HouseType/MapButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapButton() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_AMapButton();
DIGITALTWIN_API UClass* Z_Construct_UClass_AMapButton_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class AMapButton
void AMapButton::StaticRegisterNativesAMapButton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapButton);
UClass* Z_Construct_UClass_AMapButton_NoRegister()
{
	return AMapButton::StaticClass();
}
struct Z_Construct_UClass_AMapButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HouseType/MapButton.h" },
		{ "ModuleRelativePath", "Actor/HouseType/MapButton.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMapButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapButton_Statics::ClassParams = {
	&AMapButton::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapButton_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapButton()
{
	if (!Z_Registration_Info_UClass_AMapButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapButton.OuterSingleton, Z_Construct_UClass_AMapButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapButton.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<AMapButton>()
{
	return AMapButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapButton);
AMapButton::~AMapButton() {}
// End Class AMapButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_MapButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapButton, AMapButton::StaticClass, TEXT("AMapButton"), &Z_Registration_Info_UClass_AMapButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapButton), 2253780386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_MapButton_h_3485825902(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_MapButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_MapButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
