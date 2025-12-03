// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PasswordEncryption.generated.h"

UCLASS()
class ENCRYPTIONPROJECT_API APasswordEncryption : public AActor
{
	GENERATED_BODY()

public:
	APasswordEncryption();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectData", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> PasswordClass;
	
	UPROPERTY()
	UUserWidget* PasswordInstance = nullptr;

public:
	UPROPERTY()
	FString Password = "";

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "PasswordData", meta = (DisplayPriority = -1))
	FString EnterPassword = "";
};
