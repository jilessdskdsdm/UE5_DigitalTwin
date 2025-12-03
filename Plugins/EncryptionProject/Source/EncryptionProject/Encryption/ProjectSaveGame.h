// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ProjectSaveGame.generated.h"


UCLASS()
class ENCRYPTIONPROJECT_API UProjectSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "SaveData")
	FString ProjectName = "";
	UPROPERTY(BlueprintReadOnly, Category = "SaveData")
	FString CurrentTime = "";
	UPROPERTY(BlueprintReadOnly, Category = "SaveData")
	FString ExpirationTime = "";
	UPROPERTY(BlueprintReadWrite, Category = "SaveData")
	FString Password = "";
};
