// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/Introduction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroduction() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_UInsertionImage_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UIntroduction();
DIGITALTWIN_API UClass* Z_Construct_UClass_UIntroduction_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UIntroduction Function GetResolution
struct Z_Construct_UFunction_UIntroduction_GetResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Introduction" },
		{ "ModuleRelativePath", "UserWidget/Introduction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntroduction_GetResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntroduction, nullptr, "GetResolution", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntroduction_GetResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntroduction_GetResolution_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIntroduction_GetResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntroduction_GetResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntroduction::execGetResolution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResolution();
	P_NATIVE_END;
}
// End Class UIntroduction Function GetResolution

// Begin Class UIntroduction
void UIntroduction::StaticRegisterNativesUIntroduction()
{
	UClass* Class = UIntroduction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetResolution", &UIntroduction::execGetResolution },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntroduction);
UClass* Z_Construct_UClass_UIntroduction_NoRegister()
{
	return UIntroduction::StaticClass();
}
struct Z_Construct_UClass_UIntroduction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/Introduction.h" },
		{ "ModuleRelativePath", "UserWidget/Introduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Introduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageL_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Introduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageR_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Introduction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageR;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIntroduction_GetResolution, "GetResolution" }, // 2812683373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntroduction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIntroduction_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntroduction, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIntroduction_Statics::NewProp_ImageL = { "ImageL", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntroduction, ImageL), Z_Construct_UClass_UInsertionImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageL_MetaData), NewProp_ImageL_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIntroduction_Statics::NewProp_ImageR = { "ImageR", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntroduction, ImageR), Z_Construct_UClass_UInsertionImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageR_MetaData), NewProp_ImageR_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIntroduction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntroduction_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntroduction_Statics::NewProp_ImageL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntroduction_Statics::NewProp_ImageR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroduction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIntroduction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroduction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntroduction_Statics::ClassParams = {
	&UIntroduction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIntroduction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIntroduction_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroduction_Statics::Class_MetaDataParams), Z_Construct_UClass_UIntroduction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIntroduction()
{
	if (!Z_Registration_Info_UClass_UIntroduction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntroduction.OuterSingleton, Z_Construct_UClass_UIntroduction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIntroduction.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UIntroduction>()
{
	return UIntroduction::StaticClass();
}
UIntroduction::UIntroduction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIntroduction);
UIntroduction::~UIntroduction() {}
// End Class UIntroduction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Introduction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIntroduction, UIntroduction::StaticClass, TEXT("UIntroduction"), &Z_Registration_Info_UClass_UIntroduction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntroduction), 1282994864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Introduction_h_1869904525(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Introduction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Introduction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
