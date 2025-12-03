// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/Widget/MainMenuButton.h"
#include "DigitalTwin/Data/Structure.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuButton() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenuButton();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenuButton_NoRegister();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EMenuIndex();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection();
DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature();
DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyles();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Delegate FOnMenuButtonClicked
struct Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics
{
	struct _Script_DigitalTwin_eventOnMenuButtonClicked_Parms
	{
		UMainMenuButton* Button;
		FString LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnMenuButtonClicked_Parms, Button), Z_Construct_UClass_UMainMenuButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnMenuButtonClicked_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin, nullptr, "OnMenuButtonClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnMenuButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnMenuButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonClicked, UMainMenuButton* Button, const FString& LevelName)
{
	struct _Script_DigitalTwin_eventOnMenuButtonClicked_Parms
	{
		UMainMenuButton* Button;
		FString LevelName;
	};
	_Script_DigitalTwin_eventOnMenuButtonClicked_Parms Parms;
	Parms.Button=Button;
	Parms.LevelName=LevelName;
	OnMenuButtonClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMenuButtonClicked

// Begin Delegate FOnMenuButtonAgainClicked
struct Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics
{
	struct _Script_DigitalTwin_eventOnMenuButtonAgainClicked_Parms
	{
		UMainMenuButton* Button;
		FString LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnMenuButtonAgainClicked_Parms, Button), Z_Construct_UClass_UMainMenuButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnMenuButtonAgainClicked_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin, nullptr, "OnMenuButtonAgainClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnMenuButtonAgainClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnMenuButtonAgainClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuButtonAgainClicked_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonAgainClicked, UMainMenuButton* Button, const FString& LevelName)
{
	struct _Script_DigitalTwin_eventOnMenuButtonAgainClicked_Parms
	{
		UMainMenuButton* Button;
		FString LevelName;
	};
	_Script_DigitalTwin_eventOnMenuButtonAgainClicked_Parms Parms;
	Parms.Button=Button;
	Parms.LevelName=LevelName;
	OnMenuButtonAgainClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMenuButtonAgainClicked

// Begin Class UMainMenuButton Function GetIsSelected
struct Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics
{
	struct MainMenuButton_eventGetIsSelected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MainMenuButton_eventGetIsSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainMenuButton_eventGetIsSelected_Parms), &Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButton, nullptr, "GetIsSelected", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::MainMenuButton_eventGetIsSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::MainMenuButton_eventGetIsSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButton_GetIsSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButton_GetIsSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButton::execGetIsSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsSelected();
	P_NATIVE_END;
}
// End Class UMainMenuButton Function GetIsSelected

// Begin Class UMainMenuButton Function HandleButtonClick
struct Z_Construct_UFunction_UMainMenuButton_HandleButtonClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButton_HandleButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButton, nullptr, "HandleButtonClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_HandleButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButton_HandleButtonClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuButton_HandleButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButton_HandleButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButton::execHandleButtonClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleButtonClick();
	P_NATIVE_END;
}
// End Class UMainMenuButton Function HandleButtonClick

// Begin Class UMainMenuButton Function SetSelected
struct Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics
{
	struct MainMenuButton_eventSetSelected_Parms
	{
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((MainMenuButton_eventSetSelected_Parms*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainMenuButton_eventSetSelected_Parms), &Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButton, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::MainMenuButton_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::MainMenuButton_eventSetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButton_SetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButton_SetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButton::execSetSelected)
{
	P_GET_UBOOL(Z_Param_bSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelected(Z_Param_bSelected);
	P_NATIVE_END;
}
// End Class UMainMenuButton Function SetSelected

// Begin Class UMainMenuButton Function SetShowName
struct Z_Construct_UFunction_UMainMenuButton_SetShowName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButton_SetShowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButton, nullptr, "SetShowName", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_SetShowName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButton_SetShowName_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuButton_SetShowName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButton_SetShowName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButton::execSetShowName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShowName();
	P_NATIVE_END;
}
// End Class UMainMenuButton Function SetShowName

// Begin Class UMainMenuButton Function SetupButton
struct Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics
{
	struct MainMenuButton_eventSetupButton_Parms
	{
		FString LevelName;
		FButtonStyles Style;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButton_eventSetupButton_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuButton_eventSetupButton_Parms, Style), Z_Construct_UScriptStruct_FButtonStyles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 419811243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::NewProp_Style,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButton, nullptr, "SetupButton", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::MainMenuButton_eventSetupButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::MainMenuButton_eventSetupButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButton_SetupButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButton_SetupButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButton::execSetupButton)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
	P_GET_STRUCT_REF(FButtonStyles,Z_Param_Out_Style);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupButton(Z_Param_LevelName,Z_Param_Out_Style);
	P_NATIVE_END;
}
// End Class UMainMenuButton Function SetupButton

// Begin Class UMainMenuButton Function UpdateButtonDisplay
struct Z_Construct_UFunction_UMainMenuButton_UpdateButtonDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButton_UpdateButtonDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButton, nullptr, "UpdateButtonDisplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_UpdateButtonDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButton_UpdateButtonDisplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuButton_UpdateButtonDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButton_UpdateButtonDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButton::execUpdateButtonDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateButtonDisplay();
	P_NATIVE_END;
}
// End Class UMainMenuButton Function UpdateButtonDisplay

// Begin Class UMainMenuButton Function UpdateButtonSuspended
struct Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics
{
	struct MainMenuButton_eventUpdateButtonSuspended_Parms
	{
		bool IsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::NewProp_IsSelected_SetBit(void* Obj)
{
	((MainMenuButton_eventUpdateButtonSuspended_Parms*)Obj)->IsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainMenuButton_eventUpdateButtonSuspended_Parms), &Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::NewProp_IsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuButton, nullptr, "UpdateButtonSuspended", nullptr, nullptr, Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::MainMenuButton_eventUpdateButtonSuspended_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::MainMenuButton_eventUpdateButtonSuspended_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuButton::execUpdateButtonSuspended)
{
	P_GET_UBOOL(Z_Param_IsSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateButtonSuspended(Z_Param_IsSelected);
	P_NATIVE_END;
}
// End Class UMainMenuButton Function UpdateButtonSuspended

// Begin Class UMainMenuButton
void UMainMenuButton::StaticRegisterNativesUMainMenuButton()
{
	UClass* Class = UMainMenuButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsSelected", &UMainMenuButton::execGetIsSelected },
		{ "HandleButtonClick", &UMainMenuButton::execHandleButtonClick },
		{ "SetSelected", &UMainMenuButton::execSetSelected },
		{ "SetShowName", &UMainMenuButton::execSetShowName },
		{ "SetupButton", &UMainMenuButton::execSetupButton },
		{ "UpdateButtonDisplay", &UMainMenuButton::execUpdateButtonDisplay },
		{ "UpdateButtonSuspended", &UMainMenuButton::execUpdateButtonSuspended },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuButton);
UClass* Z_Construct_UClass_UMainMenuButton_NoRegister()
{
	return UMainMenuButton::StaticClass();
}
struct Z_Construct_UClass_UMainMenuButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/Widget/MainMenuButton.h" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MMButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnableDynamicImage_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalMaterial_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedMaterial_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonID_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThatLevelMenu_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuLevelName_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonClicked_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonAgainClicked_MetaData[] = {
		{ "Category", "MainMenuButton" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "UserWidget/Widget/MainMenuButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MMButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
	static void NewProp_bIsEnableDynamicImage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnableDynamicImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PressedMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThatLevelMenu_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThatLevelMenu;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MenuLevelName;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonAgainClicked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClickSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuButton_GetIsSelected, "GetIsSelected" }, // 742977650
		{ &Z_Construct_UFunction_UMainMenuButton_HandleButtonClick, "HandleButtonClick" }, // 1554110582
		{ &Z_Construct_UFunction_UMainMenuButton_SetSelected, "SetSelected" }, // 4011511170
		{ &Z_Construct_UFunction_UMainMenuButton_SetShowName, "SetShowName" }, // 914895843
		{ &Z_Construct_UFunction_UMainMenuButton_SetupButton, "SetupButton" }, // 1680425754
		{ &Z_Construct_UFunction_UMainMenuButton_UpdateButtonDisplay, "UpdateButtonDisplay" }, // 2752954078
		{ &Z_Construct_UFunction_UMainMenuButton_UpdateButtonSuspended, "UpdateButtonSuspended" }, // 3983139169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_MMButton = { "MMButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, MMButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MMButton_MetaData), NewProp_MMButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyle_MetaData), NewProp_ButtonStyle_MetaData) }; // 419811243
void Z_Construct_UClass_UMainMenuButton_Statics::NewProp_bIsEnableDynamicImage_SetBit(void* Obj)
{
	((UMainMenuButton*)Obj)->bIsEnableDynamicImage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_bIsEnableDynamicImage = { "bIsEnableDynamicImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMainMenuButton), &Z_Construct_UClass_UMainMenuButton_Statics::NewProp_bIsEnableDynamicImage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnableDynamicImage_MetaData), NewProp_bIsEnableDynamicImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_NormalMaterial = { "NormalMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, NormalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalMaterial_MetaData), NewProp_NormalMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_PressedMaterial = { "PressedMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, PressedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedMaterial_MetaData), NewProp_PressedMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ButtonID = { "ButtonID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, ButtonID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonID_MetaData), NewProp_ButtonID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, Direction), Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3584208971
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ThatLevelMenu_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ThatLevelMenu = { "ThatLevelMenu", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, ThatLevelMenu), Z_Construct_UEnum_DigitalTwin_EMenuIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThatLevelMenu_MetaData), NewProp_ThatLevelMenu_MetaData) }; // 2482169467
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_MenuLevelName = { "MenuLevelName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, MenuLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuLevelName_MetaData), NewProp_MenuLevelName_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_OnButtonClicked = { "OnButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, OnButtonClicked), Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonClicked_MetaData), NewProp_OnButtonClicked_MetaData) }; // 3990892321
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_OnButtonAgainClicked = { "OnButtonAgainClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, OnButtonAgainClicked), Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonAgainClicked_MetaData), NewProp_OnButtonAgainClicked_MetaData) }; // 4065671860
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ClickSound = { "ClickSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuButton, ClickSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickSound_MetaData), NewProp_ClickSound_MetaData) }; // 1929474689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_MMButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_bIsEnableDynamicImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_NormalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_PressedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ButtonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ThatLevelMenu_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ThatLevelMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_MenuLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_OnButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_OnButtonAgainClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuButton_Statics::NewProp_ClickSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuButton_Statics::ClassParams = {
	&UMainMenuButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuButton()
{
	if (!Z_Registration_Info_UClass_UMainMenuButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuButton.OuterSingleton, Z_Construct_UClass_UMainMenuButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuButton.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UMainMenuButton>()
{
	return UMainMenuButton::StaticClass();
}
UMainMenuButton::UMainMenuButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuButton);
UMainMenuButton::~UMainMenuButton() {}
// End Class UMainMenuButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuButton, UMainMenuButton::StaticClass, TEXT("UMainMenuButton"), &Z_Registration_Info_UClass_UMainMenuButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuButton), 3867101063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_4148145999(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MainMenuButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
