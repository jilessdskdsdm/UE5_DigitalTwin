// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/Widget/CustomButton.h"
#include "DigitalTwin/Data/Structure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomButton() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_UCustomButton();
DIGITALTWIN_API UClass* Z_Construct_UClass_UCustomButton_NoRegister();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyles();
UMG_API UClass* Z_Construct_UClass_UButton();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UCustomButton Function AreTexturesValid
struct Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics
{
	struct CustomButton_eventAreTexturesValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\x9f\xa5\xe8\xb4\xb4\xe5\x9b\xbe\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "UserWidget/Widget/CustomButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb4\xb4\xe5\x9b\xbe\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\x95\x88" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CustomButton_eventAreTexturesValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomButton_eventAreTexturesValid_Parms), &Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButton, nullptr, "AreTexturesValid", nullptr, nullptr, Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::CustomButton_eventAreTexturesValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::CustomButton_eventAreTexturesValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomButton_AreTexturesValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButton_AreTexturesValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButton::execAreTexturesValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreTexturesValid();
	P_NATIVE_END;
}
// End Class UCustomButton Function AreTexturesValid

// Begin Class UCustomButton Function OnSelfClicked
struct Z_Construct_UFunction_UCustomButton_OnSelfClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/CustomButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButton_OnSelfClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButton, nullptr, "OnSelfClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButton_OnSelfClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButton_OnSelfClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomButton_OnSelfClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButton_OnSelfClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButton::execOnSelfClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelfClicked();
	P_NATIVE_END;
}
// End Class UCustomButton Function OnSelfClicked

// Begin Class UCustomButton Function SetSelected
struct Z_Construct_UFunction_UCustomButton_SetSelected_Statics
{
	struct CustomButton_eventSetSelected_Parms
	{
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MenuButton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe9\x80\x89\xe4\xb8\xad\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "UserWidget/Widget/CustomButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe9\x80\x89\xe4\xb8\xad\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCustomButton_SetSelected_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((CustomButton_eventSetSelected_Parms*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomButton_SetSelected_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomButton_eventSetSelected_Parms), &Z_Construct_UFunction_UCustomButton_SetSelected_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomButton_SetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomButton_SetSelected_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButton_SetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButton_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButton, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_UCustomButton_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButton_SetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomButton_SetSelected_Statics::CustomButton_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButton_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButton_SetSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomButton_SetSelected_Statics::CustomButton_eventSetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomButton_SetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButton_SetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButton::execSetSelected)
{
	P_GET_UBOOL(Z_Param_bSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelected(Z_Param_bSelected);
	P_NATIVE_END;
}
// End Class UCustomButton Function SetSelected

// Begin Class UCustomButton Function UpdateButtonDisplay
struct Z_Construct_UFunction_UCustomButton_UpdateButtonDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MenuButton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x8b\xe5\x8a\xa8\xe5\x88\xb7\xe6\x96\xb0\xe6\x8c\x89\xe9\x92\xae\xe5\xa4\x96\xe8\xa7\x82\n" },
#endif
		{ "ModuleRelativePath", "UserWidget/Widget/CustomButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe5\x8a\xa8\xe5\x88\xb7\xe6\x96\xb0\xe6\x8c\x89\xe9\x92\xae\xe5\xa4\x96\xe8\xa7\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButton_UpdateButtonDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButton, nullptr, "UpdateButtonDisplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButton_UpdateButtonDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButton_UpdateButtonDisplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomButton_UpdateButtonDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButton_UpdateButtonDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButton::execUpdateButtonDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateButtonDisplay();
	P_NATIVE_END;
}
// End Class UCustomButton Function UpdateButtonDisplay

// Begin Class UCustomButton
void UCustomButton::StaticRegisterNativesUCustomButton()
{
	UClass* Class = UCustomButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreTexturesValid", &UCustomButton::execAreTexturesValid },
		{ "OnSelfClicked", &UCustomButton::execOnSelfClicked },
		{ "SetSelected", &UCustomButton::execSetSelected },
		{ "UpdateButtonDisplay", &UCustomButton::execUpdateButtonDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomButton);
UClass* Z_Construct_UClass_UCustomButton_NoRegister()
{
	return UCustomButton::StaticClass();
}
struct Z_Construct_UClass_UCustomButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/Widget/CustomButton.h" },
		{ "ModuleRelativePath", "UserWidget/Widget/CustomButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyles_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\x96\xe9\x83\xa8\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe6\x8c\x89\xe9\x92\xae\xe6\xa0\xb7\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "UserWidget/Widget/CustomButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe9\x83\xa8\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe6\x8c\x89\xe9\x92\xae\xe6\xa0\xb7\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe9\x80\x89\xe4\xb8\xad\n" },
#endif
		{ "ModuleRelativePath", "UserWidget/Widget/CustomButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe9\x80\x89\xe4\xb8\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyles;
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomButton_AreTexturesValid, "AreTexturesValid" }, // 1733346167
		{ &Z_Construct_UFunction_UCustomButton_OnSelfClicked, "OnSelfClicked" }, // 3677125548
		{ &Z_Construct_UFunction_UCustomButton_SetSelected, "SetSelected" }, // 2049073781
		{ &Z_Construct_UFunction_UCustomButton_UpdateButtonDisplay, "UpdateButtonDisplay" }, // 1021374186
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomButton_Statics::NewProp_ButtonStyles = { "ButtonStyles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomButton, ButtonStyles), Z_Construct_UScriptStruct_FButtonStyles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyles_MetaData), NewProp_ButtonStyles_MetaData) }; // 419811243
void Z_Construct_UClass_UCustomButton_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((UCustomButton*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomButton_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomButton), &Z_Construct_UClass_UCustomButton_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelected_MetaData), NewProp_bIsSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButton_Statics::NewProp_ButtonStyles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButton_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomButton_Statics::ClassParams = {
	&UCustomButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomButton()
{
	if (!Z_Registration_Info_UClass_UCustomButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomButton.OuterSingleton, Z_Construct_UClass_UCustomButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomButton.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UCustomButton>()
{
	return UCustomButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomButton);
UCustomButton::~UCustomButton() {}
// End Class UCustomButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomButton, UCustomButton::StaticClass, TEXT("UCustomButton"), &Z_Registration_Info_UClass_UCustomButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomButton), 1557740104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_385110976(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_CustomButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
