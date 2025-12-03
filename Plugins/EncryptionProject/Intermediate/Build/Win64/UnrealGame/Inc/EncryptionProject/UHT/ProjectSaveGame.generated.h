// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Encryption/ProjectSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENCRYPTIONPROJECT_ProjectSaveGame_generated_h
#error "ProjectSaveGame.generated.h already included, missing '#pragma once' in ProjectSaveGame.h"
#endif
#define ENCRYPTIONPROJECT_ProjectSaveGame_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectSaveGame(); \
	friend struct Z_Construct_UClass_UProjectSaveGame_Statics; \
public: \
	DECLARE_CLASS(UProjectSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EncryptionProject"), NO_API) \
	DECLARE_SERIALIZER(UProjectSaveGame)


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectSaveGame(UProjectSaveGame&&); \
	UProjectSaveGame(const UProjectSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectSaveGame) \
	NO_API virtual ~UProjectSaveGame();


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_10_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENCRYPTIONPROJECT_API UClass* StaticClass<class UProjectSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_ProjectSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
