// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Enumeration.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIGITALTWIN_Enumeration_generated_h
#error "Enumeration.generated.h already included, missing '#pragma once' in Enumeration.h"
#endif
#define DIGITALTWIN_Enumeration_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_TestPlugins_Plugins_DigitalTwin_Source_DigitalTwin_Data_Enumeration_h


#define FOREACH_ENUM_EPAWNCAMERA(op) \
	op(EPawnCamera::Camera) \
	op(EPawnCamera::RoamCamera) \
	op(EPawnCamera::AutoCamera) 

enum class EPawnCamera : uint8;
template<> struct TIsUEnumClass<EPawnCamera> { enum { Value = true }; };
template<> DIGITALTWIN_API UEnum* StaticEnum<EPawnCamera>();

#define FOREACH_ENUM_ECAMERAMODE(op) \
	op(ECameraMode::AllMode) \
	op(ECameraMode::OnlyTR) \
	op(ECameraMode::OnlyTS) \
	op(ECameraMode::OnlyRS) \
	op(ECameraMode::OnlyS) \
	op(ECameraMode::NoMode) 

enum class ECameraMode : uint8;
template<> struct TIsUEnumClass<ECameraMode> { enum { Value = true }; };
template<> DIGITALTWIN_API UEnum* StaticEnum<ECameraMode>();

#define FOREACH_ENUM_EMENULAYOUTDIRECTION(op) \
	op(EMenuLayoutDirection::TopToBottom) \
	op(EMenuLayoutDirection::BottomToTop) \
	op(EMenuLayoutDirection::LeftToRight) \
	op(EMenuLayoutDirection::RightToLeft) 

enum class EMenuLayoutDirection : uint8;
template<> struct TIsUEnumClass<EMenuLayoutDirection> { enum { Value = true }; };
template<> DIGITALTWIN_API UEnum* StaticEnum<EMenuLayoutDirection>();

#define FOREACH_ENUM_EMENUINDEX(op) \
	op(EMenuIndex::OneMenu) \
	op(EMenuIndex::TwoMenu) \
	op(EMenuIndex::ThreeMenu) \
	op(EMenuIndex::FourMenu) \
	op(EMenuIndex::FiveMenu) \
	op(EMenuIndex::SixMenu) 

enum class EMenuIndex : uint8;
template<> struct TIsUEnumClass<EMenuIndex> { enum { Value = true }; };
template<> DIGITALTWIN_API UEnum* StaticEnum<EMenuIndex>();

#define FOREACH_ENUM_ETAGINDEX(op) \
	op(ETagIndex::Default) \
	op(ETagIndex::Horizontal) \
	op(ETagIndex::Vertical) 

enum class ETagIndex : uint8;
template<> struct TIsUEnumClass<ETagIndex> { enum { Value = true }; };
template<> DIGITALTWIN_API UEnum* StaticEnum<ETagIndex>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
