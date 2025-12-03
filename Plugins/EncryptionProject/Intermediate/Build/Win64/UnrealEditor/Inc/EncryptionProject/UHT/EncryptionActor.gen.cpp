// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EncryptionProject/Encryption/EncryptionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEncryptionActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_AEncryptionActor();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_AEncryptionActor_NoRegister();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_APasswordEncryption_NoRegister();
ENCRYPTIONPROJECT_API UClass* Z_Construct_UClass_UProjectSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_EncryptionProject();
// End Cross Module References

// Begin Class AEncryptionActor Function AddAuthCode
struct Z_Construct_UFunction_AEncryptionActor_AddAuthCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Date Functions" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEncryptionActor_AddAuthCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEncryptionActor, nullptr, "AddAuthCode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEncryptionActor_AddAuthCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEncryptionActor_AddAuthCode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEncryptionActor_AddAuthCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEncryptionActor_AddAuthCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEncryptionActor::execAddAuthCode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAuthCode();
	P_NATIVE_END;
}
// End Class AEncryptionActor Function AddAuthCode

// Begin Class AEncryptionActor Function GetVerificationCode
struct Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics
{
	struct EncryptionActor_eventGetVerificationCode_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Date Functions" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EncryptionActor_eventGetVerificationCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEncryptionActor, nullptr, "GetVerificationCode", nullptr, nullptr, Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::EncryptionActor_eventGetVerificationCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::EncryptionActor_eventGetVerificationCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEncryptionActor_GetVerificationCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEncryptionActor_GetVerificationCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEncryptionActor::execGetVerificationCode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetVerificationCode();
	P_NATIVE_END;
}
// End Class AEncryptionActor Function GetVerificationCode

