// Fill out your copyright notice in the Description page of Project Settings.
#include "FunctionLibrary.h"

#include "EngineUtils.h"
#include "FileMediaSource.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"
#include "DigitalTwin/Actor/Camera/AutoCamera.h"
#include "DigitalTwin/Actor/Camera/Camera.h"
#include "DigitalTwin/Actor/Camera/SwitchingCamera.h"
#include "DigitalTwin/UserWidget/MainMenuController.h"
#include "DigitalTwin/UserWidget/MainMenu.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/Paths.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Misc/DefaultValueHelper.h"
#include "Misc/OutputDeviceNull.h"
#include "Runtime/LevelSequence/Public/LevelSequenceActor.h"

class ULevelSequencePlayer;
TObjectPtr<UTexture2D> UFunctionLibrary::LastTexture = nullptr;
TObjectPtr<UMediaSource> UFunctionLibrary::LastVideoSource = nullptr;



void UFunctionLibrary::OutputString( const FString& InString, float Duration,FLinearColor TextColor, bool bPrintToScreen, bool bPrintToLog)
{
	if (GWorld)
	{
		UKismetSystemLibrary::PrintString(GWorld, InString, true, true, TextColor, Duration);
	}
}



class ACamera* UFunctionLibrary::GetCamera()
{
	UObject* WorldContextObject = GEngine->GetCurrentPlayWorld();
	if (!WorldContextObject) return nullptr;

	UWorld* World = WorldContextObject->GetWorld();
	if (!World) return nullptr;

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(WorldContextObject, 0);
	if (!PlayerPawn) return nullptr;

	return Cast<ACamera>(PlayerPawn);
}


void UFunctionLibrary::SwitchCamera(const int32 CameraIndex, bool bPlaySound, ASwitchingCamera*& OutCamera)
{
	UWorld* World = GEngine->GetCurrentPlayWorld(); // 仅编辑器/游戏运行时有效，实际项目请传World指针进来更好
	if (!World) return;

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(World, ASwitchingCamera::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		ASwitchingCamera* SwitchCam = Cast<ASwitchingCamera>(Actor);
		if (SwitchCam && GetCamera())
		{
			// 假设 ASwitchingCamera 有一个 int32 类型的成员变量 CameraIndex
			if (SwitchCam->CameraIndex == CameraIndex && IsValid(SwitchCam))
			{
				OutCamera = IsValid(SwitchCam)? SwitchCam : nullptr;
				// 找到匹配的摄像机，做你想做的操作w1
				if (!bPlaySound)
				{
					GetCamera()->PlaySwitchSound();
				}
				GetCamera()->CameraData = SwitchCam->CameraData;
				GetCamera()->SetCameraData(SwitchCam);
				break;
			}
		}
		else
		{
			OutCamera = nullptr;
		}
	}
}

void UFunctionLibrary::SwitchCameraLocation(const int32 CameraIndex, FVector NewPosition, float NewRotationYaw,ASwitchingCamera*& OutCamera)
{
	UWorld* World = GEngine->GetCurrentPlayWorld(); // 仅编辑器/游戏运行时有效，实际项目请传World指针进来更好
	if (!World) return;
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(World, ASwitchingCamera::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		ASwitchingCamera* SwitchCam = Cast<ASwitchingCamera>(Actor);
		if (SwitchCam)
		{
			// 假设 ASwitchingCamera 有一个 int32 类型的成员变量 CameraIndex
			if (SwitchCam->CameraIndex == CameraIndex)
			{
				// 找到匹配的摄像机，做你想做的操作w1
				OutCamera = IsValid(SwitchCam)? SwitchCam : nullptr;
				FTransform NewTransform = SwitchCam->CameraData.CameraTransform;
				//FVector NewLocation = NewTransform.GetLocation() + NewPosition;
				NewTransform.SetLocation(NewPosition);
				FRotator newnewRotation =  FRotator(NewTransform.GetRotation().Rotator().Pitch, NewRotationYaw, NewTransform.GetRotation().Rotator().Roll);
				NewTransform.SetRotation(newnewRotation.Quaternion());
				SwitchCam->CameraData.CameraTransform =  NewTransform;
				GetCamera()->CameraData = SwitchCam->CameraData;
				GetCamera()->SetCameraData(SwitchCam);
				break;
			}
		}
	}
}

