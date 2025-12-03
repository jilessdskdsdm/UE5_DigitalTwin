// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EncryptionProject/Encryption/PasswordEncryption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePasswordEncryption() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_APasswordEncryption();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_APasswordEncryption_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_EncryptionProject();
// End Cross Module References

// Begin Class APasswordEncryption
void APasswordEncryption::StaticRegisterNativesAPasswordEncryption()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APasswordEncryption);
UClass* Z_Construct_UClass_APasswordEncryption_NoRegister()
{
	return APasswordEncryption::StaticClass();
}
struct Z_Construct_UClass_APasswordEncryption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Encryption/PasswordEncryption.h" },
		{ "ModuleRelativePath", "Encryption/PasswordEncryption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PasswordClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ProjectData" },
		{ "ModuleRelativePath", "Encryption/PasswordEncryption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PasswordInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Encryption/PasswordEncryption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "ModuleRelativePath", "Encryption/PasswordEncryption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterPassword_MetaData[] = {
		{ "Category", "PasswordData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Encryption/PasswordEncryption.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PasswordClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PasswordInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnterPassword;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APasswordEncryption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APasswordEncryption_Statics::NewProp_PasswordClass = { "PasswordClass", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APasswordEncryption, PasswordClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PasswordClass_MetaData), NewProp_PasswordClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APasswordEncryption_Statics::NewProp_PasswordInstance = { "PasswordInstance", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APasswordEncryption, PasswordInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PasswordInstance_MetaData), NewProp_PasswordInstance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APasswordEncryption_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APasswordEncryption, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APasswordEncryption_Statics::NewProp_EnterPassword = { "EnterPassword", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APasswordEncryption, EnterPassword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterPassword_MetaData), NewProp_EnterPassword_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APasswordEncryption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APasswordEncryption_Statics::NewProp_PasswordClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APasswordEncryption_Statics::NewProp_PasswordInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APasswordEncryption_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APasswordEncryption_Statics::NewProp_EnterPassword,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APasswordEncryption_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APasswordEncryption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EncryptionProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APasswordEncryption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APasswordEncryption_Statics::ClassParams = {
	&APasswordEncryption::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APasswordEncryption_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APasswordEncryption_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APasswordEncryption_Statics::Class_MetaDataParams), Z_Construct_UClass_APasswordEncryption_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APasswordEncryption()
{
	if (!Z_Registration_Info_UClass_APasswordEncryption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APasswordEncryption.OuterSingleton, Z_Construct_UClass_APasswordEncryption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APasswordEncryption.OuterSingleton;
}
template<> ENCRYPTIONPROJECT_API UClass* StaticClass<APasswordEncryption>()
{
	return APasswordEncryption::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APasswordEncryption);
APasswordEncryption::~APasswordEncryption() {}
// End Class APasswordEncryption

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_PasswordEncryption_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APasswordEncryption, APasswordEncryption::StaticClass, TEXT("APasswordEncryption"), &Z_Registration_Info_UClass_APasswordEncryption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APasswordEncryption), 1011674097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_PasswordEncryption_h_806114088(TEXT("/Script/EncryptionProject"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_PasswordEncryption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_PasswordEncryption_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
