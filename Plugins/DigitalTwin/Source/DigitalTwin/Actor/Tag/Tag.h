#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigitalTwin/Data/Structure.h"
#include "GameFramework/Actor.h"
#include "Tag.generated.h"


UCLASS()
class DIGITALTWIN_API ATag : public AActor
{
	GENERATED_BODY()

public:
	ATag();
	virtual void Tick(float DeltaTime) override;
	
protected:
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

private:
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="UMG",meta=(AllowPrivateAccess="true"))
	class UWidgetComponent * TagUMG;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo",meta = (DisplayPriority = 0))
	ETagIndex TagIndex = ETagIndex::Default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo",meta = (DisplayPriority = 0))
	FTagInfo TagInfo = FTagInfo();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TagInfo",meta = (DisplayPriority = 0))
	FHouseData HouseData;
	
};