void UFunctionLibrary::SwitchPawnControl(EPawnCamera PawnCameraTarget, const int32 CameraIndex,
	const int32 RoamCameraIndex, const int32 AutoCameraIndex,AActor*& OutCamera)
{
	UWorld* World = GEngine->GetCurrentPlayWorld(); // 仅编辑器/游戏运行时有效，实际项目请传World指针进来更好
	if (!World) return;

	APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
	if (!PC) return;
	if (PawnCameraTarget == EPawnCamera::Camera)
	{
		for (TActorIterator<ACamera> It(World); It;	++It)
		{
			if (It)
			{
				PC->Possess(*It);
				ASwitchingCamera* Camera = nullptr;
				SwitchCamera(CameraIndex,true,Camera);
				OutCamera = Camera;
				break;
			}
		}
	}
	else if (PawnCameraTarget == EPawnCamera::RoamCamera)
	{
		// 切换到 RoamCamera
		for (TActorIterator<ARoamCamera> It(World); It; ++It)
		{
			if (It->RoamCameraIndex == RoamCameraIndex)
			{
				PC->Possess(*It);
				OutCamera = *It;
				break;
			}
		}
	}
	else if (PawnCameraTarget == EPawnCamera::AutoCamera)
	{
		// 切换到 RoamCamera
		for (TActorIterator<AAutoCamera> AutoCamera(World); AutoCamera; ++AutoCamera)
		{
			if (AutoCamera->AutoCameraIndex == RoamCameraIndex)
			{
				PC->Possess(*AutoCamera);
				OutCamera = *AutoCamera;
				break;
			}
		}
	}
	
}




void UFunctionLibrary::SetTimeAndDirection(UObject* WorldContextObject, float TimeOfDay, float SunYaw)
{
	if (!WorldContextObject) return;

	UWorld* World = WorldContextObject->GetWorld();
	if (!World) return;

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(World, AActor::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (Actor->GetName().Contains("BP_SkyControl"))
		{
			FOutputDeviceNull OutputDevice;

			FString Command = FString::Printf(TEXT("SetTimeAndDirection %f %f"), TimeOfDay, SunYaw);

			bool bCalled = Actor->CallFunctionByNameWithArguments(*Command, OutputDevice, nullptr, true);
			
			if (bCalled && GetMainMenu(WorldContextObject) && GetMainMenu(WorldContextObject)->TimeBar)
			{
				GetMainMenu(WorldContextObject)->TimeBar->UpdateTimeBar(TimeOfDay);
			}
			break;
		}
	}
}


FString UFunctionLibrary::TimeConversion(float TimeOfDay)
{
	TimeOfDay = FMath::Fmod(TimeOfDay, 24.f);
	if (TimeOfDay < 0.f)
		TimeOfDay += 24.f;

	int32 Hours = FMath::FloorToInt(TimeOfDay);
	float MinuteFraction = (TimeOfDay - Hours) * 60.f;
	int32 Minutes = FMath::FloorToInt(MinuteFraction);
	//int32 Seconds = FMath::RoundToInt((MinuteFraction - Minutes) * 60.f);

	return FString::Printf(TEXT("%02d:%02d"), Hours, Minutes);
}

UMainMenu* UFunctionLibrary::GetMainMenu(UObject* WorldContextObject)
{
	if (!WorldContextObject) return nullptr;
	
	UWorld* World = WorldContextObject->GetWorld();
	if (!World) return nullptr;

	AMainMenuController* Controller = Cast<AMainMenuController>(
		UGameplayStatics::GetActorOfClass(World, AMainMenuController::StaticClass()));

	if (Controller && Controller->MainMenuInstance)
	{
		return Controller->MainMenuInstance;
	}

	return nullptr;
}

