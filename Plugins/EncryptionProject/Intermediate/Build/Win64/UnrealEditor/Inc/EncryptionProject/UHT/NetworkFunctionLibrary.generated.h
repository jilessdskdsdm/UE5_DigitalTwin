// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Encryption/NetworkFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FDateTime;
struct FLinearColor;
#ifdef ENCRYPTIONPROJECT_NetworkFunctionLibrary_generated_h
#error "NetworkFunctionLibrary.generated.h already included, missing '#pragma once' in NetworkFunctionLibrary.h"
#endif
#define ENCRYPTIONPROJECT_NetworkFunctionLibrary_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_14_DELEGATE \
ENCRYPTIONPROJECT_API void FOnNetworkChecked_DelegateWrapper(const FScriptDelegate& OnNetworkChecked, bool bHasInternet);


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestQuitGame); \
	DECLARE_FUNCTION(execOutputString); \
	DECLARE_FUNCTION(execGetCode); \
	DECLARE_FUNCTION(execGetTimestampFromDate); \
	DECLARE_FUNCTION(execSplitInteger); \
	DECLARE_FUNCTION(execConvertedInteger); \
	DECLARE_FUNCTION(execGetExpirationTime); \
	DECLARE_FUNCTION(execGetCurrentTimeFromCustomTimestamp); \
	DECLARE_FUNCTION(execGetTimeStamp); \
	DECLARE_FUNCTION(execGetCustomTimeStamp); \
	DECLARE_FUNCTION(execCheckInternetAvailability); \
	DECLARE_FUNCTION(execLineWrapping);


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNetworkFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNetworkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EncryptionProject"), NO_API) \
	DECLARE_SERIALIZER(UNetworkFunctionLibrary)


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkFunctionLibrary(UNetworkFunctionLibrary&&); \
	UNetworkFunctionLibrary(const UNetworkFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkFunctionLibrary) \
	NO_API virtual ~UNetworkFunctionLibrary();


#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_16_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENCRYPTIONPROJECT_API UClass* StaticClass<class UNetworkFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
