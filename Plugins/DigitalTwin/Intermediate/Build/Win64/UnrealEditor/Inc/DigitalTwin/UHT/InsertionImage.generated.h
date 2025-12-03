// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/InsertionImage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture2D;
#ifdef DIGITALTWIN_InsertionImage_generated_h
#error "InsertionImage.generated.h already included, missing '#pragma once' in InsertionImage.h"
#endif
#define DIGITALTWIN_InsertionImage_generated_h

#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateImageDisplay); \
	DECLARE_FUNCTION(execSetImageData);


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInsertionImage(); \
	friend struct Z_Construct_UClass_UInsertionImage_Statics; \
public: \
	DECLARE_CLASS(UInsertionImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitalTwin"), NO_API) \
	DECLARE_SERIALIZER(UInsertionImage)


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInsertionImage(UInsertionImage&&); \
	UInsertionImage(const UInsertionImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInsertionImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInsertionImage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInsertionImage) \
	NO_API virtual ~UInsertionImage();


#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_7_PROLOG
#define FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_10_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIGITALTWIN_API UClass* StaticClass<class UInsertionImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
