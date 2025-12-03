// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/HouseType/LayerButtons.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALayerButtons;
class UPrimitiveComponent;
struct FKey;
struct FLayerData;
#ifdef DIGITALTWIN_LayerButtons_generated_h
#error "LayerButtons.generated.h already included, missing '#pragma once' in LayerButtons.h"
#endif
#define DIGITALTWIN_LayerButtons_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_11_DELEGATE \
DIGITALTWIN_API void FOnLayerButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnLayerButtonClicked, ALayerButtons* Button, FLayerData const& Data);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execSpawnHouseButton); \
	DECLARE_FUNCTION(execOnHoverEnd); \
	DECLARE_FUNCTION(execOnHoverBegin);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALayerButtons(); \
	friend struct Z_Construct_UClass_ALayerButtons_Statics; \
public: \
	DECLARE_CLASS(ALayerButtons, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(ALayerButtons)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALayerButtons(ALayerButtons&&); \
	ALayerButtons(const ALayerButtons&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALayerButtons); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALayerButtons); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALayerButtons) \
	NO_API virtual ~ALayerButtons();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_15_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class ALayerButtons>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
