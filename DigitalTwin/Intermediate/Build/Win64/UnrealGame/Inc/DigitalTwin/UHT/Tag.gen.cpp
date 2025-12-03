// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/Tag/Tag.h"
#include "DigitalTwin/Data/Structure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTag() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_ATag();
DIGITALTWIN_API UClass* Z_Construct_UClass_ATag_NoRegister();
DIGITALTWIN_API UEnum* Z_Construct_UEnum_DigitalTwin_ETagIndex();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FHouseData();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FTagInfo();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class ATag
void ATag::StaticRegisterNativesATag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATag);
UClass* Z_Construct_UClass_ATag_NoRegister()
{
	return ATag::StaticClass();
}
struct Z_Construct_UClass_ATag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/Tag/Tag.h" },
		{ "ModuleRelativePath", "Actor/Tag/Tag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagUMG_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UMG" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Tag/Tag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagIndex_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/Tag/Tag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagInfo_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/Tag/Tag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseData_MetaData[] = {
		{ "Category", "TagInfo" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Actor/Tag/Tag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagUMG;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TagIndex_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TagIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HouseData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATag_Statics::NewProp_TagUMG = { "TagUMG", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATag, TagUMG), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagUMG_MetaData), NewProp_TagUMG_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATag_Statics::NewProp_TagIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATag_Statics::NewProp_TagIndex = { "TagIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATag, TagIndex), Z_Construct_UEnum_DigitalTwin_ETagIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagIndex_MetaData), NewProp_TagIndex_MetaData) }; // 3631409147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATag_Statics::NewProp_TagInfo = { "TagInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATag, TagInfo), Z_Construct_UScriptStruct_FTagInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagInfo_MetaData), NewProp_TagInfo_MetaData) }; // 2571573736
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATag_Statics::NewProp_HouseData = { "HouseData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATag, HouseData), Z_Construct_UScriptStruct_FHouseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseData_MetaData), NewProp_HouseData_MetaData) }; // 1703076476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATag_Statics::NewProp_TagUMG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATag_Statics::NewProp_TagIndex_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATag_Statics::NewProp_TagIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATag_Statics::NewProp_TagInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATag_Statics::NewProp_HouseData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATag_Statics::ClassParams = {
	&ATag::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATag_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATag_Statics::Class_MetaDataParams), Z_Construct_UClass_ATag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATag()
{
	if (!Z_Registration_Info_UClass_ATag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATag.OuterSingleton, Z_Construct_UClass_ATag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATag.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<ATag>()
{
	return ATag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATag);
ATag::~ATag() {}
// End Class ATag

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Tag_Tag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATag, ATag::StaticClass, TEXT("ATag"), &Z_Registration_Info_UClass_ATag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATag), 1169903701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Tag_Tag_h_2216126824(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Tag_Tag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Tag_Tag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
