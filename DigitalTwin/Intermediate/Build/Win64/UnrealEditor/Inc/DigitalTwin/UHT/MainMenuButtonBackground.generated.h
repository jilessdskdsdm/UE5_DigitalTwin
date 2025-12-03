// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/Widget/MainMenuButtonBackground.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMainMenuButton;
class UTexture2D;
enum class EMenuLayoutDirection : uint8;
#ifdef DIGITALTWIN_MainMenuButtonBackground_generated_h
#error "MainMenuButtonBackground.generated.h already included, missing '#pragma once' in MainMenuButtonBackground.h"
#endif
#define DIGITALTWIN_MainMenuButtonBackground_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnchorAndOffset); \
	DECLARE_FUNCTION(execSetBackgroundBrush); \
	DECLARE_FUNCTION(execSetButtonSpacing); \
	DECLARE_FUNCTION(execAddButtonToLayout); \
	DECLARE_FUNCTION(execSetLayoutDirection);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuButtonBackground(); \
	friend struct Z_Construct_UClass_UMainMenuButtonBackground_Statics; \
public: \
	DECLARE_CLASS(UMainMenuButtonBackground, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuButtonBackground)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuButtonBackground(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainMenuButtonBackground(UMainMenuButtonBackground&&); \
	UMainMenuButtonBackground(const UMainMenuButtonBackground&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuButtonBackground); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuButtonBackground); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuButtonBackground) \
	NO_API virtual ~UMainMenuButtonBackground();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_21_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UMainMenuButtonBackground>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
