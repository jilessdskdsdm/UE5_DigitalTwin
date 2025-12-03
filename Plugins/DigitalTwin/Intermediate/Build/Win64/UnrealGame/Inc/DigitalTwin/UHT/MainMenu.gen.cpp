// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/MainMenu.h"
#include "DigitalTwin/Data/Structure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenu();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenuButton_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMainMenuButtonBackground_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UTimeBar_NoRegister();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EMenuIndex();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FMenuLevelConfig();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UMainMenu Function FindMenuKeyByButtonName
struct Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics
{
	struct MainMenu_eventFindMenuKeyByButtonName_Parms
	{
		FString ButtonName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenu" },
		{ "CompactNodeTitle", "FindMenuKey" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ButtonName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::NewProp_ButtonName = { "ButtonName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventFindMenuKeyByButtonName_Parms, ButtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonName_MetaData), NewProp_ButtonName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventFindMenuKeyByButtonName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::NewProp_ButtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "FindMenuKeyByButtonName", nullptr, nullptr, Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::MainMenu_eventFindMenuKeyByButtonName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::MainMenu_eventFindMenuKeyByButtonName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenu::execFindMenuKeyByButtonName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ButtonName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->FindMenuKeyByButtonName(Z_Param_ButtonName);
	P_NATIVE_END;
}
// End Class UMainMenu Function FindMenuKeyByButtonName

// Begin Class UMainMenu Function GenerateLevelOneMenu
struct Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics
{
	struct MainMenu_eventGenerateLevelOneMenu_Parms
	{
		FString MenuKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MenuKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::NewProp_MenuKey = { "MenuKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventGenerateLevelOneMenu_Parms, MenuKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuKey_MetaData), NewProp_MenuKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::NewProp_MenuKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "GenerateLevelOneMenu", nullptr, nullptr, Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::MainMenu_eventGenerateLevelOneMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::MainMenu_eventGenerateLevelOneMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenu::execGenerateLevelOneMenu)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MenuKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateLevelOneMenu(Z_Param_MenuKey);
	P_NATIVE_END;
}
// End Class UMainMenu Function GenerateLevelOneMenu

// Begin Class UMainMenu Function GenerateMenuByKey
struct Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics
{
	struct MainMenu_eventGenerateMenuByKey_Parms
	{
		FString MenuKey;
		bool bIsShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MenuKey;
	static void NewProp_bIsShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::NewProp_MenuKey = { "MenuKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventGenerateMenuByKey_Parms, MenuKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuKey_MetaData), NewProp_MenuKey_MetaData) };
void Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::NewProp_bIsShow_SetBit(void* Obj)
{
	((MainMenu_eventGenerateMenuByKey_Parms*)Obj)->bIsShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::NewProp_bIsShow = { "bIsShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainMenu_eventGenerateMenuByKey_Parms), &Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::NewProp_bIsShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::NewProp_MenuKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::NewProp_bIsShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "GenerateMenuByKey", nullptr, nullptr, Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::MainMenu_eventGenerateMenuByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::MainMenu_eventGenerateMenuByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenu_GenerateMenuByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_GenerateMenuByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenu::execGenerateMenuByKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MenuKey);
	P_GET_UBOOL(Z_Param_bIsShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateMenuByKey(Z_Param_MenuKey,Z_Param_bIsShow);
	P_NATIVE_END;
}
// End Class UMainMenu Function GenerateMenuByKey

// Begin Class UMainMenu Function GetAllMenuButtons
struct Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics
{
	struct MainMenu_eventGetAllMenuButtons_Parms
	{
		TArray<UMainMenuButton*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMainMenuButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventGetAllMenuButtons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "GetAllMenuButtons", nullptr, nullptr, Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::MainMenu_eventGetAllMenuButtons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::MainMenu_eventGetAllMenuButtons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenu_GetAllMenuButtons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_GetAllMenuButtons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenu::execGetAllMenuButtons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMainMenuButton*>*)Z_Param__Result=P_THIS->GetAllMenuButtons();
	P_NATIVE_END;
}
// End Class UMainMenu Function GetAllMenuButtons

// Begin Class UMainMenu Function GetBackgroundByKey
struct Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics
{
	struct MainMenu_eventGetBackgroundByKey_Parms
	{
		FString MenuKey;
		UMainMenuButtonBackground* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MenuKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::NewProp_MenuKey = { "MenuKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventGetBackgroundByKey_Parms, MenuKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuKey_MetaData), NewProp_MenuKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventGetBackgroundByKey_Parms, ReturnValue), Z_Construct_UClass_UMainMenuButtonBackground_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::NewProp_MenuKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "GetBackgroundByKey", nullptr, nullptr, Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::MainMenu_eventGetBackgroundByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::MainMenu_eventGetBackgroundByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenu_GetBackgroundByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_GetBackgroundByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenu::execGetBackgroundByKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MenuKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMainMenuButtonBackground**)Z_Param__Result=P_THIS->GetBackgroundByKey(Z_Param_MenuKey);
	P_NATIVE_END;
}
// End Class UMainMenu Function GetBackgroundByKey

// Begin Class UMainMenu Function HandleMenuButtonClick
struct Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics
{
	struct MainMenu_eventHandleMenuButtonClick_Parms
	{
		UMainMenuButton* ClickedButton;
		FString LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventHandleMenuButtonClick_Parms, ClickedButton), Z_Construct_UClass_UMainMenuButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenu_eventHandleMenuButtonClick_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::NewProp_ClickedButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "HandleMenuButtonClick", nullptr, nullptr, Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::MainMenu_eventHandleMenuButtonClick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::MainMenu_eventHandleMenuButtonClick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenu::execHandleMenuButtonClick)
{
	P_GET_OBJECT(UMainMenuButton,Z_Param_ClickedButton);
	P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMenuButtonClick(Z_Param_ClickedButton,Z_Param_LevelName);
	P_NATIVE_END;
}
// End Class UMainMenu Function HandleMenuButtonClick

// Begin Class UMainMenu
void UMainMenu::StaticRegisterNativesUMainMenu()
{
	UClass* Class = UMainMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindMenuKeyByButtonName", &UMainMenu::execFindMenuKeyByButtonName },
		{ "GenerateLevelOneMenu", &UMainMenu::execGenerateLevelOneMenu },
		{ "GenerateMenuByKey", &UMainMenu::execGenerateMenuByKey },
		{ "GetAllMenuButtons", &UMainMenu::execGetAllMenuButtons },
		{ "GetBackgroundByKey", &UMainMenu::execGetBackgroundByKey },
		{ "HandleMenuButtonClick", &UMainMenu::execHandleMenuButtonClick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenu);
UClass* Z_Construct_UClass_UMainMenu_NoRegister()
{
	return UMainMenu::StaticClass();
}
struct Z_Construct_UClass_UMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/MainMenu.h" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMenuContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuButtonClass_MetaData[] = {
		{ "Category", "UMGButton" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuConfigs_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSelectedName_MetaData[] = {
		{ "Category", "UMGButton" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSelectedName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x99\xe6\xac\xa1\xe7\x82\xb9\xe5\x87\xbb\xe7\x9a\x84\xe6\x8c\x89\xe9\x92\xae\xe5\x90\x8d\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe8\xbe\x85\xe5\x8a\xa9\xe8\xae\xb0\xe5\xbd\x95\xe4\xb8\x8a\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x99\xe6\xac\xa1\xe7\x82\xb9\xe5\x87\xbb\xe7\x9a\x84\xe6\x8c\x89\xe9\x92\xae\xe5\x90\x8d\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe8\xbe\x85\xe5\x8a\xa9\xe8\xae\xb0\xe5\xbd\x95\xe4\xb8\x8a\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelToBackgroundWidgetMap_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuButtonBackgroundClass_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "UserWidget/MainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMenuContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeBar;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuButtonClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuConfigs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MenuConfigs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MenuConfigs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastSelectedName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSelectedName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelToBackgroundWidgetMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LevelToBackgroundWidgetMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LevelToBackgroundWidgetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LevelToBackgroundWidgetMap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuButtonBackgroundClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_FindMenuKeyByButtonName, "FindMenuKeyByButtonName" }, // 1665409171
		{ &Z_Construct_UFunction_UMainMenu_GenerateLevelOneMenu, "GenerateLevelOneMenu" }, // 1594388350
		{ &Z_Construct_UFunction_UMainMenu_GenerateMenuByKey, "GenerateMenuByKey" }, // 2084485245
		{ &Z_Construct_UFunction_UMainMenu_GetAllMenuButtons, "GetAllMenuButtons" }, // 869116660
		{ &Z_Construct_UFunction_UMainMenu_GetBackgroundByKey, "GetBackgroundByKey" }, // 1961965980
		{ &Z_Construct_UFunction_UMainMenu_HandleMenuButtonClick, "HandleMenuButtonClick" }, // 2605970675
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_RootMenuContainer = { "RootMenuContainer", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, RootMenuContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMenuContainer_MetaData), NewProp_RootMenuContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_TimeBar = { "TimeBar", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, TimeBar), Z_Construct_UClass_UTimeBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBar_MetaData), NewProp_TimeBar_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuButtonClass = { "MainMenuButtonClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, MainMenuButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenuButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuButtonClass_MetaData), NewProp_MainMenuButtonClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuConfigs_ValueProp = { "MenuConfigs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMenuLevelConfig, METADATA_PARAMS(0, nullptr) }; // 837296593
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuConfigs_Key_KeyProp = { "MenuConfigs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuConfigs = { "MenuConfigs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, MenuConfigs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuConfigs_MetaData), NewProp_MenuConfigs_MetaData) }; // 837296593
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_LastSelectedName = { "LastSelectedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, LastSelectedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSelectedName_MetaData), NewProp_LastSelectedName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_CurrentSelectedName = { "CurrentSelectedName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, CurrentSelectedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSelectedName_MetaData), NewProp_CurrentSelectedName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_LevelToBackgroundWidgetMap_ValueProp = { "LevelToBackgroundWidgetMap", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMainMenuButtonBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_LevelToBackgroundWidgetMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_LevelToBackgroundWidgetMap_Key_KeyProp = { "LevelToBackgroundWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DigitalTwin_EMenuIndex, METADATA_PARAMS(0, nullptr) }; // 2482169467
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_LevelToBackgroundWidgetMap = { "LevelToBackgroundWidgetMap", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, LevelToBackgroundWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelToBackgroundWidgetMap_MetaData), NewProp_LevelToBackgroundWidgetMap_MetaData) }; // 2482169467
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuButtonBackgroundClass = { "MainMenuButtonBackgroundClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, MainMenuButtonBackgroundClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenuButtonBackground_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuButtonBackgroundClass_MetaData), NewProp_MainMenuButtonBackgroundClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_RootMenuContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_TimeBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuConfigs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuConfigs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_LastSelectedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_CurrentSelectedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_LevelToBackgroundWidgetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_LevelToBackgroundWidgetMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_LevelToBackgroundWidgetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_LevelToBackgroundWidgetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuButtonBackgroundClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
	&UMainMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenu()
{
	if (!Z_Registration_Info_UClass_UMainMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenu.OuterSingleton, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenu.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UMainMenu>()
{
	return UMainMenu::StaticClass();
}
UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
UMainMenu::~UMainMenu() {}
// End Class UMainMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenu, UMainMenu::StaticClass, TEXT("UMainMenu"), &Z_Registration_Info_UClass_UMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenu), 1302726303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_348300340(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_MainMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
