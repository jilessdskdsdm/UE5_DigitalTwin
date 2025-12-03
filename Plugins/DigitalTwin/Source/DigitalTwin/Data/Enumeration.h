// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Enumeration.generated.h"

UENUM(BlueprintType) 
enum class EPawnCamera : uint8
{
	Camera        UMETA(DisplayName = "Camera"),
	RoamCamera    UMETA(DisplayName = "RoamCamera"),
	AutoCamera    UMETA(DisplayName = "AutoCamera"),
};

UENUM(BlueprintType) 
enum class ECameraMode : uint8
{
	AllMode      UMETA(DisplayName = "All Mode", ToolTip = "启用所有摄像机视角模式"),
	OnlyTR       UMETA(DisplayName = "Only TR", ToolTip = "仅启用平移和旋转"),
	OnlyTS       UMETA(DisplayName = "Only TS", ToolTip = "仅启用平移和缩放"),
	OnlyRS       UMETA(DisplayName = "Only RS", ToolTip = "仅启用旋转和缩放"),
	OnlyS        UMETA(DisplayName = "Only S", ToolTip = "仅启用缩放"),
	NoMode       UMETA(DisplayName = "No Mode", ToolTip = "不启用任何摄像视角模式"),
};

UENUM(BlueprintType)
enum class EMenuLayoutDirection : uint8
{
	TopToBottom     UMETA(DisplayName = "TopToBottom"),
	BottomToTop     UMETA(DisplayName = "BottomToTop"),
	LeftToRight     UMETA(DisplayName = "LeftToRight"),
	RightToLeft     UMETA(DisplayName = "RightToLeft")
};

UENUM(BlueprintType)
enum class EMenuIndex : uint8
{
	OneMenu      UMETA(DisplayName = "一级菜单"),
	TwoMenu      UMETA(DisplayName = "二级菜单"),
	ThreeMenu    UMETA(DisplayName = "三级菜单"),
	FourMenu     UMETA(DisplayName = "四级菜单"),
	FiveMenu     UMETA(DisplayName = "五级菜单"),
	SixMenu      UMETA(DisplayName = "六级菜单")
};
UENUM(BlueprintType)
enum class ETagIndex : uint8
{
	 Default    UMETA(DisplayName = "Default"),
	 Horizontal    UMETA(DisplayName = "Horizontal"),
	 Vertical    UMETA(DisplayName = "Vertical"),
};