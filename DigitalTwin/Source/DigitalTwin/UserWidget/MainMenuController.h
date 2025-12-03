// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainMenuController.generated.h"

UCLASS()
class DIGITALTWIN_API AMainMenuController : public AActor
{
	GENERATED_BODY()

public:
	AMainMenuController();
	virtual void Tick(float DeltaTime) override;
	
protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UMainMenu> MainMenuWidgetClass;

	// 运行时创建的 Widget 实例
	UPROPERTY(BlueprintReadWrite, Category = "UI")
	class UMainMenu* MainMenuInstance = nullptr;
	


	
};
