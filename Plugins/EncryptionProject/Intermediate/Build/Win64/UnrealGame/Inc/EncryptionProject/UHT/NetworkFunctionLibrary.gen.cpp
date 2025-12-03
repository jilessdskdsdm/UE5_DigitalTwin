// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EncryptionProject/Encryption/NetworkFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_UNetworkFunctionLibrary();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_UNetworkFunctionLibrary_NoRegister();
ENCRYPTIONPROJECT_API UFunction* Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_EncryptionProject();
// End Cross Module References

// Begin Delegate FOnNetworkChecked
struct Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics
{
	struct _Script_EncryptionProject_eventOnNetworkChecked_Parms
	{
		bool bHasInternet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasInternet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInternet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::NewProp_bHasInternet_SetBit(void* Obj)
{
	((_Script_EncryptionProject_eventOnNetworkChecked_Parms*)Obj)->bHasInternet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::NewProp_bHasInternet = { "bHasInternet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_EncryptionProject_eventOnNetworkChecked_Parms), &Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::NewProp_bHasInternet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::NewProp_bHasInternet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EncryptionProject, nullptr, "OnNetworkChecked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::_Script_EncryptionProject_eventOnNetworkChecked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::_Script_EncryptionProject_eventOnNetworkChecked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNetworkChecked_DelegateWrapper(const FScriptDelegate& OnNetworkChecked, bool bHasInternet)
{
	struct _Script_EncryptionProject_eventOnNetworkChecked_Parms
	{
		bool bHasInternet;
	};
	_Script_EncryptionProject_eventOnNetworkChecked_Parms Parms;
	Parms.bHasInternet=bHasInternet ? true : false;
	OnNetworkChecked.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnNetworkChecked

// Begin Class UNetworkFunctionLibrary Function CheckInternetAvailability
struct Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics
{
	struct NetworkFunctionLibrary_eventCheckInternetAvailability_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Network" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8d\xa2\xe8\xa1\x8c\n" },
#endif
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8d\xa2\xe8\xa1\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventCheckInternetAvailability_Parms, Callback), Z_Construct_UDelegateFunction_EncryptionProject_OnNetworkChecked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3848499757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "CheckInternetAvailability", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::NetworkFunctionLibrary_eventCheckInternetAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::NetworkFunctionLibrary_eventCheckInternetAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execCheckInternetAvailability)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNetworkFunctionLibrary::CheckInternetAvailability(FOnNetworkChecked(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function CheckInternetAvailability

// Begin Class UNetworkFunctionLibrary Function ConvertedInteger
struct Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics
{
	struct NetworkFunctionLibrary_eventConvertedInteger_Parms
	{
		FString Converted;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
		{ "CompactNodeTitle", "ConvertedInteger" },
		{ "DisplayName", "ConvertedInteger" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Converted;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::NewProp_Converted = { "Converted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventConvertedInteger_Parms, Converted), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventConvertedInteger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::NewProp_Converted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "ConvertedInteger", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::NetworkFunctionLibrary_eventConvertedInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::NetworkFunctionLibrary_eventConvertedInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execConvertedInteger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Converted);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UNetworkFunctionLibrary::ConvertedInteger(Z_Param_Converted);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function ConvertedInteger

// Begin Class UNetworkFunctionLibrary Function GetCode
struct Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics
{
	struct NetworkFunctionLibrary_eventGetCode_Parms
	{
		FString ID;
		int64 ExpirationDays;
		FDateTime Date;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Date Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbd\xac\xe6\x8d\xa2\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\n" },
#endif
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbd\xac\xe6\x8d\xa2\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ExpirationDays;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Date;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetCode_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NewProp_ExpirationDays = { "ExpirationDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetCode_Parms, ExpirationDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetCode_Parms, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Date_MetaData), NewProp_Date_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NewProp_ExpirationDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NewProp_Date,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "GetCode", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NetworkFunctionLibrary_eventGetCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::NetworkFunctionLibrary_eventGetCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execGetCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ID);
	P_GET_PROPERTY(FInt64Property,Z_Param_ExpirationDays);
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_Date);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNetworkFunctionLibrary::GetCode(Z_Param_ID,Z_Param_ExpirationDays,Z_Param_Out_Date);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function GetCode

// Begin Class UNetworkFunctionLibrary Function GetCurrentTimeFromCustomTimestamp
struct Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics
{
	struct NetworkFunctionLibrary_eventGetCurrentTimeFromCustomTimestamp_Parms
	{
		int64 CustomTimeStamp;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x8e""2000\xe5\xb9\xb4\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe6\x97\xb6\xe9\x97\xb4\xe7\x9a\x84\xe7\xa7\x92\n" },
#endif
		{ "CompactNodeTitle", "GetCurrentTimeFromCustomTimestamp" },
		{ "DisplayName", "GetCurrentTimeFromCustomTimestamp" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e""2000\xe5\xb9\xb4\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe6\x97\xb6\xe9\x97\xb4\xe7\x9a\x84\xe7\xa7\x92" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CustomTimeStamp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::NewProp_CustomTimeStamp = { "CustomTimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetCurrentTimeFromCustomTimestamp_Parms, CustomTimeStamp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetCurrentTimeFromCustomTimestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::NewProp_CustomTimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "GetCurrentTimeFromCustomTimestamp", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::NetworkFunctionLibrary_eventGetCurrentTimeFromCustomTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::NetworkFunctionLibrary_eventGetCurrentTimeFromCustomTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execGetCurrentTimeFromCustomTimestamp)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_CustomTimeStamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNetworkFunctionLibrary::GetCurrentTimeFromCustomTimestamp(Z_Param_CustomTimeStamp);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function GetCurrentTimeFromCustomTimestamp

// Begin Class UNetworkFunctionLibrary Function GetCustomTimeStamp
struct Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics
{
	struct NetworkFunctionLibrary_eventGetCustomTimeStamp_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe8\x81\x94\xe7\xbd\x91\n" },
#endif
		{ "CompactNodeTitle", "GetCustomTimeStamp" },
		{ "DisplayName", "GetCustomTimeStamp" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\x81\x94\xe7\xbd\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetCustomTimeStamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "GetCustomTimeStamp", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::NetworkFunctionLibrary_eventGetCustomTimeStamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::NetworkFunctionLibrary_eventGetCustomTimeStamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execGetCustomTimeStamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UNetworkFunctionLibrary::GetCustomTimeStamp();
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function GetCustomTimeStamp

// Begin Class UNetworkFunctionLibrary Function GetExpirationTime
struct Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics
{
	struct NetworkFunctionLibrary_eventGetExpirationTime_Parms
	{
		FString CurrentTime;
		int32 DaysToAdd;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "CompactNodeTitle", "GetExpirationTime" },
		{ "DisplayName", "GetExpirationTime" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DaysToAdd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetExpirationTime_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::NewProp_DaysToAdd = { "DaysToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetExpirationTime_Parms, DaysToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetExpirationTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::NewProp_DaysToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "GetExpirationTime", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::NetworkFunctionLibrary_eventGetExpirationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::NetworkFunctionLibrary_eventGetExpirationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execGetExpirationTime)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CurrentTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_DaysToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNetworkFunctionLibrary::GetExpirationTime(Z_Param_CurrentTime,Z_Param_DaysToAdd);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function GetExpirationTime

// Begin Class UNetworkFunctionLibrary Function GetTimeStamp
struct Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics
{
	struct NetworkFunctionLibrary_eventGetTimeStamp_Parms
	{
		FDateTime InputTime;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x8e""2000\xe5\xb9\xb4\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe6\x97\xb6\xe9\x97\xb4\xe7\x9a\x84\xe7\xa7\x92\n" },
#endif
		{ "CompactNodeTitle", "GetTimeStamp" },
		{ "DisplayName", "GetTimeStamp" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e""2000\xe5\xb9\xb4\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe6\x97\xb6\xe9\x97\xb4\xe7\x9a\x84\xe7\xa7\x92" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTime;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::NewProp_InputTime = { "InputTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetTimeStamp_Parms, InputTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTime_MetaData), NewProp_InputTime_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetTimeStamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::NewProp_InputTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "GetTimeStamp", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::NetworkFunctionLibrary_eventGetTimeStamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::NetworkFunctionLibrary_eventGetTimeStamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execGetTimeStamp)
{
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InputTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UNetworkFunctionLibrary::GetTimeStamp(Z_Param_Out_InputTime);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function GetTimeStamp

// Begin Class UNetworkFunctionLibrary Function GetTimestampFromDate
struct Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics
{
	struct NetworkFunctionLibrary_eventGetTimestampFromDate_Parms
	{
		FString DateString;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8b\x86\xe5\x88\x86\xe6\x95\xb4\xe6\x95\xb0\n" },
#endif
		{ "CompactNodeTitle", "GetTimestampFromDate" },
		{ "DisplayName", "GetTimestampFromDate" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\x86\xe5\x88\x86\xe6\x95\xb4\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DateString;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::NewProp_DateString = { "DateString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetTimestampFromDate_Parms, DateString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventGetTimestampFromDate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::NewProp_DateString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "GetTimestampFromDate", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::NetworkFunctionLibrary_eventGetTimestampFromDate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::NetworkFunctionLibrary_eventGetTimestampFromDate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execGetTimestampFromDate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DateString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UNetworkFunctionLibrary::GetTimestampFromDate(Z_Param_DateString);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function GetTimestampFromDate

// Begin Class UNetworkFunctionLibrary Function LineWrapping
struct Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics
{
	struct NetworkFunctionLibrary_eventLineWrapping_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Print" },
		{ "CompactNodeTitle", "LineWrapping" },
		{ "DisplayName", "LineWrapping" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventLineWrapping_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "LineWrapping", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::NetworkFunctionLibrary_eventLineWrapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::NetworkFunctionLibrary_eventLineWrapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execLineWrapping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNetworkFunctionLibrary::LineWrapping();
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function LineWrapping

// Begin Class UNetworkFunctionLibrary Function OutputString
struct Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics
{
	struct NetworkFunctionLibrary_eventOutputString_Parms
	{
		FString InString;
		float Duration;
		FLinearColor TextColor;
		bool bPrintToScreen;
		bool bPrintToLog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Development" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "CPP_Default_InString", "Hello" },
		{ "CPP_Default_TextColor", "(R=1.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static void NewProp_bPrintToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
	static void NewProp_bPrintToLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventOutputString_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventOutputString_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventOutputString_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
{
	((NetworkFunctionLibrary_eventOutputString_Parms*)Obj)->bPrintToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetworkFunctionLibrary_eventOutputString_Parms), &Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
{
	((NetworkFunctionLibrary_eventOutputString_Parms*)Obj)->bPrintToLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetworkFunctionLibrary_eventOutputString_Parms), &Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_bPrintToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NewProp_bPrintToLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "OutputString", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NetworkFunctionLibrary_eventOutputString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::NetworkFunctionLibrary_eventOutputString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execOutputString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
	P_GET_UBOOL(Z_Param_bPrintToScreen);
	P_GET_UBOOL(Z_Param_bPrintToLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNetworkFunctionLibrary::OutputString(Z_Param_InString,Z_Param_Duration,Z_Param_TextColor,Z_Param_bPrintToScreen,Z_Param_bPrintToLog);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function OutputString

// Begin Class UNetworkFunctionLibrary Function RequestQuitGame
struct Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics
{
	struct NetworkFunctionLibrary_eventRequestQuitGame_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventRequestQuitGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "RequestQuitGame", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::NetworkFunctionLibrary_eventRequestQuitGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::NetworkFunctionLibrary_eventRequestQuitGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execRequestQuitGame)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNetworkFunctionLibrary::RequestQuitGame(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function RequestQuitGame

// Begin Class UNetworkFunctionLibrary Function SplitInteger
struct Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics
{
	struct NetworkFunctionLibrary_eventSplitInteger_Parms
	{
		int32 InputNumber;
		int32 FirstDigit;
		int32 RemainingNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbd\xac\xe6\x8d\xa2\xe6\x95\xb4\xe6\x95\xb0\n" },
#endif
		{ "CompactNodeTitle", "SplitInteger" },
		{ "DisplayName", "SplitInteger" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbd\xac\xe6\x8d\xa2\xe6\x95\xb4\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstDigit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::NewProp_InputNumber = { "InputNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventSplitInteger_Parms, InputNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::NewProp_FirstDigit = { "FirstDigit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventSplitInteger_Parms, FirstDigit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::NewProp_RemainingNumber = { "RemainingNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkFunctionLibrary_eventSplitInteger_Parms, RemainingNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::NewProp_InputNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::NewProp_FirstDigit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::NewProp_RemainingNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkFunctionLibrary, nullptr, "SplitInteger", nullptr, nullptr, Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::NetworkFunctionLibrary_eventSplitInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::NetworkFunctionLibrary_eventSplitInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkFunctionLibrary::execSplitInteger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InputNumber);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FirstDigit);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RemainingNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNetworkFunctionLibrary::SplitInteger(Z_Param_InputNumber,Z_Param_Out_FirstDigit,Z_Param_Out_RemainingNumber);
	P_NATIVE_END;
}
// End Class UNetworkFunctionLibrary Function SplitInteger

// Begin Class UNetworkFunctionLibrary
void UNetworkFunctionLibrary::StaticRegisterNativesUNetworkFunctionLibrary()
{
	UClass* Class = UNetworkFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckInternetAvailability", &UNetworkFunctionLibrary::execCheckInternetAvailability },
		{ "ConvertedInteger", &UNetworkFunctionLibrary::execConvertedInteger },
		{ "GetCode", &UNetworkFunctionLibrary::execGetCode },
		{ "GetCurrentTimeFromCustomTimestamp", &UNetworkFunctionLibrary::execGetCurrentTimeFromCustomTimestamp },
		{ "GetCustomTimeStamp", &UNetworkFunctionLibrary::execGetCustomTimeStamp },
		{ "GetExpirationTime", &UNetworkFunctionLibrary::execGetExpirationTime },
		{ "GetTimeStamp", &UNetworkFunctionLibrary::execGetTimeStamp },
		{ "GetTimestampFromDate", &UNetworkFunctionLibrary::execGetTimestampFromDate },
		{ "LineWrapping", &UNetworkFunctionLibrary::execLineWrapping },
		{ "OutputString", &UNetworkFunctionLibrary::execOutputString },
		{ "RequestQuitGame", &UNetworkFunctionLibrary::execRequestQuitGame },
		{ "SplitInteger", &UNetworkFunctionLibrary::execSplitInteger },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkFunctionLibrary);
UClass* Z_Construct_UClass_UNetworkFunctionLibrary_NoRegister()
{
	return UNetworkFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNetworkFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Encryption/NetworkFunctionLibrary.h" },
		{ "ModuleRelativePath", "Encryption/NetworkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_CheckInternetAvailability, "CheckInternetAvailability" }, // 729860707
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_ConvertedInteger, "ConvertedInteger" }, // 1286731257
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_GetCode, "GetCode" }, // 3719242712
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_GetCurrentTimeFromCustomTimestamp, "GetCurrentTimeFromCustomTimestamp" }, // 3666023462
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_GetCustomTimeStamp, "GetCustomTimeStamp" }, // 3395267065
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_GetExpirationTime, "GetExpirationTime" }, // 3114375655
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimeStamp, "GetTimeStamp" }, // 275603661
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_GetTimestampFromDate, "GetTimestampFromDate" }, // 1281305060
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_LineWrapping, "LineWrapping" }, // 3547812413
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_OutputString, "OutputString" }, // 2455026146
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_RequestQuitGame, "RequestQuitGame" }, // 1242253263
		{ &Z_Construct_UFunction_UNetworkFunctionLibrary_SplitInteger, "SplitInteger" }, // 1114023988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EncryptionProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkFunctionLibrary_Statics::ClassParams = {
	&UNetworkFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNetworkFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNetworkFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkFunctionLibrary.OuterSingleton;
}
template<> ENCRYPTIONPROJECT_API UClass* StaticClass<UNetworkFunctionLibrary>()
{
	return UNetworkFunctionLibrary::StaticClass();
}
UNetworkFunctionLibrary::UNetworkFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkFunctionLibrary);
UNetworkFunctionLibrary::~UNetworkFunctionLibrary() {}
// End Class UNetworkFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkFunctionLibrary, UNetworkFunctionLibrary::StaticClass, TEXT("UNetworkFunctionLibrary"), &Z_Registration_Info_UClass_UNetworkFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkFunctionLibrary), 3640726528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_2815348113(TEXT("/Script/EncryptionProject"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_NetworkFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
