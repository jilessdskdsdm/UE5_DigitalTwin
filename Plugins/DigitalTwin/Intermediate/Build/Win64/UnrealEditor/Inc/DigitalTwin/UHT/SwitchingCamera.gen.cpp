// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/Camera/SwitchingCamera.h"
#include "DigitalTwin/Data/Structure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchingCamera() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_ASwitchingCamera();
DIGITALTWIN_API UClass* Z_Construct_UClass_ASwitchingCamera_NoRegister();
DIGITALTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FCameraData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class ASwitchingCamera
void ASwitchingCamera::StaticRegisterNativesASwitchingCamera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASwitchingCamera);
UClass* Z_Construct_UClass_ASwitchingCamera_NoRegister()
{
	return ASwitchingCamera::StaticClass();
}
struct Z_Construct_UClass_ASwitchingCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/Camera/SwitchingCamera.h" },
		{ "ModuleRelativePath", "Actor/Camera/SwitchingCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Camera/SwitchingCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Camera/SwitchingCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraIndex_MetaData[] = {
		{ "Category", "\xf0\x9f\x93\xb7""CameraData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Actor/Camera/SwitchingCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAssignedIndex_MetaData[] = {
		{ "ModuleRelativePath", "Actor/Camera/SwitchingCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[] = {
		{ "Category", "\xf0\x9f\x93\xb7""CameraData" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Actor/Camera/SwitchingCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CameraIndex;
	static void NewProp_bHasAssignedIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAssignedIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwitchingCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwitchingCamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwitchingCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_CameraIndex = { "CameraIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwitchingCamera, CameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraIndex_MetaData), NewProp_CameraIndex_MetaData) };
void Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_bHasAssignedIndex_SetBit(void* Obj)
{
	((ASwitchingCamera*)Obj)->bHasAssignedIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_bHasAssignedIndex = { "bHasAssignedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASwitchingCamera), &Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_bHasAssignedIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAssignedIndex_MetaData), NewProp_bHasAssignedIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwitchingCamera, CameraData), Z_Construct_UScriptStruct_FCameraData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraData_MetaData), NewProp_CameraData_MetaData) }; // 819173481
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwitchingCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_CameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_bHasAssignedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchingCamera_Statics::NewProp_CameraData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchingCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASwitchingCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchingCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwitchingCamera_Statics::ClassParams = {
	&ASwitchingCamera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASwitchingCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchingCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchingCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ASwitchingCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASwitchingCamera()
{
	if (!Z_Registration_Info_UClass_ASwitchingCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwitchingCamera.OuterSingleton, Z_Construct_UClass_ASwitchingCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASwitchingCamera.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<ASwitchingCamera>()
{
	return ASwitchingCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASwitchingCamera);
ASwitchingCamera::~ASwitchingCamera() {}
// End Class ASwitchingCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_SwitchingCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASwitchingCamera, ASwitchingCamera::StaticClass, TEXT("ASwitchingCamera"), &Z_Registration_Info_UClass_ASwitchingCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwitchingCamera), 3176890885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_SwitchingCamera_h_1815767074(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_SwitchingCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_SwitchingCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
