// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/TimeBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeBar() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_UTimeBar();
DIGITALTWIN_API UClass* Z_Construct_UClass_UTimeBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UTimeBar Function GetCompassDirection
struct Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics
{
	struct TimeBar_eventGetCompassDirection_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeBar" },
		{ "CompactNodeTitle", "CompassDirection" },
		{ "DisplayName", "GetCompassDirection" },
		{ "ModuleRelativePath", "UserWidget/TimeBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeBar_eventGetCompassDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeBar, nullptr, "GetCompassDirection", nullptr, nullptr, Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::TimeBar_eventGetCompassDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::TimeBar_eventGetCompassDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeBar_GetCompassDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeBar_GetCompassDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeBar::execGetCompassDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCompassDirection();
	P_NATIVE_END;
}
// End Class UTimeBar Function GetCompassDirection

// Begin Class UTimeBar Function SetGameTime
struct Z_Construct_UFunction_UTimeBar_SetGameTime_Statics
{
	struct TimeBar_eventSetGameTime_Parms
	{
		float Value;
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeBar" },
		{ "ModuleRelativePath", "UserWidget/TimeBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeBar_eventSetGameTime_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeBar_eventSetGameTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeBar, nullptr, "SetGameTime", nullptr, nullptr, Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::TimeBar_eventSetGameTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::TimeBar_eventSetGameTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeBar_SetGameTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeBar_SetGameTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeBar::execSetGameTime)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameTime(Z_Param_Out_Value,Z_Param_Out_Time);
	P_NATIVE_END;
}
// End Class UTimeBar Function SetGameTime

// Begin Class UTimeBar Function UpdateTimeBar
struct Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics
{
	struct TimeBar_eventUpdateTimeBar_Parms
	{
		float TimeOfDay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeBar" },
		{ "ModuleRelativePath", "UserWidget/TimeBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeBar_eventUpdateTimeBar_Parms, TimeOfDay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::NewProp_TimeOfDay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeBar, nullptr, "UpdateTimeBar", nullptr, nullptr, Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::TimeBar_eventUpdateTimeBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::TimeBar_eventUpdateTimeBar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeBar_UpdateTimeBar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeBar_UpdateTimeBar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeBar::execUpdateTimeBar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfDay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTimeBar(Z_Param_TimeOfDay);
	P_NATIVE_END;
}
// End Class UTimeBar Function UpdateTimeBar

// Begin Class UTimeBar
void UTimeBar::StaticRegisterNativesUTimeBar()
{
	UClass* Class = UTimeBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCompassDirection", &UTimeBar::execGetCompassDirection },
		{ "SetGameTime", &UTimeBar::execSetGameTime },
		{ "UpdateTimeBar", &UTimeBar::execUpdateTimeBar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimeBar);
UClass* Z_Construct_UClass_UTimeBar_NoRegister()
{
	return UTimeBar::StaticClass();
}
struct Z_Construct_UClass_UTimeBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/TimeBar.h" },
		{ "ModuleRelativePath", "UserWidget/TimeBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_TimeBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TimeBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/TimeBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_CurrentTime_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TimeBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/TimeBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSpeed_MetaData[] = {
		{ "Category", "TimeBar" },
		{ "ModuleRelativePath", "UserWidget/TimeBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_S_TimeBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeBar_GetCompassDirection, "GetCompassDirection" }, // 4013599492
		{ &Z_Construct_UFunction_UTimeBar_SetGameTime, "SetGameTime" }, // 672751883
		{ &Z_Construct_UFunction_UTimeBar_UpdateTimeBar, "UpdateTimeBar" }, // 799061142
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTimeBar_Statics::NewProp_S_TimeBar = { "S_TimeBar", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeBar, S_TimeBar), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_TimeBar_MetaData), NewProp_S_TimeBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTimeBar_Statics::NewProp_T_CurrentTime = { "T_CurrentTime", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeBar, T_CurrentTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_CurrentTime_MetaData), NewProp_T_CurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimeBar_Statics::NewProp_TimeSpeed = { "TimeSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeBar, TimeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSpeed_MetaData), NewProp_TimeSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeBar_Statics::NewProp_S_TimeBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeBar_Statics::NewProp_T_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeBar_Statics::NewProp_TimeSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimeBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeBar_Statics::ClassParams = {
	&UTimeBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTimeBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimeBar()
{
	if (!Z_Registration_Info_UClass_UTimeBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeBar.OuterSingleton, Z_Construct_UClass_UTimeBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimeBar.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UTimeBar>()
{
	return UTimeBar::StaticClass();
}
UTimeBar::UTimeBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeBar);
UTimeBar::~UTimeBar() {}
// End Class UTimeBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimeBar, UTimeBar::StaticClass, TEXT("UTimeBar"), &Z_Registration_Info_UClass_UTimeBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeBar), 888977299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_565009783(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_TimeBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
