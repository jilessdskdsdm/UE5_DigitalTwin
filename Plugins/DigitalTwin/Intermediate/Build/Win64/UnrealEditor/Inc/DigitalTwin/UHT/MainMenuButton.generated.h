// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/Widget/MainMenuButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMainMenuButton;
struct FButtonStyles;
#ifdef DIGITALTWIN_MainMenuButton_generated_h
#error "MainMenuButton.generated.h already included, missing '#pragma once' in MainMenuButton.h"
#endif
#define DIGITALTWIN_MainMenuButton_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_8_DELEGATE \
DIGITALTWIN_API void FOnMenuButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonClicked, UMainMenuButton* Button, const FString& LevelName);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_9_DELEGATE \
DIGITALTWIN_API void FOnMenuButtonAgainClicked_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonAgainClicked, UMainMenuButton* Button, const FString& LevelName);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleButtonClick); \
	DECLARE_FUNCTION(execGetIsSelected); \
	DECLARE_FUNCTION(execUpdateButtonSuspended); \
	DECLARE_FUNCTION(execSetShowName); \
	DECLARE_FUNCTION(execUpdateButtonDisplay); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execSetupButton);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuButton(); \
	friend struct Z_Construct_UClass_UMainMenuButton_Statics; \
public: \
	DECLARE_CLASS(UMainMenuButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuButton)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainMenuButton(UMainMenuButton&&); \
	UMainMenuButton(const UMainMenuButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuButton) \
	NO_API virtual ~UMainMenuButton();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_11_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UMainMenuButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
