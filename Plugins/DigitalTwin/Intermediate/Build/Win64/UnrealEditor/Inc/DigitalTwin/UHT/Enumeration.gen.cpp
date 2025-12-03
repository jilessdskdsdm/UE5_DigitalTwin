// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Data/Enumeration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumeration() {}

// Begin Cross Module References
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_ECameraMode();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EMenuIndex();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_EPawnCamera();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_ETagIndex();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Enum EPawnCamera
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPawnCamera;
static UEnum* EPawnCamera_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPawnCamera.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPawnCamera.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DigitalTwin_EPawnCamera, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("EPawnCamera"));
	}
	return Z_Registration_Info_UEnum_EPawnCamera.OuterSingleton;
}
template<> DIGITALTWIN_API UEnum* StaticEnum<EPawnCamera>()
{
	return EPawnCamera_StaticEnum();
}
struct Z_Construct_UEnum_DigitalTwin_EPawnCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoCamera.DisplayName", "AutoCamera" },
		{ "AutoCamera.Name", "EPawnCamera::AutoCamera" },
		{ "BlueprintType", "true" },
		{ "Camera.DisplayName", "Camera" },
		{ "Camera.Name", "EPawnCamera::Camera" },
		{ "ModuleRelativePath", "Data/Enumeration.h" },
		{ "RoamCamera.DisplayName", "RoamCamera" },
		{ "RoamCamera.Name", "EPawnCamera::RoamCamera" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPawnCamera::Camera", (int64)EPawnCamera::Camera },
		{ "EPawnCamera::RoamCamera", (int64)EPawnCamera::RoamCamera },
		{ "EPawnCamera::AutoCamera", (int64)EPawnCamera::AutoCamera },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DigitalTwin_EPawnCamera_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	"EPawnCamera",
	"EPawnCamera",
	Z_Construct_UEnum_DigitalTwin_EPawnCamera_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_EPawnCamera_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_EPawnCamera_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DigitalTwin_EPawnCamera_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DigitalTwin_EPawnCamera()
{
	if (!Z_Registration_Info_UEnum_EPawnCamera.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPawnCamera.InnerSingleton, Z_Construct_UEnum_DigitalTwin_EPawnCamera_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPawnCamera.InnerSingleton;
}
// End Enum EPawnCamera

// Begin Enum ECameraMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraMode;
static UEnum* ECameraMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DigitalTwin_ECameraMode, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("ECameraMode"));
	}
	return Z_Registration_Info_UEnum_ECameraMode.OuterSingleton;
}
template<> DIGITALTWIN_API UEnum* StaticEnum<ECameraMode>()
{
	return ECameraMode_StaticEnum();
}
struct Z_Construct_UEnum_DigitalTwin_ECameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllMode.DisplayName", "All Mode" },
		{ "AllMode.Name", "ECameraMode::AllMode" },
		{ "AllMode.ToolTip", "\xe5\x90\xaf\xe7\x94\xa8\xe6\x89\x80\xe6\x9c\x89\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe8\xa7\x86\xe8\xa7\x92\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Enumeration.h" },
		{ "NoMode.DisplayName", "No Mode" },
		{ "NoMode.Name", "ECameraMode::NoMode" },
		{ "NoMode.ToolTip", "\xe4\xb8\x8d\xe5\x90\xaf\xe7\x94\xa8\xe4\xbb\xbb\xe4\xbd\x95\xe6\x91\x84\xe5\x83\x8f\xe8\xa7\x86\xe8\xa7\x92\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "OnlyRS.DisplayName", "Only RS" },
		{ "OnlyRS.Name", "ECameraMode::OnlyRS" },
		{ "OnlyRS.ToolTip", "\xe4\xbb\x85\xe5\x90\xaf\xe7\x94\xa8\xe6\x97\x8b\xe8\xbd\xac\xe5\x92\x8c\xe7\xbc\xa9\xe6\x94\xbe" },
		{ "OnlyS.DisplayName", "Only S" },
		{ "OnlyS.Name", "ECameraMode::OnlyS" },
		{ "OnlyS.ToolTip", "\xe4\xbb\x85\xe5\x90\xaf\xe7\x94\xa8\xe7\xbc\xa9\xe6\x94\xbe" },
		{ "OnlyTR.DisplayName", "Only TR" },
		{ "OnlyTR.Name", "ECameraMode::OnlyTR" },
		{ "OnlyTR.ToolTip", "\xe4\xbb\x85\xe5\x90\xaf\xe7\x94\xa8\xe5\xb9\xb3\xe7\xa7\xbb\xe5\x92\x8c\xe6\x97\x8b\xe8\xbd\xac" },
		{ "OnlyTS.DisplayName", "Only TS" },
		{ "OnlyTS.Name", "ECameraMode::OnlyTS" },
		{ "OnlyTS.ToolTip", "\xe4\xbb\x85\xe5\x90\xaf\xe7\x94\xa8\xe5\xb9\xb3\xe7\xa7\xbb\xe5\x92\x8c\xe7\xbc\xa9\xe6\x94\xbe" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraMode::AllMode", (int64)ECameraMode::AllMode },
		{ "ECameraMode::OnlyTR", (int64)ECameraMode::OnlyTR },
		{ "ECameraMode::OnlyTS", (int64)ECameraMode::OnlyTS },
		{ "ECameraMode::OnlyRS", (int64)ECameraMode::OnlyRS },
		{ "ECameraMode::OnlyS", (int64)ECameraMode::OnlyS },
		{ "ECameraMode::NoMode", (int64)ECameraMode::NoMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DigitalTwin_ECameraMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	"ECameraMode",
	"ECameraMode",
	Z_Construct_UEnum_DigitalTwin_ECameraMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_ECameraMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_ECameraMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DigitalTwin_ECameraMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DigitalTwin_ECameraMode()
{
	if (!Z_Registration_Info_UEnum_ECameraMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraMode.InnerSingleton, Z_Construct_UEnum_DigitalTwin_ECameraMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraMode.InnerSingleton;
}
// End Enum ECameraMode

// Begin Enum EMenuLayoutDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMenuLayoutDirection;
static UEnum* EMenuLayoutDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMenuLayoutDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMenuLayoutDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("EMenuLayoutDirection"));
	}
	return Z_Registration_Info_UEnum_EMenuLayoutDirection.OuterSingleton;
}
template<> DIGITALTWIN_API UEnum* StaticEnum<EMenuLayoutDirection>()
{
	return EMenuLayoutDirection_StaticEnum();
}
struct Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomToTop.DisplayName", "BottomToTop" },
		{ "BottomToTop.Name", "EMenuLayoutDirection::BottomToTop" },
		{ "LeftToRight.DisplayName", "LeftToRight" },
		{ "LeftToRight.Name", "EMenuLayoutDirection::LeftToRight" },
		{ "ModuleRelativePath", "Data/Enumeration.h" },
		{ "RightToLeft.DisplayName", "RightToLeft" },
		{ "RightToLeft.Name", "EMenuLayoutDirection::RightToLeft" },
		{ "TopToBottom.DisplayName", "TopToBottom" },
		{ "TopToBottom.Name", "EMenuLayoutDirection::TopToBottom" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMenuLayoutDirection::TopToBottom", (int64)EMenuLayoutDirection::TopToBottom },
		{ "EMenuLayoutDirection::BottomToTop", (int64)EMenuLayoutDirection::BottomToTop },
		{ "EMenuLayoutDirection::LeftToRight", (int64)EMenuLayoutDirection::LeftToRight },
		{ "EMenuLayoutDirection::RightToLeft", (int64)EMenuLayoutDirection::RightToLeft },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	"EMenuLayoutDirection",
	"EMenuLayoutDirection",
	Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection()
{
	if (!Z_Registration_Info_UEnum_EMenuLayoutDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMenuLayoutDirection.InnerSingleton, Z_Construct_UEnum_DigitalTwin_EMenuLayoutDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMenuLayoutDirection.InnerSingleton;
}
// End Enum EMenuLayoutDirection

// Begin Enum EMenuIndex
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMenuIndex;
static UEnum* EMenuIndex_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMenuIndex.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMenuIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DigitalTwin_EMenuIndex, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("EMenuIndex"));
	}
	return Z_Registration_Info_UEnum_EMenuIndex.OuterSingleton;
}
template<> DIGITALTWIN_API UEnum* StaticEnum<EMenuIndex>()
{
	return EMenuIndex_StaticEnum();
}
struct Z_Construct_UEnum_DigitalTwin_EMenuIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FiveMenu.DisplayName", "\xe4\xba\x94\xe7\xba\xa7\xe8\x8f\x9c\xe5\x8d\x95" },
		{ "FiveMenu.Name", "EMenuIndex::FiveMenu" },
		{ "FourMenu.DisplayName", "\xe5\x9b\x9b\xe7\xba\xa7\xe8\x8f\x9c\xe5\x8d\x95" },
		{ "FourMenu.Name", "EMenuIndex::FourMenu" },
		{ "ModuleRelativePath", "Data/Enumeration.h" },
		{ "OneMenu.DisplayName", "\xe4\xb8\x80\xe7\xba\xa7\xe8\x8f\x9c\xe5\x8d\x95" },
		{ "OneMenu.Name", "EMenuIndex::OneMenu" },
		{ "SixMenu.DisplayName", "\xe5\x85\xad\xe7\xba\xa7\xe8\x8f\x9c\xe5\x8d\x95" },
		{ "SixMenu.Name", "EMenuIndex::SixMenu" },
		{ "ThreeMenu.DisplayName", "\xe4\xb8\x89\xe7\xba\xa7\xe8\x8f\x9c\xe5\x8d\x95" },
		{ "ThreeMenu.Name", "EMenuIndex::ThreeMenu" },
		{ "TwoMenu.DisplayName", "\xe4\xba\x8c\xe7\xba\xa7\xe8\x8f\x9c\xe5\x8d\x95" },
		{ "TwoMenu.Name", "EMenuIndex::TwoMenu" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMenuIndex::OneMenu", (int64)EMenuIndex::OneMenu },
		{ "EMenuIndex::TwoMenu", (int64)EMenuIndex::TwoMenu },
		{ "EMenuIndex::ThreeMenu", (int64)EMenuIndex::ThreeMenu },
		{ "EMenuIndex::FourMenu", (int64)EMenuIndex::FourMenu },
		{ "EMenuIndex::FiveMenu", (int64)EMenuIndex::FiveMenu },
		{ "EMenuIndex::SixMenu", (int64)EMenuIndex::SixMenu },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DigitalTwin_EMenuIndex_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	"EMenuIndex",
	"EMenuIndex",
	Z_Construct_UEnum_DigitalTwin_EMenuIndex_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_EMenuIndex_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_EMenuIndex_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DigitalTwin_EMenuIndex_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DigitalTwin_EMenuIndex()
{
	if (!Z_Registration_Info_UEnum_EMenuIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMenuIndex.InnerSingleton, Z_Construct_UEnum_DigitalTwin_EMenuIndex_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMenuIndex.InnerSingleton;
}
// End Enum EMenuIndex

// Begin Enum ETagIndex
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETagIndex;
static UEnum* ETagIndex_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETagIndex.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETagIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DigitalTwin_ETagIndex, (UObject*)Z_Construct_UPackage__Script_DigitalTwin(), TEXT("ETagIndex"));
	}
	return Z_Registration_Info_UEnum_ETagIndex.OuterSingleton;
}
template<> DIGITALTWIN_API UEnum* StaticEnum<ETagIndex>()
{
	return ETagIndex_StaticEnum();
}
struct Z_Construct_UEnum_DigitalTwin_ETagIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "ETagIndex::Default" },
		{ "Horizontal.DisplayName", "Horizontal" },
		{ "Horizontal.Name", "ETagIndex::Horizontal" },
		{ "ModuleRelativePath", "Data/Enumeration.h" },
		{ "Vertical.DisplayName", "Vertical" },
		{ "Vertical.Name", "ETagIndex::Vertical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETagIndex::Default", (int64)ETagIndex::Default },
		{ "ETagIndex::Horizontal", (int64)ETagIndex::Horizontal },
		{ "ETagIndex::Vertical", (int64)ETagIndex::Vertical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DigitalTwin_ETagIndex_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DigitalTwin,
	nullptr,
	"ETagIndex",
	"ETagIndex",
	Z_Construct_UEnum_DigitalTwin_ETagIndex_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_ETagIndex_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DigitalTwin_ETagIndex_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DigitalTwin_ETagIndex_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DigitalTwin_ETagIndex()
{
	if (!Z_Registration_Info_UEnum_ETagIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETagIndex.InnerSingleton, Z_Construct_UEnum_DigitalTwin_ETagIndex_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETagIndex.InnerSingleton;
}
// End Enum ETagIndex

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Enumeration_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPawnCamera_StaticEnum, TEXT("EPawnCamera"), &Z_Registration_Info_UEnum_EPawnCamera, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 728610254U) },
		{ ECameraMode_StaticEnum, TEXT("ECameraMode"), &Z_Registration_Info_UEnum_ECameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2390512701U) },
		{ EMenuLayoutDirection_StaticEnum, TEXT("EMenuLayoutDirection"), &Z_Registration_Info_UEnum_EMenuLayoutDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3584208971U) },
		{ EMenuIndex_StaticEnum, TEXT("EMenuIndex"), &Z_Registration_Info_UEnum_EMenuIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2482169467U) },
		{ ETagIndex_StaticEnum, TEXT("ETagIndex"), &Z_Registration_Info_UEnum_ETagIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3631409147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Enumeration_h_3923766303(TEXT("/Script/DigitalTwin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Enumeration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Enumeration_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
