// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/Widget/FullScreenVideoPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaSource;
#ifdef DIGITALTWIN_FullScreenVideoPlayer_generated_h
#error "FullScreenVideoPlayer.generated.h already included, missing '#pragma once' in FullScreenVideoPlayer.h"
#endif
#define DIGITALTWIN_FullScreenVideoPlayer_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayVideo);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFullScreenVideoPlayer(); \
	friend struct Z_Construct_UClass_UFullScreenVideoPlayer_Statics; \
public: \
	DECLARE_CLASS(UFullScreenVideoPlayer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UFullScreenVideoPlayer)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFullScreenVideoPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFullScreenVideoPlayer(UFullScreenVideoPlayer&&); \
	UFullScreenVideoPlayer(const UFullScreenVideoPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFullScreenVideoPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFullScreenVideoPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFullScreenVideoPlayer) \
	NO_API virtual ~UFullScreenVideoPlayer();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_12_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UFullScreenVideoPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