void UFunctionLibrary::SetTagActorShow(UObject* WorldContextObject, FName TagName, bool bIsShow,TArray<AActor*>& OutActors)
{
	if (!WorldContextObject) return;
	UWorld* World = WorldContextObject->GetWorld();
	if (!World) return;
	UGameplayStatics::GetAllActorsWithTag(World, TagName, OutActors);
	if (OutActors.IsEmpty())return;
	for (AActor* Actor : OutActors)
	{
		if (!Actor)return;
		Actor->SetActorHiddenInGame(!bIsShow);
	}
	
}





UTexture2D* UFunctionLibrary::GetNumberedTexture(const FString& FolderPath,int32 Index, bool& bIsLastTexture)
{
	bIsLastTexture = false;

	FString Path = FPaths::ProjectContentDir() / FolderPath;
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.DirectoryExists(*Path))
	{
		bIsLastTexture = true; // 返回的是缓存纹理
		return LastTexture;
	}

	TArray<FString> Files;
	class FImageVisitor : public IPlatformFile::FDirectoryVisitor
	{
	public:
		TArray<FString>& FileArray;
		FImageVisitor(TArray<FString>& InArray) : FileArray(InArray) {}
		virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
		{
			if (!bIsDirectory)
			{
				FString Ext = FPaths::GetExtension(FilenameOrDirectory).ToLower();
				if (Ext == TEXT("png") || Ext == TEXT("jpg") || Ext == TEXT("jpeg"))
				{
					FileArray.Add(FString(FilenameOrDirectory));
				}
			}
			return true;
		}
	};

	FImageVisitor Visitor(Files);
	PlatformFile.IterateDirectory(*Path, Visitor);

	Files.Sort([](const FString& A, const FString& B)
	{
		int32 NumA = 0, NumB = 0;
		FDefaultValueHelper::ParseInt(FPaths::GetBaseFilename(A), NumA);
		FDefaultValueHelper::ParseInt(FPaths::GetBaseFilename(B), NumB);
		return NumA < NumB;
	});

	if (Files.IsValidIndex(Index - 1))
	{
		FString FilePath = Files[Index - 1];
		UTexture2D* NewTexture = LoadTextureFromFile(FilePath);
		if (NewTexture)
		{
			LastTexture = NewTexture;
			return LastTexture;
		}
		else
		{
			bIsLastTexture = true; // 加载失败，返回缓存
			return LastTexture;
		}
	}

	// 索引无效，返回缓存
	bIsLastTexture = true;
	return LastTexture;
}

UTexture2D* UFunctionLibrary::LoadTextureFromFile(const FString& FullFilePath)
{
	if (!FPaths::FileExists(FullFilePath))
		return nullptr;

	TArray<uint8> FileData;
	if (!FFileHelper::LoadFileToArray(FileData, *FullFilePath))
		return nullptr;

	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));

	EImageFormat Format = EImageFormat::PNG;
	FString Ext = FPaths::GetExtension(FullFilePath).ToLower();
	if (Ext == "jpg" || Ext == "jpeg") Format = EImageFormat::JPEG;

	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(Format);

	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(FileData.GetData(), FileData.Num()))
	{
		TArray<uint8> RawData;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, RawData))
		{
			UTexture2D* Texture = UTexture2D::CreateTransient(
				ImageWrapper->GetWidth(),
				ImageWrapper->GetHeight(),
				PF_B8G8R8A8
			);

			if (!Texture) return nullptr;

			void* TextureData = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, RawData.GetData(), RawData.Num());
			Texture->GetPlatformData()->Mips[0].BulkData.Unlock();

			Texture->UpdateResource();
			return Texture;
		}
	}

	return nullptr;
}

