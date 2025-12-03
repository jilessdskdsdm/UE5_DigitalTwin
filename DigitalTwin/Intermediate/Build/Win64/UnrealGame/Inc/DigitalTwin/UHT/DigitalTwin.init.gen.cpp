// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDigitalTwin_init() {}
	DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature();
	DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature();
	DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature();
	DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature();
	DIGITALTWIN_API UFunction* Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DigitalTwin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DigitalTwin()
	{
		if (!Z_Registration_Info_UPackage__Script_DigitalTwin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DigitalTwin_OnHouseButtonClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DigitalTwin_OnLayerButtonClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonAgainClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DigitalTwin_OnMenuButtonClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DigitalTwin_OnMinMapButtonClicked__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DigitalTwin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDC102861,
				0x194EC140,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DigitalTwin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DigitalTwin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DigitalTwin(Z_Construct_UPackage__Script_DigitalTwin, TEXT("/Script/DigitalTwin"), Z_Registration_Info_UPackage__Script_DigitalTwin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDC102861, 0x194EC140));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