// Begin Class AEncryptionActor Function NetworkChecked
struct Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics
{
	struct EncryptionActor_eventNetworkChecked_Parms
	{
		bool IsNetwork;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsNetwork_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNetwork;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::NewProp_IsNetwork_SetBit(void* Obj)
{
	((EncryptionActor_eventNetworkChecked_Parms*)Obj)->IsNetwork = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::NewProp_IsNetwork = { "IsNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EncryptionActor_eventNetworkChecked_Parms), &Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::NewProp_IsNetwork_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::NewProp_IsNetwork,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEncryptionActor, nullptr, "NetworkChecked", nullptr, nullptr, Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::EncryptionActor_eventNetworkChecked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::EncryptionActor_eventNetworkChecked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEncryptionActor_NetworkChecked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEncryptionActor_NetworkChecked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEncryptionActor::execNetworkChecked)
{
	P_GET_UBOOL(Z_Param_IsNetwork);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetworkChecked(Z_Param_IsNetwork);
	P_NATIVE_END;
}
// End Class AEncryptionActor Function NetworkChecked

// Begin Class AEncryptionActor Function TickFunction
struct Z_Construct_UFunction_AEncryptionActor_TickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEncryptionActor_TickFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEncryptionActor, nullptr, "TickFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEncryptionActor_TickFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEncryptionActor_TickFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEncryptionActor_TickFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEncryptionActor_TickFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEncryptionActor::execTickFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TickFunction();
	P_NATIVE_END;
}
// End Class AEncryptionActor Function TickFunction

// Begin Class AEncryptionActor
void AEncryptionActor::StaticRegisterNativesAEncryptionActor()
{
	UClass* Class = AEncryptionActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAuthCode", &AEncryptionActor::execAddAuthCode },
		{ "GetVerificationCode", &AEncryptionActor::execGetVerificationCode },
		{ "NetworkChecked", &AEncryptionActor::execNetworkChecked },
		{ "TickFunction", &AEncryptionActor::execTickFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEncryptionActor);
UClass* Z_Construct_UClass_AEncryptionActor_NoRegister()
{
	return AEncryptionActor::StaticClass();
}
struct Z_Construct_UClass_AEncryptionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Encryption/EncryptionActor.h" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonName_MetaData[] = {
		{ "Category", "ProjectData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectID_MetaData[] = {
		{ "Category", "ProjectData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationDays_MetaData[] = {
		{ "Category", "ProjectData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "ProjectData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationTime_MetaData[] = {
		{ "Category", "ProjectData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ProjectData" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PasswordEncryptionClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ProjectData" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProSaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SGEnter_MetaData[] = {
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SGExitLoadingTime_MetaData[] = {
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNetwork_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Network" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PasswordEncryption_MetaData[] = {
		{ "ModuleRelativePath", "Encryption/EncryptionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpirationDays;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpirationTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PasswordEncryptionClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProSaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SGEnter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SGExitLoadingTime;
	static void NewProp_bIsNetwork_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PasswordEncryption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEncryptionActor_AddAuthCode, "AddAuthCode" }, // 41571598
		{ &Z_Construct_UFunction_AEncryptionActor_GetVerificationCode, "GetVerificationCode" }, // 720898488
		{ &Z_Construct_UFunction_AEncryptionActor_NetworkChecked, "NetworkChecked" }, // 1004639117
		{ &Z_Construct_UFunction_AEncryptionActor_TickFunction, "TickFunction" }, // 981845219
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEncryptionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_JsonName = { "JsonName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, JsonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonName_MetaData), NewProp_JsonName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_ProjectID = { "ProjectID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, ProjectID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectID_MetaData), NewProp_ProjectID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_ExpirationDays = { "ExpirationDays", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, ExpirationDays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationDays_MetaData), NewProp_ExpirationDays_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_ExpirationTime = { "ExpirationTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, ExpirationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationTime_MetaData), NewProp_ExpirationTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_SaveGameInstance = { "SaveGameInstance", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, SaveGameInstance), Z_Construct_UClass_UClass, Z_Construct_UClass_UProjectSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameInstance_MetaData), NewProp_SaveGameInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_PasswordEncryptionClass = { "PasswordEncryptionClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, PasswordEncryptionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APasswordEncryption_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PasswordEncryptionClass_MetaData), NewProp_PasswordEncryptionClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_ProSaveGame = { "ProSaveGame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, ProSaveGame), Z_Construct_UClass_UProjectSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProSaveGame_MetaData), NewProp_ProSaveGame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_SGEnter = { "SGEnter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, SGEnter), Z_Construct_UClass_UProjectSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SGEnter_MetaData), NewProp_SGEnter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_SGExitLoadingTime = { "SGExitLoadingTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, SGExitLoadingTime), Z_Construct_UClass_UProjectSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SGExitLoadingTime_MetaData), NewProp_SGExitLoadingTime_MetaData) };
void Z_Construct_UClass_AEncryptionActor_Statics::NewProp_bIsNetwork_SetBit(void* Obj)
{
	((AEncryptionActor*)Obj)->bIsNetwork = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_bIsNetwork = { "bIsNetwork", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEncryptionActor), &Z_Construct_UClass_AEncryptionActor_Statics::NewProp_bIsNetwork_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNetwork_MetaData), NewProp_bIsNetwork_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEncryptionActor_Statics::NewProp_PasswordEncryption = { "PasswordEncryption", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncryptionActor, PasswordEncryption), Z_Construct_UClass_APasswordEncryption_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PasswordEncryption_MetaData), NewProp_PasswordEncryption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEncryptionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_JsonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_ProjectID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_ExpirationDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_ExpirationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_SaveGameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_PasswordEncryptionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_ProSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_SGEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_SGExitLoadingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_bIsNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncryptionActor_Statics::NewProp_PasswordEncryption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEncryptionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEncryptionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EncryptionProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEncryptionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEncryptionActor_Statics::ClassParams = {
	&AEncryptionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEncryptionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEncryptionActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEncryptionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AEncryptionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEncryptionActor()
{
	if (!Z_Registration_Info_UClass_AEncryptionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEncryptionActor.OuterSingleton, Z_Construct_UClass_AEncryptionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEncryptionActor.OuterSingleton;
}
template<> ENCRYPTIONPROJECT_API UClass* StaticClass<AEncryptionActor>()
{
	return AEncryptionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEncryptionActor);
AEncryptionActor::~AEncryptionActor() {}
// End Class AEncryptionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEncryptionActor, AEncryptionActor::StaticClass, TEXT("AEncryptionActor"), &Z_Registration_Info_UClass_AEncryptionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEncryptionActor), 2168486916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_4214125779(TEXT("/Script/EncryptionProject"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_EncryptionProject_Source_EncryptionProject_Encryption_EncryptionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
