// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalTwin/UserWidget/Widget/FullScreenVideoPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFullScreenVideoPlayer() {}

// Begin Cross Module References
DIGITALTWIN_API UClass* Z_Construct_UClass_UFullScreenVideoPlayer();
DIGITALTWIN_API UClass* Z_Construct_UClass_UFullScreenVideoPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DigitalTwin();
// End Cross Module References

// Begin Class UFullScreenVideoPlayer Function PlayVideo
struct Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics
{
	struct FullScreenVideoPlayer_eventPlayVideo_Parms
	{
		UMediaSource* MediaSource;
		bool bLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenVideoPlayer" },
		{ "ModuleRelativePath", "UserWidget/Widget/FullScreenVideoPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FullScreenVideoPlayer_eventPlayVideo_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((FullScreenVideoPlayer_eventPlayVideo_Parms*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FullScreenVideoPlayer_eventPlayVideo_Parms), &Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::NewProp_MediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFullScreenVideoPlayer, nullptr, "PlayVideo", nullptr, nullptr, Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::FullScreenVideoPlayer_eventPlayVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::FullScreenVideoPlayer_eventPlayVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFullScreenVideoPlayer::execPlayVideo)
{
	P_GET_OBJECT(UMediaSource,Z_Param_MediaSource);
	P_GET_UBOOL(Z_Param_bLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayVideo(Z_Param_MediaSource,Z_Param_bLoop);
	P_NATIVE_END;
}
// End Class UFullScreenVideoPlayer Function PlayVideo

// Begin Class UFullScreenVideoPlayer
void UFullScreenVideoPlayer::StaticRegisterNativesUFullScreenVideoPlayer()
{
	UClass* Class = UFullScreenVideoPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayVideo", &UFullScreenVideoPlayer::execPlayVideo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFullScreenVideoPlayer);
UClass* Z_Construct_UClass_UFullScreenVideoPlayer_NoRegister()
{
	return UFullScreenVideoPlayer::StaticClass();
}
struct Z_Construct_UClass_UFullScreenVideoPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget/Widget/FullScreenVideoPlayer.h" },
		{ "ModuleRelativePath", "UserWidget/Widget/FullScreenVideoPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/FullScreenVideoPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "UserWidget/Widget/FullScreenVideoPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/FullScreenVideoPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[] = {
		{ "ModuleRelativePath", "UserWidget/Widget/FullScreenVideoPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSoundComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/Widget/FullScreenVideoPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSoundComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFullScreenVideoPlayer_PlayVideo, "PlayVideo" }, // 3771104590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFullScreenVideoPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_VideoImage = { "VideoImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFullScreenVideoPlayer, VideoImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoImage_MetaData), NewProp_VideoImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFullScreenVideoPlayer, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMaterial_MetaData), NewProp_BaseMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFullScreenVideoPlayer, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFullScreenVideoPlayer, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTexture_MetaData), NewProp_MediaTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_MediaSoundComponent = { "MediaSoundComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFullScreenVideoPlayer, MediaSoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSoundComponent_MetaData), NewProp_MediaSoundComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFullScreenVideoPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_VideoImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_BaseMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_MediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_MediaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFullScreenVideoPlayer_Statics::NewProp_MediaSoundComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFullScreenVideoPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFullScreenVideoPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFullScreenVideoPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFullScreenVideoPlayer_Statics::ClassParams = {
	&UFullScreenVideoPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFullScreenVideoPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFullScreenVideoPlayer_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFullScreenVideoPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UFullScreenVideoPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFullScreenVideoPlayer()
{
	if (!Z_Registration_Info_UClass_UFullScreenVideoPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFullScreenVideoPlayer.OuterSingleton, Z_Construct_UClass_UFullScreenVideoPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFullScreenVideoPlayer.OuterSingleton;
}
template<> DIGITALTWIN_API UClass* StaticClass<UFullScreenVideoPlayer>()
{
	return UFullScreenVideoPlayer::StaticClass();
}
UFullScreenVideoPlayer::UFullScreenVideoPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFullScreenVideoPlayer);
UFullScreenVideoPlayer::~UFullScreenVideoPlayer() {}
// End Class UFullScreenVideoPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFullScreenVideoPlayer, UFullScreenVideoPlayer::StaticClass, TEXT("UFullScreenVideoPlayer"), &Z_Registration_Info_UClass_UFullScreenVideoPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFullScreenVideoPlayer), 3213228107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_1662876804(TEXT("/Script/DigitalTwin"),
	Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_UserWidget_Widget_FullScreenVideoPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
