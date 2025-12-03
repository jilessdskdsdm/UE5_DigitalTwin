// Fill out your copyright notice in the Description page of Project Settings.
#include "EncryptionActor.h"
#include "NetworkFunctionLibrary.h"
#include "PasswordEncryption.h"
#include "ProjectSaveGame.h"
#include "Kismet/GameplayStatics.h"

AEncryptionActor::AEncryptionActor()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FClassFinder<USaveGame> SaveGameBPClass(
       TEXT("/EncryptionProject/BP_SavePassword")
   );

    if (SaveGameBPClass.Succeeded())
    {
        SaveGameInstance = SaveGameBPClass.Class;
    }
}

void AEncryptionActor::BeginPlay()
{
    Super::BeginPlay();
    FOnNetworkChecked OnNetworkChecked;
    OnNetworkChecked.BindUFunction(this, FName("NetworkChecked"));
    UNetworkFunctionLibrary::CheckInternetAvailability(OnNetworkChecked);
    
    if (!SaveGameInstance)return;
    
    SGExitLoadingTime = Cast<UProjectSaveGame>(UGameplayStatics::CreateSaveGameObject(SaveGameInstance));
    if (SGExitLoadingTime)
    {
        SGExitLoadingTime->CurrentTime = UNetworkFunctionLibrary::GetCurrentTimeFromCustomTimestamp(
                                                   UNetworkFunctionLibrary::GetCustomTimeStamp());
        UGameplayStatics::SaveGameToSlot(ProSaveGame,"ExitLoadingTime",0);
    }
    
    
    ProSaveGame = Cast<UProjectSaveGame>(UGameplayStatics::LoadGameFromSlot("Initialize", 0));
    
    LocalTime = UNetworkFunctionLibrary::GetCurrentTimeFromCustomTimestamp(
                                                   UNetworkFunctionLibrary::GetCustomTimeStamp());
    if (!ProSaveGame)
    {
        AddAuthCode();
    }
    else if(LocalTime < SGExitLoadingTime->CurrentTime || LocalTime >= ProSaveGame->ExpirationTime)
    {
        AddAuthCode();
    }
    else 
    {
        SGEnter = Cast<UProjectSaveGame>(UGameplayStatics::LoadGameFromSlot("Password", 0));
        if (SGEnter)
        {
            if (SGEnter->Password != ProSaveGame->Password)
            {
                AddAuthCode(); 
            }
        }
        else
        {
            AddAuthCode(); 
        }
    }
    
    
}

void AEncryptionActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (!SaveGameInstance)return;

    SGExitLoadingTime = Cast<UProjectSaveGame>(UGameplayStatics::CreateSaveGameObject(SaveGameInstance));
    if (SGExitLoadingTime)
    {
        SGExitLoadingTime->CurrentTime = UNetworkFunctionLibrary::GetCurrentTimeFromCustomTimestamp(
                                                   UNetworkFunctionLibrary::GetCustomTimeStamp());
        UGameplayStatics::SaveGameToSlot(ProSaveGame,"ExitLoadingTime",0);
    }
    
    LocalTime = UNetworkFunctionLibrary::GetCurrentTimeFromCustomTimestamp(
                                                   UNetworkFunctionLibrary::GetCustomTimeStamp());
   
    if (LocalTime < SGExitLoadingTime->CurrentTime || LocalTime >= ProSaveGame->ExpirationTime)
    {
        if (!bHasCalled)
        {
            bHasCalled = true;
            TickFunction();
        }
    }
    else
    {
        bHasCalled = false;
    }
    UNetworkFunctionLibrary::OutputString(TEXT("本地时间:")+LocalTime,0.f);
    UNetworkFunctionLibrary::OutputString(TEXT("保存时间:")+SGExitLoadingTime->CurrentTime,0.f);
    UNetworkFunctionLibrary::OutputString(TEXT("到期时间:")+ProSaveGame->ExpirationTime,0.f);
    
    FString ist = LocalTime < SGExitLoadingTime->CurrentTime ? "true" : "false" ;
    GEngine->AddOnScreenDebugMessage(-1,0.f,FColor::Yellow,ist);
    
    
}


FString AEncryptionActor::GetVerificationCode() const
{
      return UNetworkFunctionLibrary::GetCode(ProjectID,(int64)ExpirationDays,FDateTime::Now());
}



void AEncryptionActor::AddAuthCode()
{
    ProSaveGame = Cast<UProjectSaveGame>(UGameplayStatics::CreateSaveGameObject(SaveGameInstance));
    ProSaveGame->ProjectName = ProjectID;
    ProSaveGame->Password = GetVerificationCode();
    FString T_Current =  UNetworkFunctionLibrary::GetCurrentTimeFromCustomTimestamp(
                                                   UNetworkFunctionLibrary::GetCustomTimeStamp());
    ProSaveGame-> CurrentTime = T_Current;
    ProSaveGame-> ExpirationTime = UNetworkFunctionLibrary::GetExpirationTime(T_Current,ExpirationDays);

    UGameplayStatics::SaveGameToSlot(ProSaveGame,"Initialize",0);
        
    UWorld* World = GetWorld();
   
    if ( World && PasswordEncryptionClass)
    {
    
        FVector SpawnLocation(100.0f, 200.0f, 300.0f);  // 设置生成位置
        FRotator SpawnRotation(0.0f, 90.0f, 0.0f);  // 设置旋转
        
        PasswordEncryption = World->SpawnActor<APasswordEncryption>(PasswordEncryptionClass, SpawnLocation, SpawnRotation);
        if (PasswordEncryption)
        {
            PasswordEncryption->Password = ProSaveGame->Password;
        }
    }
}

void AEncryptionActor::TickFunction()
{
    AddAuthCode();
}

void AEncryptionActor::NetworkChecked(bool IsNetwork)
{
    bIsNetwork = IsNetwork;
}



void AEncryptionActor::QuitGame()
{
    if (SGExitLoadingTime)
    {
        SGExitLoadingTime->CurrentTime = UNetworkFunctionLibrary::GetCurrentTimeFromCustomTimestamp(
                                                   UNetworkFunctionLibrary::GetCustomTimeStamp());
        UGameplayStatics::SaveGameToSlot(ProSaveGame,"ExitLoadingTime",0);
    }
    
    // 获取当前世界和玩家控制器
    UWorld* World = GetWorld();
    if (World)
    {
        APlayerController* PlayerController = World->GetFirstPlayerController();

        // 调用 QuitGame 来退出
        UKismetSystemLibrary::QuitGame(World, PlayerController, EQuitPreference::Quit, false);
    }
}