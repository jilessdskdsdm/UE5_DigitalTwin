// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/Widget/MinMapButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapButton;
#ifdef DIGITALTWIN_MinMapButton_generated_h
#error "MinMapButton.generated.h already included, missing '#pragma once' in MinMapButton.h"
#endif
#define DIGITALTWIN_MinMapButton_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_12_DELEGATE \
DIGITALTWIN_API void FOnMinMapButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnMinMapButtonClicked, AMapButton* TargetMapButton);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleButtonClick);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMinMapButton(); \
	friend struct Z_Construct_UClass_UMinMapButton_Statics; \
public: \
	DECLARE_CLASS(UMinMapButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UMinMapButton)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinMapButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMinMapButton(UMinMapButton&&); \
	UMinMapButton(const UMinMapButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinMapButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinMapButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinMapButton) \
	NO_API virtual ~UMinMapButton();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_14_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UMinMapButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
