// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/HouseType/HouseButtonControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHouseButtonControl() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_AHouseButton_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_AHouseButtonControl();
DIGITALTWIN_API UClass* Z_Construct_UClass_AHouseButtonControl_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_ALayerButtons_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class AHouseButtonControl Function ActivateCurrentBuildingButton
struct Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics
{
	struct HouseButtonControl_eventActivateCurrentBuildingButton_Parms
	{
		int32 Number;
		bool bIsActivate;
		TArray<AHouseButton*> HouseButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HouseButton" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButtonControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
	static void NewProp_bIsActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActivate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HouseButton_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HouseButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButtonControl_eventActivateCurrentBuildingButton_Parms, Number), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_bIsActivate_SetBit(void* Obj)
{
	((HouseButtonControl_eventActivateCurrentBuildingButton_Parms*)Obj)->bIsActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_bIsActivate = { "bIsActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HouseButtonControl_eventActivateCurrentBuildingButton_Parms), &Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_bIsActivate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_HouseButton_Inner = { "HouseButton", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AHouseButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_HouseButton = { "HouseButton", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButtonControl_eventActivateCurrentBuildingButton_Parms, HouseButton), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_bIsActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_HouseButton_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::NewProp_HouseButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseButtonControl, nullptr, "ActivateCurrentBuildingButton", nullptr, nullptr, Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::HouseButtonControl_eventActivateCurrentBuildingButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::HouseButtonControl_eventActivateCurrentBuildingButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseButtonControl::execActivateCurrentBuildingButton)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Number);
	P_GET_UBOOL(Z_Param_bIsActivate);
	P_GET_TARRAY_REF(AHouseButton*,Z_Param_Out_HouseButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateCurrentBuildingButton(Z_Param_Number,Z_Param_bIsActivate,Z_Param_Out_HouseButton);
	P_NATIVE_END;
}
// End Class AHouseButtonControl Function ActivateCurrentBuildingButton

// Begin Class AHouseButtonControl Function DisableAllButtons
struct Z_Construct_UFunction_AHouseButtonControl_DisableAllButtons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HouseButton" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButtonControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseButtonControl_DisableAllButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseButtonControl, nullptr, "DisableAllButtons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_DisableAllButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseButtonControl_DisableAllButtons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHouseButtonControl_DisableAllButtons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseButtonControl_DisableAllButtons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseButtonControl::execDisableAllButtons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableAllButtons();
	P_NATIVE_END;
}
// End Class AHouseButtonControl Function DisableAllButtons

// Begin Class AHouseButtonControl Function GetAllHouseButton
struct Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics
{
	struct HouseButtonControl_eventGetAllHouseButton_Parms
	{
		TArray<AHouseButton*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HouseButton" },
		{ "CompactNodeTitle", "AllHouseButton" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButtonControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AHouseButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButtonControl_eventGetAllHouseButton_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseButtonControl, nullptr, "GetAllHouseButton", nullptr, nullptr, Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::HouseButtonControl_eventGetAllHouseButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::HouseButtonControl_eventGetAllHouseButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseButtonControl::execGetAllHouseButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AHouseButton*>*)Z_Param__Result=P_THIS->GetAllHouseButton();
	P_NATIVE_END;
}
// End Class AHouseButtonControl Function GetAllHouseButton

// Begin Class AHouseButtonControl Function GetAllLayerButton
struct Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics
{
	struct HouseButtonControl_eventGetAllLayerButton_Parms
	{
		TArray<ALayerButtons*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HouseButton" },
		{ "CompactNodeTitle", "AllHouseButton" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButtonControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALayerButtons_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButtonControl_eventGetAllLayerButton_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseButtonControl, nullptr, "GetAllLayerButton", nullptr, nullptr, Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::HouseButtonControl_eventGetAllLayerButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::HouseButtonControl_eventGetAllLayerButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseButtonControl::execGetAllLayerButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ALayerButtons*>*)Z_Param__Result=P_THIS->GetAllLayerButton();
	P_NATIVE_END;
}
// End Class AHouseButtonControl Function GetAllLayerButton

// Begin Class AHouseButtonControl
void AHouseButtonControl::StaticRegisterNativesAHouseButtonControl()
{
	UClass* Class = AHouseButtonControl::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateCurrentBuildingButton", &AHouseButtonControl::execActivateCurrentBuildingButton },
		{ "DisableAllButtons", &AHouseButtonControl::execDisableAllButtons },
		{ "GetAllHouseButton", &AHouseButtonControl::execGetAllHouseButton },
		{ "GetAllLayerButton", &AHouseButtonControl::execGetAllLayerButton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHouseButtonControl);
UClass* Z_Construct_UClass_AHouseButtonControl_NoRegister()
{
	return AHouseButtonControl::StaticClass();
}
struct Z_Construct_UClass_AHouseButtonControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HouseType/HouseButtonControl.h" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButtonControl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHouseButtonControl_ActivateCurrentBuildingButton, "ActivateCurrentBuildingButton" }, // 3701393713
		{ &Z_Construct_UFunction_AHouseButtonControl_DisableAllButtons, "DisableAllButtons" }, // 715040966
		{ &Z_Construct_UFunction_AHouseButtonControl_GetAllHouseButton, "GetAllHouseButton" }, // 876192519
		{ &Z_Construct_UFunction_AHouseButtonControl_GetAllLayerButton, "GetAllLayerButton" }, // 915476456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHouseButtonControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHouseButtonControl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseButtonControl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHouseButtonControl_Statics::ClassParams = {
	&AHouseButtonControl::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseButtonControl_Statics::Class_MetaDataParams), Z_Construct_UClass_AHouseButtonControl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHouseButtonControl()
{
	if (!Z_Registration_Info_UClass_AHouseButtonControl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHouseButtonControl.OuterSingleton, Z_Construct_UClass_AHouseButtonControl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHouseButtonControl.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<AHouseButtonControl>()
{
	return AHouseButtonControl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHouseButtonControl);
AHouseButtonControl::~AHouseButtonControl() {}
// End Class AHouseButtonControl

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHouseButtonControl, AHouseButtonControl::StaticClass, TEXT("AHouseButtonControl"), &Z_Registration_Info_UClass_AHouseButtonControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHouseButtonControl), 564869200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_2967791883(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButtonControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
