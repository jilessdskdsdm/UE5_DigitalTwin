// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/HouseType/LayerButtons.h"
#include "DigitalTwin/Data/Structure.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayerButtons() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_ALayerButtons();
DIGITALTWIN_API UClass* Z_Construct_UClass_ALayerButtons_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_AViewLayerHouse_NoRegister();
DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FLayerData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Delegate FOnLayerButtonClicked
struct Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics
{
	struct _Script_DigitalTwin_eventOnLayerButtonClicked_Parms
	{
		ALayerButtons* Button;
		FLayerData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnLayerButtonClicked_Parms, Button), Z_Construct_UClass_ALayerButtons_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnLayerButtonClicked_Parms, Data), Z_Construct_UScriptStruct_FLayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3306208353
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin, nullptr, "OnLayerButtonClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnLayerButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnLayerButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLayerButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnLayerButtonClicked, ALayerButtons* Button, FLayerData const& Data)
{
	struct _Script_DigitalTwin_eventOnLayerButtonClicked_Parms
	{
		ALayerButtons* Button;
		FLayerData Data;
	};
	_Script_DigitalTwin_eventOnLayerButtonClicked_Parms Parms;
	Parms.Button=Button;
	Parms.Data=Data;
	OnLayerButtonClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLayerButtonClicked

// Begin Class ALayerButtons Function OnButtonClicked
struct Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics
{
	struct LayerButtons_eventOnButtonClicked_Parms
	{
		UPrimitiveComponent* TouchedComponent;
		FKey ButtonPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HouseButton" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerButtons_eventOnButtonClicked_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerButtons_eventOnButtonClicked_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::NewProp_TouchedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::NewProp_ButtonPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerButtons, nullptr, "OnButtonClicked", nullptr, nullptr, Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::LayerButtons_eventOnButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::LayerButtons_eventOnButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALayerButtons_OnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerButtons_OnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALayerButtons::execOnButtonClicked)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonClicked(Z_Param_TouchedComponent,Z_Param_ButtonPressed);
	P_NATIVE_END;
}
// End Class ALayerButtons Function OnButtonClicked

// Begin Class ALayerButtons Function OnHoverBegin
struct Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics
{
	struct LayerButtons_eventOnHoverBegin_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerButtons_eventOnHoverBegin_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerButtons, nullptr, "OnHoverBegin", nullptr, nullptr, Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::LayerButtons_eventOnHoverBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::LayerButtons_eventOnHoverBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALayerButtons_OnHoverBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerButtons_OnHoverBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALayerButtons::execOnHoverBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoverBegin(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// End Class ALayerButtons Function OnHoverBegin

// Begin Class ALayerButtons Function OnHoverEnd
struct Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics
{
	struct LayerButtons_eventOnHoverEnd_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerButtons_eventOnHoverEnd_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerButtons, nullptr, "OnHoverEnd", nullptr, nullptr, Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::LayerButtons_eventOnHoverEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::LayerButtons_eventOnHoverEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALayerButtons_OnHoverEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerButtons_OnHoverEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALayerButtons::execOnHoverEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoverEnd(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// End Class ALayerButtons Function OnHoverEnd

// Begin Class ALayerButtons Function SpawnHouseButton
struct Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics
{
	struct LayerButtons_eventSpawnHouseButton_Parms
	{
		float VerticalSpacing;
		float NumFloors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HouseButton" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFloors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalSpacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumFloors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::NewProp_VerticalSpacing = { "VerticalSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerButtons_eventSpawnHouseButton_Parms, VerticalSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalSpacing_MetaData), NewProp_VerticalSpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::NewProp_NumFloors = { "NumFloors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerButtons_eventSpawnHouseButton_Parms, NumFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFloors_MetaData), NewProp_NumFloors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::NewProp_VerticalSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::NewProp_NumFloors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALayerButtons, nullptr, "SpawnHouseButton", nullptr, nullptr, Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::LayerButtons_eventSpawnHouseButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::LayerButtons_eventSpawnHouseButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALayerButtons_SpawnHouseButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALayerButtons_SpawnHouseButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALayerButtons::execSpawnHouseButton)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_VerticalSpacing);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NumFloors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnHouseButton(Z_Param_VerticalSpacing,Z_Param_NumFloors);
	P_NATIVE_END;
}
// End Class ALayerButtons Function SpawnHouseButton

// Begin Class ALayerButtons
void ALayerButtons::StaticRegisterNativesALayerButtons()
{
	UClass* Class = ALayerButtons::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonClicked", &ALayerButtons::execOnButtonClicked },
		{ "OnHoverBegin", &ALayerButtons::execOnHoverBegin },
		{ "OnHoverEnd", &ALayerButtons::execOnHoverEnd },
		{ "SpawnHouseButton", &ALayerButtons::execSpawnHouseButton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALayerButtons);
UClass* Z_Construct_UClass_ALayerButtons_NoRegister()
{
	return ALayerButtons::StaticClass();
}
struct Z_Construct_UClass_ALayerButtons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HouseType/LayerButtons.h" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLayerButtonClicked_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoShowMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnObject_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewHouse_MetaData[] = {
		{ "Category", "ViewHouseData" },
		{ "ModuleRelativePath", "Actor/HouseType/LayerButtons.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonMesh;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLayerButtonClicked;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NoShowMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HoveredMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewHouse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALayerButtons_OnButtonClicked, "OnButtonClicked" }, // 3160600033
		{ &Z_Construct_UFunction_ALayerButtons_OnHoverBegin, "OnHoverBegin" }, // 3921949165
		{ &Z_Construct_UFunction_ALayerButtons_OnHoverEnd, "OnHoverEnd" }, // 3452737738
		{ &Z_Construct_UFunction_ALayerButtons_SpawnHouseButton, "SpawnHouseButton" }, // 2808032288
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALayerButtons>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALayerButtons_Statics::NewProp_ButtonMesh = { "ButtonMesh", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerButtons, ButtonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonMesh_MetaData), NewProp_ButtonMesh_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALayerButtons_Statics::NewProp_OnLayerButtonClicked = { "OnLayerButtonClicked", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerButtons, OnLayerButtonClicked), Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLayerButtonClicked_MetaData), NewProp_OnLayerButtonClicked_MetaData) }; // 4031214026
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALayerButtons_Statics::NewProp_NoShowMaterial = { "NoShowMaterial", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerButtons, NoShowMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoShowMaterial_MetaData), NewProp_NoShowMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALayerButtons_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerButtons, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALayerButtons_Statics::NewProp_HoveredMaterial = { "HoveredMaterial", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerButtons, HoveredMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredMaterial_MetaData), NewProp_HoveredMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALayerButtons_Statics::NewProp_LayerData = { "LayerData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerButtons, LayerData), Z_Construct_UScriptStruct_FLayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerData_MetaData), NewProp_LayerData_MetaData) }; // 3306208353
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALayerButtons_Statics::NewProp_SpawnObject = { "SpawnObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerButtons, SpawnObject), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnObject_MetaData), NewProp_SpawnObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALayerButtons_Statics::NewProp_ViewHouse = { "ViewHouse", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALayerButtons, ViewHouse), Z_Construct_UClass_AViewLayerHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewHouse_MetaData), NewProp_ViewHouse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALayerButtons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerButtons_Statics::NewProp_ButtonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerButtons_Statics::NewProp_OnLayerButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerButtons_Statics::NewProp_NoShowMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerButtons_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerButtons_Statics::NewProp_HoveredMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerButtons_Statics::NewProp_LayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerButtons_Statics::NewProp_SpawnObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALayerButtons_Statics::NewProp_ViewHouse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerButtons_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALayerButtons_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerButtons_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALayerButtons_Statics::ClassParams = {
	&ALayerButtons::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALayerButtons_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALayerButtons_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALayerButtons_Statics::Class_MetaDataParams), Z_Construct_UClass_ALayerButtons_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALayerButtons()
{
	if (!Z_Registration_Info_UClass_ALayerButtons.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALayerButtons.OuterSingleton, Z_Construct_UClass_ALayerButtons_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALayerButtons.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<ALayerButtons>()
{
	return ALayerButtons::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALayerButtons);
ALayerButtons::~ALayerButtons() {}
// End Class ALayerButtons

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALayerButtons, ALayerButtons::StaticClass, TEXT("ALayerButtons"), &Z_Registration_Info_UClass_ALayerButtons, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALayerButtons), 2235488269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_2049189374(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_LayerButtons_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
