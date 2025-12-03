// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkFunctionLibrary.h"

#include "EncryptionActor.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UNetworkFunctionLibrary::CheckInternetAvailability(const FOnNetworkChecked& Callback)
{
	if (!Callback.IsBound())return;

	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(TEXT("https://www.google.com"));
	Request->SetVerb(TEXT("GET"));
	Request->OnProcessRequestComplete().BindLambda([Callback](FHttpRequestPtr Req, FHttpResponsePtr Response, bool bWasSuccessful)
	{
		bool bAvailable = bWasSuccessful && Response.IsValid() && Response->GetResponseCode() == 200;
		Callback.ExecuteIfBound(bAvailable);
		UE_LOG(LogTemp, Log, TEXT("网络可访问: %s"), bAvailable ? TEXT("✅") : TEXT("❌"));
	});
	Request->ProcessRequest();
}

FString UNetworkFunctionLibrary::LineWrapping()
{
	return FString(TEXT("\n"));
}

int64 UNetworkFunctionLibrary::GetCustomTimeStamp()
{
	// 获取当前的时间（不包括小时、分钟、秒）
	FDateTime CurrentTime = FDateTime::Now();
    
	// 创建基准时间（2000年1月1日 00:00:00）
	FDateTime BaseTime(2021, 2, 18, 0, 0, 0);

	// 只保留年月日（去掉时间部分）
	FDateTime CurrentDate(CurrentTime.GetYear(), CurrentTime.GetMonth(), CurrentTime.GetDay());

	// 计算两个日期之间的时间差（只考虑年月日）
	FTimespan TimeSpan = CurrentDate - BaseTime;

	// 获取时间差的秒数
	int64 TotalSeconds = TimeSpan.GetTotalSeconds();

	// 返回从 2000年1月1日 00:00:00 到当前时间的总秒数（仅考虑年月日）
	return TotalSeconds;
	
}

int64 UNetworkFunctionLibrary::GetTimeStamp(const FDateTime& InputTime)
{
	// 获取当前的时间（不包括小时、分钟、秒）
	FDateTime CurrentTime = InputTime;
    
	// 创建基准时间（2000年1月1日 00:00:00）
	FDateTime BaseTime(2021, 2, 18, 0, 0, 0);

	// 只保留年月日（去掉时间部分）
	FDateTime CurrentDate(CurrentTime.GetYear(), CurrentTime.GetMonth(), CurrentTime.GetDay());

	// 计算两个日期之间的时间差（只考虑年月日）
	FTimespan TimeSpan = CurrentDate - BaseTime;

	// 获取时间差的秒数
	int64 TotalSeconds = TimeSpan.GetTotalSeconds();

	// 返回从 2000年1月1日 00:00:00 到当前时间的总秒数（仅考虑年月日）
	return TotalSeconds;
	
}

FString UNetworkFunctionLibrary::GetCurrentTimeFromCustomTimestamp(int64 CustomTimeStamp)
{
	// 基准时间 2000年1月1日 00:00:00
	FDateTime BaseTime(2021, 2, 18, 0, 0, 0);

	// 将时间戳转化为 FTimespan 对象
	FTimespan TimeSpan = FTimespan::FromSeconds(CustomTimeStamp);

	// 获取目标时间：基准时间 + 时间差
	FDateTime CurrentTime = BaseTime + TimeSpan;

	// 只返回年、月、日，格式为 YYYY/MM/DD
	return CurrentTime.ToString(TEXT("%Y/%m/%d"));
}

