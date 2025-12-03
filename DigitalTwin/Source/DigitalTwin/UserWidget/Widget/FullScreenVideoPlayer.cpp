#include "FullScreenVideoPlayer.h"
#include "Components/Image.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Texture.h"

void UFullScreenVideoPlayer::NativeConstruct()
{
    Super::NativeConstruct();

    MediaPlayer = NewObject<UMediaPlayer>(this);
    MediaTexture = nullptr;
    MediaSoundComponent = nullptr;
}

void UFullScreenVideoPlayer::PlayVideo(UMediaSource* MediaSource, bool bLoop)
{
    if (!VideoImage || !MediaSource || !BaseMaterial || !MediaPlayer) return;

    bIsLooping = bLoop;

    // 创建 MediaTexture
    MediaTexture = NewObject<UMediaTexture>(this);
    MediaTexture->SetMediaPlayer(MediaPlayer);
    MediaTexture->UpdateResource();

    // ✅ 设置优化参数
    MediaTexture->AddressX = TA_Clamp;
    MediaTexture->AddressY = TA_Clamp;
    MediaTexture->AutoClear = false;
    MediaTexture->EnableGenMips = false;

    // 创建动态材质
    UMaterialInstanceDynamic* DynMat = UMaterialInstanceDynamic::Create(BaseMaterial, this);
    DynMat->SetTextureParameterValue(FName("T_Video"), MediaTexture);

    // 设置 UI Image 显示材质
    FSlateBrush Brush;
    Brush.SetResourceObject(DynMat);
    Brush.ImageSize = FVector2D(1920, 1080); // 或 MediaTexture->GetSurfaceWidth()...
    VideoImage->SetBrush(Brush);

    // 设置驱动播放的声音组件（让 MediaPlayer 有 Tick）
    if (!MediaSoundComponent)
    {
        MediaSoundComponent = NewObject<UMediaSoundComponent>(this);
        MediaSoundComponent->SetMediaPlayer(MediaPlayer);
        MediaSoundComponent->RegisterComponent();
    }

    if (!MediaPlayer->OpenSource(MediaSource))
    {
        UE_LOG(LogTemp, Error, TEXT("❌ 视频打开失败！"));
        return;
    }

    MediaPlayer->Play();
}

void UFullScreenVideoPlayer::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    if (bIsLooping && MediaPlayer && !MediaPlayer->IsPlaying())
    {
        MediaPlayer->Rewind();
        MediaPlayer->Play();
    }
}
