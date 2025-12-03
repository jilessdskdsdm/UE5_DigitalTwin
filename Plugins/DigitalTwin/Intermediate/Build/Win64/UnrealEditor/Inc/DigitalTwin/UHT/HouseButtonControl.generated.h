// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/HouseType/HouseButtonControl.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHouseButton;
class ALayerButtons;
#ifdef DIGITALTWIN_HouseButtonControl_generated_h
#error "HouseButtonControl.generated.h already included, missing '#pragma once' in HouseButtonControl.h"
#endif
#define DIGITALTWIN_HouseButtonControl_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivateCurrentBuildingButton); \
	DECLARE_FUNCTION(execDisableAllButtons); \
	DECLARE_FUNCTION(execGetAllLayerButton); \
	DECLARE_FUNCTION(execGetAllHouseButton);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHouseButtonControl(); \
	friend struct Z_Construct_UClass_AHouseButtonControl_Statics; \
public: \
	DECLARE_CLASS(AHouseButtonControl, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(AHouseButtonControl)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHouseButtonControl(AHouseButtonControl&&); \
	AHouseButtonControl(const AHouseButtonControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseButtonControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseButtonControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHouseButtonControl) \
	NO_API virtual ~AHouseButtonControl();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_10_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class AHouseButtonControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
