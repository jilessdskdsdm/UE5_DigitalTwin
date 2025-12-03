// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/FunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACamera;
class APostProcessVolume;
class ASwitchingCamera;
class UMainMenu;
class UMediaSource;
class UObject;
class UTexture2D;
enum class ETranslucencyType : uint8;
struct FLinearColor;
#ifdef DIGITALTWIN_FunctionLibrary_generated_h
#error "FunctionLibrary.generated.h already included, missing '#pragma once' in FunctionLibrary.h"
#endif
#define DIGITALTWIN_FunctionLibrary_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsNoInputForFiveMinutes); \
	DECLARE_FUNCTION(execSetPostProcessType); \
	DECLARE_FUNCTION(execGetNumberedVideo); \
	DECLARE_FUNCTION(execGetNumberedTexture); \
	DECLARE_FUNCTION(execOutputString); \
	DECLARE_FUNCTION(execSetTagActorShow); \
	DECLARE_FUNCTION(execGetMainMenu); \
	DECLARE_FUNCTION(execTimeConversion); \
	DECLARE_FUNCTION(execCallSetTimeAndDirection); \
	DECLARE_FUNCTION(execSwitchControlRights); \
	DECLARE_FUNCTION(execSwitchCameraLocation); \
	DECLARE_FUNCTION(execSwitchCamera); \
	DECLARE_FUNCTION(execGetCamera);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UFunctionLibrary)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFunctionLibrary(UFunctionLibrary&&); \
	UFunctionLibrary(const UFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionLibrary) \
	NO_API virtual ~UFunctionLibrary();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_11_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
