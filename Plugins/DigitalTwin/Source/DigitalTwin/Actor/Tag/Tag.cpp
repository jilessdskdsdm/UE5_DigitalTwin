#include "Tag.h"
#include "Blueprint/UserWidget.h"
#include "Components/WidgetComponent.h"

ATag::ATag()
{
	PrimaryActorTick.bCanEverTick = true;
	TagUMG = CreateDefaultSubobject<UWidgetComponent>(TEXT("TagUMG"));
	TagUMG->SetupAttachment(RootComponent);
	TagUMG->SetDrawAtDesiredSize(true);
	TagUMG->SetUsingAbsoluteScale(false);
	TagUMG->SetWidgetSpace(EWidgetSpace::Screen);
}

void ATag::BeginPlay()
{
	Super::BeginPlay();
	Tags.Add(TagInfo.TagName);
	TagUMG->SetPivot(TagInfo.IconPivot);
}

void ATag::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
}

void ATag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


