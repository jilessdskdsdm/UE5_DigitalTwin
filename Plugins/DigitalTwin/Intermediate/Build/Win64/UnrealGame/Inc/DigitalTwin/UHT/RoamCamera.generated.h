// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/Camera/RoamCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIGITALTWIN_RoamCamera_generated_h
#error "RoamCamera.generated.h already included, missing '#pragma once' in RoamCamera.h"
#endif
#define DIGITALTWIN_RoamCamera_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execCheckIfReachedDestination); \
	DECLARE_FUNCTION(execBeginMove);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoamCamera(); \
	friend struct Z_Construct_UClass_ARoamCamera_Statics; \
public: \
	DECLARE_CLASS(ARoamCamera, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(ARoamCamera)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARoamCamera(ARoamCamera&&); \
	ARoamCamera(const ARoamCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoamCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoamCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoamCamera) \
	NO_API virtual ~ARoamCamera();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_12_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class ARoamCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_RoamCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
