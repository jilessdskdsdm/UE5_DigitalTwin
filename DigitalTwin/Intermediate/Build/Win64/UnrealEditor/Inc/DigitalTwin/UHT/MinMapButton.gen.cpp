// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/Widget/MinMapButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinMapButton() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_AMapButton_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMinMapButton();
DIGITALTWIN_API UClass* Z_Construct_UClass_UMinMapButton_NoRegister();
DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Delegate FOnMinMapButtonClicked
struct Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics
{
	struct _Script_DigitalTwin_eventOnMinMapButtonClicked_Parms
	{
		AMapButton* TargetMapButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MinMapButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMapButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::NewProp_TargetMapButton = { "TargetMapButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnMinMapButtonClicked_Parms, TargetMapButton), Z_Construct_UClass_AMapButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::NewProp_TargetMapButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin, nullptr, "OnMinMapButtonClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnMinMapButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnMinMapButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMinMapButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnMinMapButtonClicked, AMapButton* TargetMapButton)
{
	struct _Script_DigitalTwin_eventOnMinMapButtonClicked_Parms
	{
		AMapButton* TargetMapButton;
	};
	_Script_DigitalTwin_eventOnMinMapButtonClicked_Parms Parms;
	Parms.TargetMapButton=TargetMapButton;
	OnMinMapButtonClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMinMapButtonClicked

// Begin Class UMinMapButton Function HandleButtonClick
struct Z_Construct_UFunction_UMinMapButton_HandleButtonClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/MinMapButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinMapButton_HandleButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinMapButton, nullptr, "HandleButtonClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinMapButton_HandleButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinMapButton_HandleButtonClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMinMapButton_HandleButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinMapButton_HandleButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinMapButton::execHandleButtonClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleButtonClick();
	P_NATIVE_END;
}
// End Class UMinMapButton Function HandleButtonClick

// Begin Class UMinMapButton
void UMinMapButton::StaticRegisterNativesUMinMapButton()
{
	UClass* Class = UMinMapButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleButtonClick", &UMinMapButton::execHandleButtonClick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinMapButton);
UClass* Z_Construct_UClass_UMinMapButton_NoRegister()
{
	return UMinMapButton::StaticClass();
}
struct Z_Construct_UClass_UMinMapButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/Widget/MinMapButton.h" },
		{ "ModuleRelativePath", "UserWidget/Widget/MinMapButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MMButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MinMap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/MinMapButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapButton_MetaData[] = {
		{ "Category", "MinMap" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "UserWidget/Widget/MinMapButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMinMapButtonClicked_MetaData[] = {
		{ "Category", "MinMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x82\xb9\xe5\x87\xbb\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "UserWidget/Widget/MinMapButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x82\xb9\xe5\x87\xbb\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_B_MMButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapButton;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinMapButtonClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinMapButton_HandleButtonClick, "HandleButtonClick" }, // 3722167320
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinMapButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinMapButton_Statics::NewProp_B_MMButton = { "B_MMButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinMapButton, B_MMButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MMButton_MetaData), NewProp_B_MMButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinMapButton_Statics::NewProp_MapButton = { "MapButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinMapButton, MapButton), Z_Construct_UClass_AMapButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapButton_MetaData), NewProp_MapButton_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMinMapButton_Statics::NewProp_OnMinMapButtonClicked = { "OnMinMapButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinMapButton, OnMinMapButtonClicked), Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMinMapButtonClicked_MetaData), NewProp_OnMinMapButtonClicked_MetaData) }; // 3716636373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinMapButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinMapButton_Statics::NewProp_B_MMButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinMapButton_Statics::NewProp_MapButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinMapButton_Statics::NewProp_OnMinMapButtonClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinMapButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinMapButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinMapButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinMapButton_Statics::ClassParams = {
	&UMinMapButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMinMapButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinMapButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinMapButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinMapButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinMapButton()
{
	if (!Z_Registration_Info_UClass_UMinMapButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinMapButton.OuterSingleton, Z_Construct_UClass_UMinMapButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinMapButton.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UMinMapButton>()
{
	return UMinMapButton::StaticClass();
}
UMinMapButton::UMinMapButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinMapButton);
UMinMapButton::~UMinMapButton() {}
// End Class UMinMapButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinMapButton, UMinMapButton::StaticClass, TEXT("UMinMapButton"), &Z_Registration_Info_UClass_UMinMapButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinMapButton), 3117818578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_1550554141(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_MinMapButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
