// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/Widget/CustomButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIGITALTWIN_CustomButton_generated_h
#error "CustomButton.generated.h already included, missing '#pragma once' in CustomButton.h"
#endif
#define DIGITALTWIN_CustomButton_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSelfClicked); \
	DECLARE_FUNCTION(execAreTexturesValid); \
	DECLARE_FUNCTION(execUpdateButtonDisplay); \
	DECLARE_FUNCTION(execSetSelected);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomButton(); \
	friend struct Z_Construct_UClass_UCustomButton_Statics; \
public: \
	DECLARE_CLASS(UCustomButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UCustomButton)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomButton(UCustomButton&&); \
	UCustomButton(const UCustomButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomButton) \
	NO_API virtual ~UCustomButton();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_8_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_11_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UCustomButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
