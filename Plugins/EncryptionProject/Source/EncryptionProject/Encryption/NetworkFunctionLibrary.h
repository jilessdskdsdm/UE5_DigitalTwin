// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NetworkFunctionLibrary.generated.h"

/**
 * 
 */


DECLARE_DYNAMIC_DELEGATE_OneParam(FOnNetworkChecked, bool, bHasInternet);

UCLASS()
class ENCRYPTIONPROJECT_API UNetworkFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Print",meta = (DisplayName = "LineWrapping", CompactNodeTitle = "LineWrapping"))
	static FString LineWrapping();//换行
	UFUNCTION(BlueprintCallable, Category="Network")
	static void CheckInternetAvailability(const FOnNetworkChecked& Callback); // 是否联网
	
	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Encryption",meta = (DisplayName = "GetCustomTimeStamp", CompactNodeTitle = "GetCustomTimeStamp"))
	static int64 GetCustomTimeStamp();//从2000年到本地时间的秒

	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Encryption",meta = (DisplayName = "GetTimeStamp", CompactNodeTitle = "GetTimeStamp"))
	static int64 GetTimeStamp(const FDateTime& InputTime);//从2000年到本地时间的秒
	
	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Encryption",meta = (DisplayName = "GetCurrentTimeFromCustomTimestamp", CompactNodeTitle = "GetCurrentTimeFromCustomTimestamp"))
	static FString GetCurrentTimeFromCustomTimestamp(int64 CustomTimeStamp); //从自定义时间戳获取当前时间

	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Encryption",meta = (DisplayName = "GetExpirationTime", CompactNodeTitle = "GetExpirationTime"))
	static FString GetExpirationTime(FString CurrentTime, int32 DaysToAdd);

	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Encryption",meta = (DisplayName = "ConvertedInteger", CompactNodeTitle = "ConvertedInteger"))
	static int64 ConvertedInteger( FString Converted); //转换整数

	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Encryption",meta = (DisplayName = "SplitInteger", CompactNodeTitle = "SplitInteger"))
	static void SplitInteger(int32 InputNumber, int32& FirstDigit, int32& RemainingNumber); //拆分整数

	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Encryption",meta = (DisplayName = "GetTimestampFromDate", CompactNodeTitle = "GetTimestampFromDate"))
	static int64 GetTimestampFromDate(FString DateString);//转换时间戳

	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "Date Functions")
	static FString GetCode(FString ID, int64 ExpirationDays,const FDateTime& Date);
	
	UFUNCTION(BlueprintCallable, meta=( Keywords = "log print", AdvancedDisplay = "3", DevelopmentOnly), Category="Development")
	static void OutputString(const FString& InString = FString(TEXT("Hello")),  float Duration = 5.f, FLinearColor TextColor = FLinearColor(1.f, 1.f, 0.f, 1.f),bool bPrintToScreen = true, bool bPrintToLog = true);

	UFUNCTION(BlueprintCallable, Category = "Network", meta = (WorldContext = "WorldContextObject"))
	static void RequestQuitGame(UObject* WorldContextObject);
};
