// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeBar.h"

#include "Components/Slider.h"
#include "Components/TextBlock.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

void UTimeBar::NativeConstruct()
{
	Super::NativeConstruct();
}

void UTimeBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}


void UTimeBar::UpdateTimeBar(float TimeOfDay)
{
	if (!S_TimeBar || !T_CurrentTime)return;
	S_TimeBar->SetValue(TimeOfDay);
	//T_CurrentTime->SetText(FText::FromString(UFunctionLibrary::TimeConversion(TimeOfDay)));
}

FString UTimeBar::GetCompassDirection()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	APawn* MyPawn = PC ? PC->GetPawn() : nullptr;
	float Yaw = MyPawn->GetActorRotation().Yaw;
	Yaw = FMath::Fmod(Yaw + 360.f, 360.f); // 转换到 0-360°

	if (Yaw >= 337.5f || Yaw < 22.5f)   return TEXT("N");
	if (Yaw >= 22.5f  && Yaw < 67.5f)   return TEXT("NE");
	if (Yaw >= 67.5f  && Yaw < 112.5f)  return TEXT("E");
	if (Yaw >= 112.5f && Yaw < 157.5f)  return TEXT("SE");
	if (Yaw >= 157.5f && Yaw < 202.5f)  return TEXT("S");
	if (Yaw >= 202.5f && Yaw < 247.5f)  return TEXT("SW");
	if (Yaw >= 247.5f && Yaw < 292.5f)  return TEXT("W");
	if (Yaw >= 292.5f && Yaw < 337.5f)  return TEXT("NW");
	return TEXT("");
}

void UTimeBar::SetGameTime(const float& Value, float& Time)
{
	if (!S_TimeBar) return;
	
	float RoundedValue = FMath::RoundToFloat(Value * 2.f) / 2.f;
	
	RoundedValue = FMath::Clamp(RoundedValue, 1.0f, 24.0f);
	
	int32 Hours = FMath::FloorToInt(RoundedValue);
	float Minute = (FMath::IsNearlyEqual(RoundedValue - Hours, 0.5f)) ? 0.5 : 0;
	Time = Hours+Minute;
}
