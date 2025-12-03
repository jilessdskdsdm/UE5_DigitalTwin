// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EncryptionProject/Encryption/ProjectSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectSaveGame() {}

// Begin Cross Module References
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_UProjectSaveGame();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_UProjectSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_EncryptionProject();
// End Cross Module References

// Begin Class UProjectSaveGame
void UProjectSaveGame::StaticRegisterNativesUProjectSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectSaveGame);
UClass* Z_Construct_UClass_UProjectSaveGame_NoRegister()
{
	return UProjectSaveGame::StaticClass();
}
struct Z_Construct_UClass_UProjectSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Encryption/ProjectSaveGame.h" },
		{ "ModuleRelativePath", "Encryption/ProjectSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Encryption/ProjectSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Encryption/ProjectSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationTime_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Encryption/ProjectSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Encryption/ProjectSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpirationTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectSaveGame_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectSaveGame, ProjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectName_MetaData), NewProp_ProjectName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectSaveGame_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectSaveGame, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectSaveGame_Statics::NewProp_ExpirationTime = { "ExpirationTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectSaveGame, ExpirationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationTime_MetaData), NewProp_ExpirationTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectSaveGame_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectSaveGame, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectSaveGame_Statics::NewProp_ProjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectSaveGame_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectSaveGame_Statics::NewProp_ExpirationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectSaveGame_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProjectSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_EncryptionProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectSaveGame_Statics::ClassParams = {
	&UProjectSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProjectSaveGame()
{
	if (!Z_Registration_Info_UClass_UProjectSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectSaveGame.OuterSingleton, Z_Construct_UClass_UProjectSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectSaveGame.OuterSingleton;
}
template<> ENCRYPTIONPROJECT_API UClass* StaticClass<UProjectSaveGame>()
{
	return UProjectSaveGame::StaticClass();
}
UProjectSaveGame::UProjectSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectSaveGame);
UProjectSaveGame::~UProjectSaveGame() {}
// End Class UProjectSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectSaveGame, UProjectSaveGame::StaticClass, TEXT("UProjectSaveGame"), &Z_Registration_Info_UClass_UProjectSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectSaveGame), 1832351388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_3455301098(TEXT("/Script/EncryptionProject"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
