// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/Camera/Camera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASwitchingCamera;
#ifdef DIGITALTWIN_Camera_generated_h
#error "Camera.generated.h already included, missing '#pragma once' in Camera.h"
#endif
#define DIGITALTWIN_Camera_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnableLag); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetCameraData); \
	DECLARE_FUNCTION(execWhetherToTest); \
	DECLARE_FUNCTION(execPlaySwitchSound); \
	DECLARE_FUNCTION(execRestoreMaterials); \
	DECLARE_FUNCTION(execDetectIfThereIsObstacleAhead); \
	DECLARE_FUNCTION(execTouchORMouse); \
	DECLARE_FUNCTION(execMouseMultipleClicks); \
	DECLARE_FUNCTION(execHandleZoomEvent);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera(); \
	friend struct Z_Construct_UClass_ACamera_Statics; \
public: \
	DECLARE_CLASS(ACamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(ACamera)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACamera(ACamera&&); \
	ACamera(const ACamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera) \
	NO_API virtual ~ACamera();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_12_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class ACamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_Camera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
