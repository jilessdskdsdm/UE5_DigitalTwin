// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/TimeBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIGITALTWIN_TimeBar_generated_h
#error "TimeBar.generated.h already included, missing '#pragma once' in TimeBar.h"
#endif
#define DIGITALTWIN_TimeBar_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGameTime); \
	DECLARE_FUNCTION(execGetCompassDirection); \
	DECLARE_FUNCTION(execUpdateTimeBar);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeBar(); \
	friend struct Z_Construct_UClass_UTimeBar_Statics; \
public: \
	DECLARE_CLASS(UTimeBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UTimeBar)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTimeBar(UTimeBar&&); \
	UTimeBar(const UTimeBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeBar) \
	NO_API virtual ~UTimeBar();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_9_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_12_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UTimeBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
