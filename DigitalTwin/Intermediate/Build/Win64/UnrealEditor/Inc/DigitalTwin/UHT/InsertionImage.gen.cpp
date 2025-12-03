// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/InsertionImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsertionImage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_UInsertionImage();
DIGITALTWIN_API UClass* Z_Construct_UClass_UInsertionImage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UInsertionImage Function SetImageData
struct Z_Construct_UFunction_UInsertionImage_SetImageData_Statics
{
	struct InsertionImage_eventSetImageData_Parms
	{
		UTexture2D* NewImage;
		UObject* NewDynamicImage;
		float NewZoom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Image" },
		{ "CPP_Default_NewZoom", "1.000000" },
		{ "ModuleRelativePath", "UserWidget/InsertionImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDynamicImage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::NewProp_NewImage = { "NewImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InsertionImage_eventSetImageData_Parms, NewImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::NewProp_NewDynamicImage = { "NewDynamicImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InsertionImage_eventSetImageData_Parms, NewDynamicImage), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InsertionImage_eventSetImageData_Parms, NewZoom), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::NewProp_NewImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::NewProp_NewDynamicImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::NewProp_NewZoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInsertionImage, nullptr, "SetImageData", nullptr, nullptr, Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::InsertionImage_eventSetImageData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::InsertionImage_eventSetImageData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInsertionImage_SetImageData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInsertionImage_SetImageData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInsertionImage::execSetImageData)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewImage);
	P_GET_OBJECT(UObject,Z_Param_NewDynamicImage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImageData(Z_Param_NewImage,Z_Param_NewDynamicImage,Z_Param_NewZoom);
	P_NATIVE_END;
}
// End Class UInsertionImage Function SetImageData

// Begin Class UInsertionImage Function UpdateImageDisplay
struct Z_Construct_UFunction_UInsertionImage_UpdateImageDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "UserWidget/InsertionImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInsertionImage_UpdateImageDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInsertionImage, nullptr, "UpdateImageDisplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInsertionImage_UpdateImageDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInsertionImage_UpdateImageDisplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInsertionImage_UpdateImageDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInsertionImage_UpdateImageDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInsertionImage::execUpdateImageDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateImageDisplay();
	P_NATIVE_END;
}
// End Class UInsertionImage Function UpdateImageDisplay

// Begin Class UInsertionImage
void UInsertionImage::StaticRegisterNativesUInsertionImage()
{
	UClass* Class = UInsertionImage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetImageData", &UInsertionImage::execSetImageData },
		{ "UpdateImageDisplay", &UInsertionImage::execUpdateImageDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInsertionImage);
UClass* Z_Construct_UClass_UInsertionImage_NoRegister()
{
	return UInsertionImage::StaticClass();
}
struct Z_Construct_UClass_UInsertionImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/InsertionImage.h" },
		{ "ModuleRelativePath", "UserWidget/InsertionImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZoom_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "UserWidget/InsertionImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "UserWidget/InsertionImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "UserWidget/InsertionImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleZoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInsertionImage_SetImageData, "SetImageData" }, // 2182342484
		{ &Z_Construct_UFunction_UInsertionImage_UpdateImageDisplay, "UpdateImageDisplay" }, // 3800958074
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInsertionImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInsertionImage_Statics::NewProp_ScaleZoom = { "ScaleZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInsertionImage, ScaleZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleZoom_MetaData), NewProp_ScaleZoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInsertionImage_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInsertionImage, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInsertionImage_Statics::NewProp_DynamicImage = { "DynamicImage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInsertionImage, DynamicImage), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicImage_MetaData), NewProp_DynamicImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInsertionImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInsertionImage_Statics::NewProp_ScaleZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInsertionImage_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInsertionImage_Statics::NewProp_DynamicImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInsertionImage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInsertionImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UImage,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInsertionImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInsertionImage_Statics::ClassParams = {
	&UInsertionImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInsertionImage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInsertionImage_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInsertionImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UInsertionImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInsertionImage()
{
	if (!Z_Registration_Info_UClass_UInsertionImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInsertionImage.OuterSingleton, Z_Construct_UClass_UInsertionImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInsertionImage.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UInsertionImage>()
{
	return UInsertionImage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInsertionImage);
UInsertionImage::~UInsertionImage() {}
// End Class UInsertionImage

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInsertionImage, UInsertionImage::StaticClass, TEXT("UInsertionImage"), &Z_Registration_Info_UClass_UInsertionImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInsertionImage), 1286599625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_1815536685(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_InsertionImage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
