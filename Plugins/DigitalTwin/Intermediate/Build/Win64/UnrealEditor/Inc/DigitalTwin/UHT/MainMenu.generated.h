// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/MainMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMainMenuButton;
class UMainMenuButtonBackground;
#ifdef DIGITALTWIN_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define DIGITALTWIN_MainMenu_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllMenuButtons); \
	DECLARE_FUNCTION(execFindMenuKeyByButtonName); \
	DECLARE_FUNCTION(execHandleMenuButtonClick); \
	DECLARE_FUNCTION(execGenerateMenuByKey); \
	DECLARE_FUNCTION(execGenerateLevelOneMenu); \
	DECLARE_FUNCTION(execGetBackgroundByKey);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainMenu(UMainMenu&&); \
	UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	NO_API virtual ~UMainMenu();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_14_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
