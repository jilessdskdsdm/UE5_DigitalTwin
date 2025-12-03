// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Encryption/EncryptionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENCRYPTIONPROJECT_EncryptionActor_generated_h
#error "EncryptionActor.generated.h already included, missing '#pragma once' in EncryptionActor.h"
#endif
#define ENCRYPTIONPROJECT_EncryptionActor_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNetworkChecked); \
	DECLARE_FUNCTION(execTickFunction); \
	DECLARE_FUNCTION(execAddAuthCode); \
	DECLARE_FUNCTION(execGetVerificationCode);


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEncryptionActor(); \
	friend struct Z_Construct_UClass_AEncryptionActor_Statics; \
public: \
	DECLARE_CLASS(AEncryptionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EncryptionProject"), NO_API) \
	DECLARE_SERIALIZER(AEncryptionActor)


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEncryptionActor(AEncryptionActor&&); \
	AEncryptionActor(const AEncryptionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEncryptionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEncryptionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEncryptionActor) \
	NO_API virtual ~AEncryptionActor();


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_16_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENCRYPTIONPROJECT_API UClass* StaticClass<class AEncryptionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
