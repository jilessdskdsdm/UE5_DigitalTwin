// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/HouseType/HouseButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHouseButton;
class UPrimitiveComponent;
struct FHouseData;
struct FKey;
#ifdef DIGITALTWIN_HouseButton_generated_h
#error "HouseButton.generated.h already included, missing '#pragma once' in HouseButton.h"
#endif
#define DIGITALTWIN_HouseButton_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_10_DELEGATE \
DIGITALTWIN_API void FOnHouseButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnHouseButtonClicked, AHouseButton* Button, FHouseData const& Data);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execSpawnHouseButton); \
	DECLARE_FUNCTION(execOnHoverEnd); \
	DECLARE_FUNCTION(execOnHoverBegin);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHouseButton(); \
	friend struct Z_Construct_UClass_AHouseButton_Statics; \
public: \
	DECLARE_CLASS(AHouseButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(AHouseButton)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHouseButton(AHouseButton&&); \
	AHouseButton(const AHouseButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHouseButton) \
	NO_API virtual ~AHouseButton();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_14_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class AHouseButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
