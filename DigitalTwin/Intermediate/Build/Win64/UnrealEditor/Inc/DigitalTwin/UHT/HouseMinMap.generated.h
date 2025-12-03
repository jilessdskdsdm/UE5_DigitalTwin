// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/HouseMinMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapButton;
class UMinMapButton;
class UTexture2D;
#ifdef DIGITALTWIN_HouseMinMap_generated_h
#error "HouseMinMap.generated.h already included, missing '#pragma once' in HouseMinMap.h"
#endif
#define DIGITALTWIN_HouseMinMap_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCameraPosition); \
	DECLARE_FUNCTION(execCreateMinMapButton); \
	DECLARE_FUNCTION(execSetMinMap);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHouseMinMap(); \
	friend struct Z_Construct_UClass_UHouseMinMap_Statics; \
public: \
	DECLARE_CLASS(UHouseMinMap, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UHouseMinMap)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHouseMinMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHouseMinMap(UHouseMinMap&&); \
	UHouseMinMap(const UHouseMinMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHouseMinMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHouseMinMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHouseMinMap) \
	NO_API virtual ~UHouseMinMap();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_16_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UHouseMinMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_HouseMinMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