FString UNetworkFunctionLibrary::GetExpirationTime(FString CurrentTime, int32 DaysToAdd)
{
	// 将输入的字符串日期解析为 FDateTime 对象
	int32 Year, Month, Day;
    
	// 使用 ParseIntoArray 来拆分日期字符串
	TArray<FString> DateParts;
	CurrentTime.ParseIntoArray(DateParts, TEXT("/"), true);

	if (DateParts.Num() == 3)
	{
		// 将字符串部分转换为数字
		Year = FCString::Atoi(*DateParts[0]);
		Month = FCString::Atoi(*DateParts[1]);
		Day = FCString::Atoi(*DateParts[2]);

		// 构造 FDateTime 对象
		FDateTime CurrentDate(Year, Month, Day);

		// 将输入的天数转换为 FTimespan（天数转化为秒数）
		FTimespan AddedTimeSpan(DaysToAdd, 0, 0, 0);  // 输入的天数转换为 FTimespan

		// 计算加上输入天数后的日期
		FDateTime ExpirationDate = CurrentDate + AddedTimeSpan;

		// 返回新的日期（年、月、日），格式为 YYYY/MM/DD
		return ExpirationDate.ToString(TEXT("%Y/%m/%d"));
	}
	else
	{
		// 如果解析失败，返回一个错误提示
		return TEXT("Invalid date format");
	}
}

int64 UNetworkFunctionLibrary::ConvertedInteger(FString Converted)
{
	
	int64 result = 0;
	const int64 prime = 31; // 常用素数，减少冲突
	for (int64 i = 0; i < Converted.Len(); i++) 
	{
		result = result * prime + (int64)Converted[i];
	}
	return result;
}

FString UNetworkFunctionLibrary::GetCode(FString ID,int64 ExpirationDays, const FDateTime& Date)
{
	
	int64 IDAndTime= GetTimeStamp(Date) + ConvertedInteger(ID)  ;
	int64 TimeID = (IDAndTime+ConvertedInteger("HYSZ")) + ExpirationDays;
	FString Pas = FString::Printf(TEXT("%llu"), TimeID);
	if (Pas.Len() > 6) {
		Pas = Pas.Right(6); // 取后6位字符
	}
	return Pas;
}



void UNetworkFunctionLibrary::SplitInteger(int32 InputNumber, int32& FirstDigit, int32& RemainingNumber)
{
	// 将 int32 转换为 FString
	FString InputString = FString::Printf(TEXT("%d"), InputNumber);

	// 获取最左边的数字（第一个字符）
	FString FirstDigitString = InputString.Left(1);
	FirstDigit = FCString::Atoi(*FirstDigitString);

	// 获取剩余的部分（去掉最左边的数字）
	FString RemainingString = InputString.RightChop(1);
	RemainingNumber = FCString::Atoi(*RemainingString);
}

int64 UNetworkFunctionLibrary::GetTimestampFromDate(FString DateString)
{
	// 创建基准时间（2000年1月1日 00:00:00）
	FDateTime BaseTime(2000, 1, 1, 0, 0, 0);

	// 解析输入的日期字符串
	int32 Year, Month, Day;
    
	// 使用 ParseIntoArray 来拆分日期字符串
	TArray<FString> DateParts;
	DateString.ParseIntoArray(DateParts, TEXT("/"), true);

	if (DateParts.Num() == 3)
	{
		// 将字符串部分转换为数字
		Year = FCString::Atoi(*DateParts[0]);
		Month = FCString::Atoi(*DateParts[1]);
		Day = FCString::Atoi(*DateParts[2]);

		// 创建 FDateTime 对象
		FDateTime InputDate(Year, Month, Day);

		// 计算时间差（从基准时间到输入日期）
		FTimespan TimeSpan = InputDate - BaseTime;

		// 获取时间差的秒数
		return TimeSpan.GetTotalSeconds();
	}
	else
	{
		// 如果输入格式不正确，返回错误代码 0
		return 0;
	}
}


void UNetworkFunctionLibrary::OutputString(const FString& InString, float Duration, FLinearColor TextColor,
                                           bool bPrintToScreen, bool bPrintToLog)
{
	if (GWorld)
	{
		UKismetSystemLibrary::PrintString(GWorld, InString, true, true, TextColor, Duration);
	}
}

void UNetworkFunctionLibrary::RequestQuitGame(UObject* WorldContextObject)
{
	if (!WorldContextObject) return;

	// 获取世界
	UWorld* World = WorldContextObject->GetWorld();
	if (!World) return;

	// 在世界中找到第一个 AEncryptionActor
	AEncryptionActor* TargetActor = Cast<AEncryptionActor>(
		UGameplayStatics::GetActorOfClass(World, AEncryptionActor::StaticClass()));

	if (TargetActor)
	{
		TargetActor->QuitGame();
	}
}

