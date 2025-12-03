// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/Actor/Camera/AutoCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoCamera() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_AAutoCamera();
DIGITALTWIN_API UClass* Z_Construct_UClass_AAutoCamera_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class AAutoCamera
void AAutoCamera::StaticRegisterNativesAAutoCamera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoCamera);
UClass* Z_Construct_UClass_AAutoCamera_NoRegister()
{
	return AAutoCamera::StaticClass();
}
struct Z_Construct_UClass_AAutoCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actor/Camera/AutoCamera.h" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCameraIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTurn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TurnLook_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_LeftKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_RightKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAssignedIndex_MetaData[] = {
		{ "ModuleRelativePath", "Actor/Camera/AutoCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoCameraIndex;
	static void NewProp_bIsTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTurn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TurnLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_LeftKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_RightKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static void NewProp_bHasAssignedIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAssignedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoCamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_AutoCameraIndex = { "AutoCameraIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoCamera, AutoCameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCameraIndex_MetaData), NewProp_AutoCameraIndex_MetaData) };
void Z_Construct_UClass_AAutoCamera_Statics::NewProp_bIsTurn_SetBit(void* Obj)
{
	((AAutoCamera*)Obj)->bIsTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_bIsTurn = { "bIsTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoCamera), &Z_Construct_UClass_AAutoCamera_Statics::NewProp_bIsTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTurn_MetaData), NewProp_bIsTurn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoCamera, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_IA_TurnLook = { "IA_TurnLook", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoCamera, IA_TurnLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TurnLook_MetaData), NewProp_IA_TurnLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_IA_LeftKey = { "IA_LeftKey", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoCamera, IA_LeftKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_LeftKey_MetaData), NewProp_IA_LeftKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_IA_RightKey = { "IA_RightKey", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoCamera, IA_RightKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_RightKey_MetaData), NewProp_IA_RightKey_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoCamera, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
void Z_Construct_UClass_AAutoCamera_Statics::NewProp_bHasAssignedIndex_SetBit(void* Obj)
{
	((AAutoCamera*)Obj)->bHasAssignedIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoCamera_Statics::NewProp_bHasAssignedIndex = { "bHasAssignedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoCamera), &Z_Construct_UClass_AAutoCamera_Statics::NewProp_bHasAssignedIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAssignedIndex_MetaData), NewProp_bHasAssignedIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_AutoCameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_bIsTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_IA_TurnLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_IA_LeftKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_IA_RightKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoCamera_Statics::NewProp_bHasAssignedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoCamera_Statics::ClassParams = {
	&AAutoCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAutoCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoCamera()
{
	if (!Z_Registration_Info_UClass_AAutoCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoCamera.OuterSingleton, Z_Construct_UClass_AAutoCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoCamera.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<AAutoCamera>()
{
	return AAutoCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoCamera);
AAutoCamera::~AAutoCamera() {}
// End Class AAutoCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_AutoCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoCamera, AAutoCamera::StaticClass, TEXT("AAutoCamera"), &Z_Registration_Info_UClass_AAutoCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoCamera), 3110223230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_AutoCamera_h_2769648676(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_AutoCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Actor_Camera_AutoCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
