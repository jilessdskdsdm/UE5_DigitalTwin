// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/HouseType/HouseButton.h"
#include "DigitalTwin/Data/Structure.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHouseButton() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_AHouseButton();
DIGITALTWIN_API UClass* Z_Construct_UClass_AHouseButton_NoRegister();
DIGITALTWIN_API UClass* Z_Construct_UClass_AViewHouse_NoRegister();
DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FHouseData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Delegate FOnHouseButtonClicked
struct Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics
{
	struct _Script_DigitalTwin_eventOnHouseButtonClicked_Parms
	{
		AHouseButton* Button;
		FHouseData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnHouseButtonClicked_Parms, Button), Z_Construct_UClass_AHouseButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DigitalTwin_eventOnHouseButtonClicked_Parms, Data), Z_Construct_UScriptStruct_FHouseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1703076476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin, nullptr, "OnHouseButtonClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnHouseButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::_Script_DigitalTwin_eventOnHouseButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHouseButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnHouseButtonClicked, AHouseButton* Button, FHouseData const& Data)
{
	struct _Script_DigitalTwin_eventOnHouseButtonClicked_Parms
	{
		AHouseButton* Button;
		FHouseData Data;
	};
	_Script_DigitalTwin_eventOnHouseButtonClicked_Parms Parms;
	Parms.Button=Button;
	Parms.Data=Data;
	OnHouseButtonClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHouseButtonClicked

// Begin Class AHouseButton Function OnButtonClicked
struct Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics
{
	struct HouseButton_eventOnButtonClicked_Parms
	{
		UPrimitiveComponent* TouchedComponent;
		FKey ButtonPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HouseButton" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButton_eventOnButtonClicked_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButton_eventOnButtonClicked_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::NewProp_TouchedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::NewProp_ButtonPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseButton, nullptr, "OnButtonClicked", nullptr, nullptr, Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::HouseButton_eventOnButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::HouseButton_eventOnButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHouseButton_OnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseButton_OnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseButton::execOnButtonClicked)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonClicked(Z_Param_TouchedComponent,Z_Param_ButtonPressed);
	P_NATIVE_END;
}
// End Class AHouseButton Function OnButtonClicked

// Begin Class AHouseButton Function OnHoverBegin
struct Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics
{
	struct HouseButton_eventOnHoverBegin_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButton_eventOnHoverBegin_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseButton, nullptr, "OnHoverBegin", nullptr, nullptr, Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::HouseButton_eventOnHoverBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::HouseButton_eventOnHoverBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHouseButton_OnHoverBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseButton_OnHoverBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseButton::execOnHoverBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoverBegin(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// End Class AHouseButton Function OnHoverBegin

// Begin Class AHouseButton Function OnHoverEnd
struct Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics
{
	struct HouseButton_eventOnHoverEnd_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButton_eventOnHoverEnd_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseButton, nullptr, "OnHoverEnd", nullptr, nullptr, Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::HouseButton_eventOnHoverEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::HouseButton_eventOnHoverEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHouseButton_OnHoverEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseButton_OnHoverEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseButton::execOnHoverEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoverEnd(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// End Class AHouseButton Function OnHoverEnd

// Begin Class AHouseButton Function SpawnHouseButton
struct Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics
{
	struct HouseButton_eventSpawnHouseButton_Parms
	{
		float VerticalSpacing;
		float NumFloors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HouseButton" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::NewProp_VerticalSpacing = { "VerticalSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButton_eventSpawnHouseButton_Parms, VerticalSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalSpacing_MetaData), NewProp_VerticalSpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::NewProp_NumFloors = { "NumFloors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HouseButton_eventSpawnHouseButton_Parms, NumFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFloors_MetaData), NewProp_NumFloors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::NewProp_VerticalSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::NewProp_NumFloors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseButton, nullptr, "SpawnHouseButton", nullptr, nullptr, Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::HouseButton_eventSpawnHouseButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::HouseButton_eventSpawnHouseButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHouseButton_SpawnHouseButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHouseButton_SpawnHouseButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHouseButton::execSpawnHouseButton)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_VerticalSpacing);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NumFloors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnHouseButton(Z_Param_VerticalSpacing,Z_Param_NumFloors);
	P_NATIVE_END;
}
// End Class AHouseButton Function SpawnHouseButton

// Begin Class AHouseButton
void AHouseButton::StaticRegisterNativesAHouseButton()
{
	UClass* Class = AHouseButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonClicked", &AHouseButton::execOnButtonClicked },
		{ "OnHoverBegin", &AHouseButton::execOnHoverBegin },
		{ "OnHoverEnd", &AHouseButton::execOnHoverEnd },
		{ "SpawnHouseButton", &AHouseButton::execSpawnHouseButton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHouseButton);
UClass* Z_Construct_UClass_AHouseButton_NoRegister()
{
	return AHouseButton::StaticClass();
}
struct Z_Construct_UClass_AHouseButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/HouseType/HouseButton.h" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHouseButtonClicked_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoShowMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnObject_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ButtonData" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewHouse_MetaData[] = {
		{ "Category", "ViewHouseData" },
		{ "ModuleRelativePath", "Actor/HouseType/HouseButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonMesh;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHouseButtonClicked;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NoShowMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HoveredMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HouseData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewHouse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHouseButton_OnButtonClicked, "OnButtonClicked" }, // 1434060474
		{ &Z_Construct_UFunction_AHouseButton_OnHoverBegin, "OnHoverBegin" }, // 2494543851
		{ &Z_Construct_UFunction_AHouseButton_OnHoverEnd, "OnHoverEnd" }, // 3522087504
		{ &Z_Construct_UFunction_AHouseButton_SpawnHouseButton, "SpawnHouseButton" }, // 1763988302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHouseButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseButton_Statics::NewProp_ButtonMesh = { "ButtonMesh", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseButton, ButtonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonMesh_MetaData), NewProp_ButtonMesh_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHouseButton_Statics::NewProp_OnHouseButtonClicked = { "OnHouseButtonClicked", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseButton, OnHouseButtonClicked), Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHouseButtonClicked_MetaData), NewProp_OnHouseButtonClicked_MetaData) }; // 553737070
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AHouseButton_Statics::NewProp_NoShowMaterial = { "NoShowMaterial", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseButton, NoShowMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoShowMaterial_MetaData), NewProp_NoShowMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AHouseButton_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseButton, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AHouseButton_Statics::NewProp_HoveredMaterial = { "HoveredMaterial", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseButton, HoveredMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredMaterial_MetaData), NewProp_HoveredMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHouseButton_Statics::NewProp_HouseData = { "HouseData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseButton, HouseData), Z_Construct_UScriptStruct_FHouseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseData_MetaData), NewProp_HouseData_MetaData) }; // 1703076476
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHouseButton_Statics::NewProp_SpawnObject = { "SpawnObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseButton, SpawnObject), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnObject_MetaData), NewProp_SpawnObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseButton_Statics::NewProp_ViewHouse = { "ViewHouse", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHouseButton, ViewHouse), Z_Construct_UClass_AViewHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewHouse_MetaData), NewProp_ViewHouse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHouseButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseButton_Statics::NewProp_ButtonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseButton_Statics::NewProp_OnHouseButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseButton_Statics::NewProp_NoShowMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseButton_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseButton_Statics::NewProp_HoveredMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseButton_Statics::NewProp_HouseData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseButton_Statics::NewProp_SpawnObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseButton_Statics::NewProp_ViewHouse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHouseButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHouseButton_Statics::ClassParams = {
	&AHouseButton::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHouseButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHouseButton_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseButton_Statics::Class_MetaDataParams), Z_Construct_UClass_AHouseButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHouseButton()
{
	if (!Z_Registration_Info_UClass_AHouseButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHouseButton.OuterSingleton, Z_Construct_UClass_AHouseButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHouseButton.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<AHouseButton>()
{
	return AHouseButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHouseButton);
AHouseButton::~AHouseButton() {}
// End Class AHouseButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHouseButton, AHouseButton::StaticClass, TEXT("AHouseButton"), &Z_Registration_Info_UClass_AHouseButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHouseButton), 3697636722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_836015809(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_HouseType_HouseButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
