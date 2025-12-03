// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EncryptionActor.generated.h"

class UProjectSaveGame;
class UVaRestRequestJSON;
class UVaRestSubsystem;
class UVaRestJsonObject;
class APasswordEncryption;


UCLASS()
class ENCRYPTIONPROJECT_API AEncryptionActor : public AActor
{
	GENERATED_BODY()

public:
	AEncryptionActor();
	virtual void Tick(float DeltaTime) override;
	void QuitGame();

protected:
	virtual void BeginPlay() override;


public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "ProjectData", meta = (DisplayPriority = -1))
	FString JsonName = "Project";
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "ProjectData", meta = (DisplayPriority = -1))
	FString ProjectID = "test";
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "ProjectData", meta = (DisplayPriority = -1))
	int32 ExpirationDays = 30;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "ProjectData", meta = (DisplayPriority = -1))
	FString CurrentTime = "2025/09/25";
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "ProjectData", meta = (DisplayPriority = -1))
	FString ExpirationTime = "2025/10/25";

	FString LocalTime = "";

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectData", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UProjectSaveGame> SaveGameInstance;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectData", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<APasswordEncryption> PasswordEncryptionClass;
	UPROPERTY()
	UProjectSaveGame* ProSaveGame = nullptr;
	UPROPERTY()
	UProjectSaveGame* SGEnter = nullptr;
	UPROPERTY()
	UProjectSaveGame* SGExitLoadingTime = nullptr;
	
	UFUNCTION(BlueprintCallable, Category = "Date Functions")
	FString GetVerificationCode() const;

	UFUNCTION(BlueprintCallable, Category = "Date Functions")
	void AddAuthCode();
	
	UFUNCTION()
	void TickFunction();
	bool bHasCalled = false;
private:
	
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Network",meta=(AllowPrivateAccess="true"),meta = (DisplayPriority = 1))
	bool bIsNetwork = false;
	UPROPERTY()
	APasswordEncryption* PasswordEncryption = nullptr;
	UFUNCTION()
	void NetworkChecked(bool IsNetwork);
	
};