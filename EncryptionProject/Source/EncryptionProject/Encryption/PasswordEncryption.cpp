// Fill out your copyright notice in the Description page of Project Settings.


#include "PasswordEncryption.h"
#include "Blueprint/UserWidget.h"


APasswordEncryption::APasswordEncryption()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APasswordEncryption::BeginPlay()
{
	Super::BeginPlay();
	if (PasswordClass)
	{
		PasswordInstance = CreateWidget<UUserWidget>(GetWorld(), PasswordClass);
		if (PasswordInstance)
		{
			PasswordInstance->AddToViewport(1000);
		}
	}
}


