// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/Widget/MainMenuButtonBackground.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuButtonBackground() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DIGITALTWIN_API UClass* Z_Construct_UClass_UInsertionImage_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenuButton_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenuButtonBackground();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenuButtonBackground_NoRegister();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UMainMenuButtonBackground Function AddButtonToLayout
struct Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics
{
	struct MainMenuButtonBackground_eventAddButtonToLayout_Parms
	{
		UMainMenuButton* Button;
		EMenuLayoutDirection LayoutDirection;
		bool bReverseOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutDirection;
	static void NewProp_bReverseOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventAddButtonToLayout_Parms, Button), Z_Construct_UClass_UMainMenuButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_LayoutDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_LayoutDirection = { "LayoutDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventAddButtonToLayout_Parms, LayoutDirection), Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection, METADATA_PARAMS(0, nullptr) }; // 3584208971
void Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_bReverseOrder_SetBit(void* Obj)
{
	((MainMenuButtonBackground_eventAddButtonToLayout_Parms*)Obj)->bReverseOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_bReverseOrder = { "bReverseOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainMenuButtonBackground_eventAddButtonToLayout_Parms), &Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_bReverseOrder_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_LayoutDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_LayoutDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::NewProp_bReverseOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButtonBackground, nullptr, "AddButtonToLayout", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::MainMenuButtonBackground_eventAddButtonToLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::MainMenuButtonBackground_eventAddButtonToLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButtonBackground::execAddButtonToLayout)
{
	P_GET_OBJECT(UMainMenuButton,Z_Param_Button);
	P_GET_ENUM(EMenuLayoutDirection,Z_Param_LayoutDirection);
	P_GET_UBOOL(Z_Param_bReverseOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddButtonToLayout(Z_Param_Button,EMenuLayoutDirection(Z_Param_LayoutDirection),Z_Param_bReverseOrder);
	P_NATIVE_END;
}
// End Class UMainMenuButtonBackground Function AddButtonToLayout

// Begin Class UMainMenuButtonBackground Function SetAnchorAndOffset
struct Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics
{
	struct MainMenuButtonBackground_eventSetAnchorAndOffset_Parms
	{
		FVector2D Anchor;
		FVector2D Offset;
		FVector2D InOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventSetAnchorAndOffset_Parms, Anchor), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventSetAnchorAndOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventSetAnchorAndOffset_Parms, InOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::NewProp_InOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButtonBackground, nullptr, "SetAnchorAndOffset", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::MainMenuButtonBackground_eventSetAnchorAndOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::MainMenuButtonBackground_eventSetAnchorAndOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButtonBackground::execSetAnchorAndOffset)
{
	P_GET_STRUCT(FVector2D,Z_Param_Anchor);
	P_GET_STRUCT(FVector2D,Z_Param_Offset);
	P_GET_STRUCT(FVector2D,Z_Param_InOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnchorAndOffset(Z_Param_Anchor,Z_Param_Offset,Z_Param_InOffset);
	P_NATIVE_END;
}
// End Class UMainMenuButtonBackground Function SetAnchorAndOffset

// Begin Class UMainMenuButtonBackground Function SetBackgroundBrush
struct Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics
{
	struct MainMenuButtonBackground_eventSetBackgroundBrush_Parms
	{
		UTexture2D* Texture;
		float BackgroundSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventSetBackgroundBrush_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::NewProp_BackgroundSize = { "BackgroundSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventSetBackgroundBrush_Parms, BackgroundSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::NewProp_BackgroundSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButtonBackground, nullptr, "SetBackgroundBrush", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::MainMenuButtonBackground_eventSetBackgroundBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::MainMenuButtonBackground_eventSetBackgroundBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButtonBackground::execSetBackgroundBrush)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BackgroundSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundBrush(Z_Param_Texture,Z_Param_BackgroundSize);
	P_NATIVE_END;
}
// End Class UMainMenuButtonBackground Function SetBackgroundBrush

// Begin Class UMainMenuButtonBackground Function SetButtonSpacing
struct Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics
{
	struct MainMenuButtonBackground_eventSetButtonSpacing_Parms
	{
		float Spacing;
		EMenuLayoutDirection LayoutDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spacing;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventSetButtonSpacing_Parms, Spacing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::NewProp_LayoutDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::NewProp_LayoutDirection = { "LayoutDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventSetButtonSpacing_Parms, LayoutDirection), Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection, METADATA_PARAMS(0, nullptr) }; // 3584208971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::NewProp_Spacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::NewProp_LayoutDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::NewProp_LayoutDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButtonBackground, nullptr, "SetButtonSpacing", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::MainMenuButtonBackground_eventSetButtonSpacing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::MainMenuButtonBackground_eventSetButtonSpacing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButtonBackground::execSetButtonSpacing)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Spacing);
	P_GET_ENUM(EMenuLayoutDirection,Z_Param_LayoutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonSpacing(Z_Param_Spacing,EMenuLayoutDirection(Z_Param_LayoutDirection));
	P_NATIVE_END;
}
// End Class UMainMenuButtonBackground Function SetButtonSpacing

// Begin Class UMainMenuButtonBackground Function SetLayoutDirection
struct Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics
{
	struct MainMenuButtonBackground_eventSetLayoutDirection_Parms
	{
		EMenuLayoutDirection LayoutDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::NewProp_LayoutDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::NewProp_LayoutDirection = { "LayoutDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButtonBackground_eventSetLayoutDirection_Parms, LayoutDirection), Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection, METADATA_PARAMS(0, nullptr) }; // 3584208971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::NewProp_LayoutDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::NewProp_LayoutDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButtonBackground, nullptr, "SetLayoutDirection", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::MainMenuButtonBackground_eventSetLayoutDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::MainMenuButtonBackground_eventSetLayoutDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButtonBackground::execSetLayoutDirection)
{
	P_GET_ENUM(EMenuLayoutDirection,Z_Param_LayoutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayoutDirection(EMenuLayoutDirection(Z_Param_LayoutDirection));
	P_NATIVE_END;
}
// End Class UMainMenuButtonBackground Function SetLayoutDirection

// Begin Class UMainMenuButtonBackground
void UMainMenuButtonBackground::StaticRegisterNativesUMainMenuButtonBackground()
{
	UClass* Class = UMainMenuButtonBackground::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddButtonToLayout", &UMainMenuButtonBackground::execAddButtonToLayout },
		{ "SetAnchorAndOffset", &UMainMenuButtonBackground::execSetAnchorAndOffset },
		{ "SetBackgroundBrush", &UMainMenuButtonBackground::execSetBackgroundBrush },
		{ "SetButtonSpacing", &UMainMenuButtonBackground::execSetButtonSpacing },
		{ "SetLayoutDirection", &UMainMenuButtonBackground::execSetLayoutDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuButtonBackground);
UClass* Z_Construct_UClass_UMainMenuButtonBackground_NoRegister()
{
	return UMainMenuButtonBackground::StaticClass();
}
struct Z_Construct_UClass_UMainMenuButtonBackground_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuButtonBackground" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuButtonBackground" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonCanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuButtonBackground" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuButtonBackground" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "MainMenuButtonBackground" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButtonBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonCanvasPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuButtonBackground_AddButtonToLayout, "AddButtonToLayout" }, // 2821756119
		{ &Z_Construct_UFunction_UMainMenuButtonBackground_SetAnchorAndOffset, "SetAnchorAndOffset" }, // 2318819700
		{ &Z_Construct_UFunction_UMainMenuButtonBackground_SetBackgroundBrush, "SetBackgroundBrush" }, // 689356664
		{ &Z_Construct_UFunction_UMainMenuButtonBackground_SetButtonSpacing, "SetButtonSpacing" }, // 2816499419
		{ &Z_Construct_UFunction_UMainMenuButtonBackground_SetLayoutDirection, "SetLayoutDirection" }, // 2650853350
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuButtonBackground>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButtonBackground, Background), Z_Construct_UClass_UInsertionImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_VerticalBox = { "VerticalBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButtonBackground, VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalBox_MetaData), NewProp_VerticalBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_ButtonCanvasPanel = { "ButtonCanvasPanel", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButtonBackground, ButtonCanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonCanvasPanel_MetaData), NewProp_ButtonCanvasPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_HorizontalBox = { "HorizontalBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButtonBackground, HorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_MetaData), NewProp_HorizontalBox_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButtonBackground, Direction), Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3584208971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuButtonBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_VerticalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_ButtonCanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_HorizontalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButtonBackground_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuButtonBackground_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuButtonBackground_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuButtonBackground_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuButtonBackground_Statics::ClassParams = {
	&UMainMenuButtonBackground::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuButtonBackground_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuButtonBackground_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuButtonBackground_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuButtonBackground_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuButtonBackground()
{
	if (!Z_Registration_Info_UClass_UMainMenuButtonBackground.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuButtonBackground.OuterSingleton, Z_Construct_UClass_UMainMenuButtonBackground_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuButtonBackground.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UMainMenuButtonBackground>()
{
	return UMainMenuButtonBackground::StaticClass();
}
UMainMenuButtonBackground::UMainMenuButtonBackground(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuButtonBackground);
UMainMenuButtonBackground::~UMainMenuButtonBackground() {}
// End Class UMainMenuButtonBackground

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuButtonBackground, UMainMenuButtonBackground::StaticClass, TEXT("UMainMenuButtonBackground"), &Z_Registration_Info_UClass_UMainMenuButtonBackground, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuButtonBackground), 3209485830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_893814110(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButtonBackground_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