UMediaSource* UFunctionLibrary::GetNumberedVideo(const FString& FolderPath, int32 Index, bool& bIsLastVideo)
{
	bIsLastVideo = false;

	FString Path = FPaths::ProjectContentDir() / FolderPath;
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.DirectoryExists(*Path))
	{
		bIsLastVideo = true;
		return LastVideoSource;
	}

	TArray<FString> Files;
	class FVideoVisitor : public IPlatformFile::FDirectoryVisitor
	{
	public:
		TArray<FString>& FileArray;
		FVideoVisitor(TArray<FString>& InArray) : FileArray(InArray) {}
		virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
		{
			if (!bIsDirectory)
			{
				FString Ext = FPaths::GetExtension(FilenameOrDirectory).ToLower();
				if (Ext == TEXT("mp4") || Ext == TEXT("avi") || Ext == TEXT("mov") || Ext == TEXT("wmv") || Ext == TEXT("mkv"))
				{
					FileArray.Add(FString(FilenameOrDirectory));
				}
			}
			return true;
		}
	};

	FVideoVisitor Visitor(Files);
	PlatformFile.IterateDirectory(*Path, Visitor);

	Files.Sort([](const FString& A, const FString& B)
	{
		int32 NumA = 0, NumB = 0;
		FDefaultValueHelper::ParseInt(FPaths::GetBaseFilename(A), NumA);
		FDefaultValueHelper::ParseInt(FPaths::GetBaseFilename(B), NumB);
		return NumA < NumB;
	});

	if (Files.IsValidIndex(Index - 1))
	{
		FString VideoPath = Files[Index - 1];

		UFileMediaSource* MediaSource = NewObject<UFileMediaSource>();
		MediaSource->FilePath = VideoPath;

		if (MediaSource)
		{
			LastVideoSource = MediaSource;
			return MediaSource;
		}
	}

	// 索引无效或加载失败
	bIsLastVideo = true;
	return LastVideoSource;
}

void UFunctionLibrary::SetPostProcessType(APostProcessVolume* TargetPostProcessVolume, bool bEnablePostProcess,
	ETranslucencyType TranslucencyType)
{
	if (!TargetPostProcessVolume)return;
	TargetPostProcessVolume->bEnabled = bEnablePostProcess;
	if (TargetPostProcessVolume->bEnabled)
	{
		TargetPostProcessVolume->Settings.TranslucencyType = TranslucencyType;
	}
}


bool UFunctionLibrary::IsNoInputForFiveMinutes(float Time)
{
	static double LastInputTime = 0.0;
    static FVector2D LastMousePos = FVector2D::ZeroVector;

    UWorld* World = GEngine ? GEngine->GetCurrentPlayWorld() : nullptr;
    if (!World) return false;

    APlayerController* PC = World->GetFirstPlayerController();
    if (!PC) return false;

    const double Now = World->GetTimeSeconds();

    if (LastInputTime == 0.0)
        LastInputTime = Now;

    // -----------------------------
    // 1. 任意键盘按下 或 松开
    // -----------------------------
    if (PC->WasInputKeyJustPressed(EKeys::AnyKey) ||
        PC->WasInputKeyJustReleased(EKeys::AnyKey))
    {
        LastInputTime = Now;
        return false;
    }

    // -----------------------------
    // 2. 鼠标移动（不按键也检测）
    // -----------------------------
    FVector2D CurrentMousePos;
    if (PC->GetMousePosition(CurrentMousePos.X, CurrentMousePos.Y))
    {
        if (!CurrentMousePos.Equals(LastMousePos, 0.1f))  // 0.1 容差
        {
            LastMousePos = CurrentMousePos;
            LastInputTime = Now;
            return false;
        }
    }

    // -----------------------------
    // 3. 鼠标滚轮
    // -----------------------------
    float Wheel = PC->GetInputAnalogKeyState(EKeys::MouseWheelAxis);
    if (FMath::Abs(Wheel) > 0)
    {
        LastInputTime = Now;
        return false;
    }

    // -----------------------------
    // 4. 鼠标按键
    // -----------------------------
    static const TArray<FKey> MouseKeys = {
        EKeys::LeftMouseButton,
        EKeys::RightMouseButton,
        EKeys::MiddleMouseButton,
        EKeys::ThumbMouseButton,
        EKeys::ThumbMouseButton2
    };

    for (const FKey& Key : MouseKeys)
    {
        if (PC->IsInputKeyDown(Key))
        {
            LastInputTime = Now;
            return false;
        }
    }

    // -----------------------------
    // 5. 触摸（Touch0~Touch9）
    // -----------------------------
    for (int i = 0; i < 10; i++)
    {
        FKey TouchKey(*FString::Printf(TEXT("Touch%d"), i));
        if (PC->IsInputKeyDown(TouchKey))
        {
            LastInputTime = Now;
            return false;
        }
    }

    // -----------------------------
    // 6. 手柄移动 / 按键
    // -----------------------------
    TArray<FKey> Keys;
    EKeys::GetAllKeys(Keys);

    for (const FKey& Key : Keys)
    {
        if (Key.IsGamepadKey())
        {
            if (PC->IsInputKeyDown(Key) ||
                FMath::Abs(PC->GetInputAnalogKeyState(Key)) > 0.1f)
            {
                LastInputTime = Now;
                return false;
            }
        }
    }

    // -----------------------------
    // 7. 五分钟无输入
    // -----------------------------
    return (Now - LastInputTime) > Time;
}

