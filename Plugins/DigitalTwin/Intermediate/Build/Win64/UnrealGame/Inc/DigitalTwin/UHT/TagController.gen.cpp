// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/Tag/TagController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTagController() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_ATagController();
DIGITALTWIN_API UClass* Z_Construct_UClass_ATagController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class ATagController
void ATagController::StaticRegisterNativesATagController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATagController);
UClass* Z_Construct_UClass_ATagController_NoRegister()
{
	return ATagController::StaticClass();
}
struct Z_Construct_UClass_ATagController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/Tag/TagController.h" },
		{ "ModuleRelativePath", "Actor/Tag/TagController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATagController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATagController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATagController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATagController_Statics::ClassParams = {
	&ATagController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATagController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATagController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATagController()
{
	if (!Z_Registration_Info_UClass_ATagController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATagController.OuterSingleton, Z_Construct_UClass_ATagController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATagController.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<ATagController>()
{
	return ATagController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATagController);
ATagController::~ATagController() {}
// End Class ATagController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Tag_TagController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATagController, ATagController::StaticClass, TEXT("ATagController"), &Z_Registration_Info_UClass_ATagController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATagController), 1880165290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Tag_TagController_h_1896070493(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Tag_TagController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Tag_TagController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
