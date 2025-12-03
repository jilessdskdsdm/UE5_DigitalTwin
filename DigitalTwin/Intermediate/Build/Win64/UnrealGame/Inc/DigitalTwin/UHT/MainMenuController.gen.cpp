// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/MainMenuController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DIGITALTWIN_API UClass* Z_Construct_UClass_AMainMenuController();
DIGITALTWIN_API UClass* Z_Construct_UClass_AMainMenuController_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class AMainMenuController
void AMainMenuController::StaticRegisterNativesAMainMenuController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuController);
UClass* Z_Construct_UClass_AMainMenuController_NoRegister()
{
	return AMainMenuController::StaticClass();
}
struct Z_Construct_UClass_AMainMenuController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/MainMenuController.h" },
		{ "ModuleRelativePath", "UserWidget/MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UserWidget/MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuInstance_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84 Widget \xe5\xae\x9e\xe4\xbe\x8b\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84 Widget \xe5\xae\x9e\xe4\xbe\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuController_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuController, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuController_Statics::NewProp_MainMenuInstance = { "MainMenuInstance", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuController, MainMenuInstance), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuInstance_MetaData), NewProp_MainMenuInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuController_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuController_Statics::NewProp_MainMenuInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainMenuController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuController_Statics::ClassParams = {
	&AMainMenuController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainMenuController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainMenuController()
{
	if (!Z_Registration_Info_UClass_AMainMenuController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuController.OuterSingleton, Z_Construct_UClass_AMainMenuController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainMenuController.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<AMainMenuController>()
{
	return AMainMenuController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuController);
AMainMenuController::~AMainMenuController() {}
// End Class AMainMenuController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenuController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuController, AMainMenuController::StaticClass, TEXT("AMainMenuController"), &Z_Registration_Info_UClass_AMainMenuController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuController), 2063089594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenuController_h_688627631(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenuController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenuController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
