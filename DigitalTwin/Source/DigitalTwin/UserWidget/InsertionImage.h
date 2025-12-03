#pragma once

#include "CoreMinimal.h"
#include "Components/Image.h"
#include "InsertionImage.generated.h"

UCLASS()
class DIGITALTWIN_API UInsertionImage : public UImage
{
	GENERATED_BODY()
	
public:
	UInsertionImage();
	virtual void SynchronizeProperties() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	float ScaleZoom = 1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	TObjectPtr<UTexture2D> Image = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	TObjectPtr<UObject> DynamicImage = nullptr;
	
	UFUNCTION(BlueprintCallable, Category = "Image")
	void SetImageData(UTexture2D* NewImage,UObject* NewDynamicImage,float NewZoom = 1.0f);
	
	UFUNCTION(BlueprintCallable, Category = "Image")
	void UpdateImageDisplay();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};
