// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "MediaPlayer.h"
#include "DigitalTwin/UserWidget/MainMenu.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunctionLibrary.generated.h"

class ASwitchingCamera;
UCLASS()
class DIGITALTWIN_API UFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Camera",meta = (DisplayName = "GetCamera", CompactNodeTitle = "MainCamera"))
	static class ACamera* GetCamera();
	
	UFUNCTION(BlueprintCallable,Category = "Camera")
	static void SwitchCamera(const int32 CameraIndex,bool bPlaySound ,ASwitchingCamera*& OutCamera);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	static void SwitchCameraLocation(const int32 CameraIndex,FVector NewPosition,  float NewRotationYaw, ASwitchingCamera*& OutCamera);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	static void SwitchPawnControl(EPawnCamera PawnCameraTarget,const int32 CameraIndex,const int32 RoamCameraIndex,const int32 AutoCameraIndex, AActor*& OutCamera);
	
	UFUNCTION(BlueprintCallable, Category = "UltraDynamicSky", meta = (WorldContext = "WorldContextObject"))
	static void SetTimeAndDirection(UObject* WorldContextObject, float TimeOfDay, float SunYaw);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Time")
	static FString TimeConversion(float TimeOfDay);	
	
	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "UMG", meta = (DisplayName = "GetMainMenu", CompactNodeTitle = "MainMenu", Keywords = "GetMainMenu", WorldContext = "WorldContextObject"))
	static UMainMenu* GetMainMenu(UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable,Category = "ActorTag", meta = (WorldContext = "WorldContextObject"))
	static void SetTagActorShow(UObject* WorldContextObject,FName TagName,bool bIsShow,TArray<AActor*>& TagActors);
	
	UFUNCTION(BlueprintCallable, meta=( Keywords = "log print", AdvancedDisplay = "3", DevelopmentOnly), Category="Development")
	static void OutputString(const FString& InString = FString(TEXT("Hello")),  float Duration = 5.f, FLinearColor TextColor = FLinearColor(1.0f, 0.66f, 1.0f),bool bPrintToScreen = true, bool bPrintToLog = true);

	
	UFUNCTION(BlueprintCallable, Category="File|Image")
	static UTexture2D* GetNumberedTexture(const FString& FolderPath, int32 Index,bool& bIsLastTexture);

	static UTexture2D* LoadTextureFromFile(const FString& FullFilePath);
	
	static TObjectPtr<UTexture2D> LastTexture;

	
	static TObjectPtr<UMediaSource> LastVideoSource;
	
	UFUNCTION(BlueprintCallable, Category="File|Video")
	static UMediaSource* GetNumberedVideo(const FString& FolderPath, int32 Index, bool& bIsLastVideo);

	UFUNCTION(BlueprintCallable, Category="PostProcess")
	static void SetPostProcessType(APostProcessVolume* TargetPostProcessVolume = nullptr, bool bEnablePostProcess =	true,
		ETranslucencyType TranslucencyType = ETranslucencyType::Raster);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Input")
	static bool IsNoInputForFiveMinutes(float Time);


	UFUNCTION(BlueprintCallable, Category="Sequence")
	static void SetSequenceProgress(class ALevelSequenceActor* SequenceActor, float NormalizedValue);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Sequence")
	static float GetSequenceProgress(ALevelSequenceActor* SequenceActor);
};



//💻⚙️📘🖥️🧠🪄🚀🎯🧰🧱📂📡📊📐📏💾💿📀🪛🧬🧮🕹️💥🧑‍💻👨‍💻
//👾🤖💡🌟🔭🔬🔍🧭🧷📎📋
//📁📄📜🧾📙📗📒📓📚💬🗂️📈📉🗜️📦🧱🧲⚡💢🌀🧯🚨🚧🏗️🔨🔒🔑🪫🔋
//📚🧠📊✨
//🌟💫
//😎✨🎮🎨🧩💡🔥🌟🕹️🐉🧠🚀💻🎧🎬🎯🏆🎆💥🪄👾🎭🧱🎈🎵💫🌀🧰🎁🔮🎡💬💥🪶🔔🔦📡🌈🐱‍👤


//📷🎤📽️⚙️🔧🖱️🧩🎮🔩

