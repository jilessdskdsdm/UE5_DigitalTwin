#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MediaPlayer.h"
#include "MediaTexture.h"
#include "MediaSource.h"
#include "MediaSoundComponent.h"
#include "Components/Image.h"
#include "FullScreenVideoPlayer.generated.h"

UCLASS()
class DIGITALTWIN_API UFullScreenVideoPlayer : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "FullScreenVideoPlayer")
	void PlayVideo(UMediaSource* MediaSource, bool bLoop);

protected:
	UPROPERTY(meta = (BindWidget))
	UImage* VideoImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video")
	UMaterialInterface* BaseMaterial;

private:
	UPROPERTY()
	UMediaPlayer* MediaPlayer;

	UPROPERTY()
	UMediaTexture* MediaTexture;

	UPROPERTY()
	UMediaSoundComponent* MediaSoundComponent;

	bool bIsLooping = false;
};