void UFunctionLibrary::SetSequenceProgress(ALevelSequenceActor* SequenceActor, float NormalizedValue)
{
	if (!SequenceActor)return;

	ULevelSequencePlayer* Player = SequenceActor->GetSequencePlayer();
	if (!Player)return;

	Player->Pause();

	ULevelSequence* Sequence = SequenceActor->GetSequence();
	if (!Sequence || !Sequence->GetMovieScene()) return;
		
	// 限制在 0~1
	NormalizedValue = FMath::Clamp(NormalizedValue, 0.f, 1.f);

	UMovieScene* MovieScene = Sequence->GetMovieScene();
	FFrameRate TickRate = MovieScene->GetTickResolution();

	// 获取总帧数
	int32 StartFrame = MovieScene->GetPlaybackRange().GetLowerBoundValue().Value;
	int32 EndFrame   = MovieScene->GetPlaybackRange().GetUpperBoundValue().Value;
	int32 TotalFrames = EndFrame - StartFrame;

	// 计算目标帧
	int32 TargetFrame = StartFrame + FMath::RoundToInt(TotalFrames * NormalizedValue);

	// 转成秒数
	float TargetTime = TargetFrame / TickRate.AsDecimal();

	// 跳转到目标时间
	Player->SetPlaybackPosition(FMovieSceneSequencePlaybackParams(TargetTime, EUpdatePositionMethod::Jump));
}


float UFunctionLibrary::GetSequenceProgress(ALevelSequenceActor* SequenceActor)
{
	if (!SequenceActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("SequenceActor is nullptr"));
		return 0.f;
	}

	ULevelSequencePlayer* Player = SequenceActor->GetSequencePlayer();
	if (!Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("LevelSequencePlayer is nullptr"));
		return 0.f;
	}

	ULevelSequence* Sequence = SequenceActor->GetSequence();
	if (!Sequence || !Sequence->GetMovieScene())
	{
		UE_LOG(LogTemp, Warning, TEXT("Sequence or MovieScene is nullptr"));
		return 0.f;
	}

	UMovieScene* MovieScene = Sequence->GetMovieScene();
	FFrameRate TickRate = MovieScene->GetTickResolution();

	// 获取总帧数
	int32 StartFrame = MovieScene->GetPlaybackRange().GetLowerBoundValue().Value;
	int32 EndFrame   = MovieScene->GetPlaybackRange().GetUpperBoundValue().Value;
	int32 TotalFrames = EndFrame - StartFrame;

	if (TotalFrames <= 0)
		return 0.f;

	// 获取当前帧
	float CurrentTime = Player->GetCurrentTime().AsSeconds();
	float StartTime = StartFrame / TickRate.AsDecimal();
	float EndTime   = EndFrame / TickRate.AsDecimal();

	// 计算归一化进度
	float Progress = (CurrentTime - StartTime) / (EndTime - StartTime);
	return FMath::Clamp(Progress, 0.f, 1.f);
}