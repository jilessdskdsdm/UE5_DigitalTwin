#include "MainMenuButton.h"
#include "Components/Button.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/TextBlock.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


void UMainMenuButton::NativeConstruct()
{
    Super::NativeConstruct();

    if (MMButton)
    {
        MMButton->OnClicked.AddDynamic(this, &UMainMenuButton::HandleButtonClick);
    }
    if (Name)
    {
        Name->SetText(FText::FromString(ButtonStyle.Name));
    }
    UpdateButtonDisplay();
}

void UMainMenuButton::NativePreConstruct()
{
    Super::NativePreConstruct();
    UpdateButtonDisplay();
}


void UMainMenuButton::SetupButton(FString LevelName, const FButtonStyles& Style)
{
    MenuLevelName = LevelName;
    ButtonStyle = Style;

    if (Name)
    {
        Name->SetText(FText::FromString(ButtonStyle.Name));
    }
    UpdateButtonDisplay();
}

void UMainMenuButton::SetSelected(bool bSelected)
{
    if (bIsSelected == bSelected)return;

    bIsSelected = bSelected;
    UpdateButtonDisplay();
}

void UMainMenuButton::HandleButtonClick()
{
    if (!bIsSelected)
    {
        OnButtonClicked.Broadcast(this, MenuLevelName);
    }
    else
    {
        OnButtonAgainClicked.Broadcast(this, MenuLevelName);
    }
}

void UMainMenuButton::UpdateButtonDisplay()
{
    bool bIsValid = ButtonStyle.bIsShowName ? (!IsValid(MMButton) || !IsValid(Name)) : !IsValid(MMButton);
    if (bIsValid) return;
    if (!bIsEnableDynamicImage)
    {
        
        // Lambda：安全创建 SlateBrush
        auto CreateBrushSafe = [](UTexture2D* Texture, float Scale, FLinearColor Tint = FLinearColor::White) -> FSlateBrush
        {
            FSlateBrush Brush;
            if (IsValid(Texture))
            {
                Brush.SetResourceObject(Texture);
                Brush.ImageSize = FVector2D(Texture->GetSizeX(), Texture->GetSizeY()) * Scale;
                Brush.TintColor = Tint;
                Brush.DrawAs = ESlateBrushDrawType::Image;
            }
            else
            {
                Brush.ImageSize = FVector2D(64.f, 64.f);
                Brush.TintColor = Tint;
                Brush.DrawAs = ESlateBrushDrawType::Box;
            }
            return Brush;
        };

        // 根据选中状态决定颜色
        FLinearColor TargetColor = ButtonStyle.bEnablePressedChangeImage
          ? FLinearColor::White
          : (bIsSelected ? ButtonStyle.PressedColor : FLinearColor::White);


        // 1. 更新按钮样式
        FSlateBrush NormalBrush = CreateBrushSafe
        ((bIsSelected && ButtonStyle.bEnablePressedChangeImage) ?
             ButtonStyle.PressedImage : ButtonStyle.NormalImage,
         ButtonStyle.ScaleZoom,
         TargetColor);

        FButtonStyle NewStyle;
        NewStyle.SetNormal(NormalBrush);
        NewStyle.SetHovered(NormalBrush);
        NewStyle.SetPressed(NormalBrush);
        NewStyle.SetDisabled(NormalBrush);
        FSlateSound NoSound;
        NewStyle.SetPressedSound(bIsSelected ? NoSound : ClickSound);
        MMButton->SetStyle(NewStyle);
    
        // 同步更新文本颜色（如果 Name 有效且需要显示）
        if (ButtonStyle.bIsShowName && IsValid(Name))
        {
            FSlateColor TextColor = ButtonStyle.bEnablePressedChangeImage
                ? FSlateColor(FLinearColor::White)
                : FSlateColor(TargetColor);

            Name->SetColorAndOpacity(TextColor);
        }
    }
    else 
    {
        // 🎯 当前是否处于按下状态
        const bool bPressedState = (bIsSelected && ButtonStyle.bEnablePressedChangeImage);
        UTexture2D* TargetTexture = bPressedState ? ButtonStyle.PressedImage : ButtonStyle.NormalImage;
        UMaterialInterface* TargetMaterial = bPressedState ? PressedMaterial : NormalMaterial;

        // 🎨 按钮颜色逻辑：
        // 👉 如果仅更换图片（bEnablePressedChangeImage = true），保持原始颜色；
        // 👉 否则根据是否选中改变颜色。
        FLinearColor TargetColor = ButtonStyle.bEnablePressedChangeImage
            ? FLinearColor::White
            : (bIsSelected ? ButtonStyle.PressedColor : FLinearColor::White);

        // 🧱 创建动态材质实例
        UMaterialInstanceDynamic* DynamicMat = nullptr;
        if (TargetMaterial)
        {
            DynamicMat = UMaterialInstanceDynamic::Create(TargetMaterial, this);
            if (DynamicMat && TargetTexture)
            {
                DynamicMat->SetTextureParameterValue(FName("T_Image"), TargetTexture);
            }
        }

        // 🧩 构建 FSlateBrush
        FSlateBrush Brush;
        Brush.ImageSize = TargetTexture
            ? FVector2D(TargetTexture->GetSizeX(), TargetTexture->GetSizeY()) * ButtonStyle.ScaleZoom
            : FVector2D(64.f, 64.f);
        Brush.TintColor = TargetColor;
        Brush.DrawAs = ESlateBrushDrawType::Image;
        Brush.SetResourceObject(DynamicMat ? (UObject*)DynamicMat : (UObject*)TargetTexture);

        // 🧩 设置按钮样式
        FButtonStyle NewStyle;
        NewStyle.SetNormal(Brush);
        NewStyle.SetHovered(Brush);
        NewStyle.SetPressed(Brush);
        NewStyle.SetDisabled(Brush);

        // 🔇 5. 点击音效（按下状态不播放）
        FSlateSound NoSound;
        NewStyle.SetPressedSound(bIsSelected ? NoSound : ClickSound);

        MMButton->SetStyle(NewStyle);

        // 📝 更新文本颜色（只有在不是图片切换模式时）
        if (ButtonStyle.bIsShowName && IsValid(Name))
        {
            FSlateColor TextColor = ButtonStyle.bEnablePressedChangeImage
                ? FSlateColor(FLinearColor::White)
                : FSlateColor(TargetColor);

            Name->SetColorAndOpacity(TextColor);
        }
    }
}

void UMainMenuButton::SetShowName()
{
    if (!Name)return;
    Name->SetVisibility(ButtonStyle.bIsShowName ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
}



void UMainMenuButton::UpdateButtonSuspended(bool IsSelected)
{
    bool bIsValid = ButtonStyle.bIsShowName ? (!IsValid(MMButton) || !IsValid(Name)) : !IsValid(MMButton);

    if (!bIsEnableDynamicImage)
    {
        // 检查控件有效性
       if (bIsValid) return;

        // Lambda：安全创建 SlateBrush
        auto CreateBrushSafe = [](UTexture2D* Texture, float Scale, FLinearColor Tint = FLinearColor::White) -> FSlateBrush
        {
            FSlateBrush Brush;
            if (IsValid(Texture))
            {
                Brush.SetResourceObject(Texture);
                Brush.ImageSize = FVector2D(Texture->GetSizeX(), Texture->GetSizeY()) * Scale;
                Brush.TintColor = Tint;
                Brush.DrawAs = ESlateBrushDrawType::Image;
            }
            else
            {
                Brush.ImageSize = FVector2D(64.f, 64.f);
                Brush.TintColor = Tint;
                Brush.DrawAs = ESlateBrushDrawType::Box;
            }
            return Brush;
        };

        // 根据选中状态决定颜色
        FLinearColor TargetColor = ButtonStyle.bEnablePressedChangeImage
          ? FLinearColor::White
          : (IsSelected ? ButtonStyle.PressedColor : FLinearColor::White);


        // 1. 更新按钮样式
        FSlateBrush NormalBrush = CreateBrushSafe
        ((IsSelected && ButtonStyle.bEnablePressedChangeImage) ?
             ButtonStyle.PressedImage : ButtonStyle.NormalImage,
         ButtonStyle.ScaleZoom,
         TargetColor);

        FButtonStyle NewStyle;
        NewStyle.SetNormal(NormalBrush);
        NewStyle.SetHovered(NormalBrush);
        NewStyle.SetPressed(NormalBrush);
        NewStyle.SetDisabled(NormalBrush);
        FSlateSound NoSound;
        NewStyle.SetPressedSound(bIsSelected ? NoSound : ClickSound);
        MMButton->SetStyle(NewStyle);
    
        // 同步更新文本颜色（如果 Name 有效且需要显示）
        if (ButtonStyle.bIsShowName && IsValid(Name))
        {
            FSlateColor TextColor = ButtonStyle.bEnablePressedChangeImage
                ? FSlateColor(FLinearColor::White)
                : FSlateColor(TargetColor);

            Name->SetColorAndOpacity(TextColor);
        }
    }
    else 
    {
        //////👉动态图片
        if (bIsValid) return;

        // 🎯 当前是否处于按下状态
        const bool bPressedState = (IsSelected && ButtonStyle.bEnablePressedChangeImage);
        UTexture2D* TargetTexture = bPressedState ? ButtonStyle.PressedImage : ButtonStyle.NormalImage;
        UMaterialInterface* TargetMaterial = bPressedState ? PressedMaterial : NormalMaterial;

        // 🎨 按钮颜色逻辑：
        // 👉 如果仅更换图片（bEnablePressedChangeImage = true），保持原始颜色；
        // 👉 否则根据是否选中改变颜色。
        FLinearColor TargetColor = ButtonStyle.bEnablePressedChangeImage
            ? FLinearColor::White
            : (IsSelected ? ButtonStyle.PressedColor : FLinearColor::White);

        // 🧱 创建动态材质实例
        UMaterialInstanceDynamic* DynamicMat = nullptr;
        if (TargetMaterial)
        {
            DynamicMat = UMaterialInstanceDynamic::Create(TargetMaterial, this);
            if (DynamicMat && TargetTexture)
            {
                DynamicMat->SetTextureParameterValue(FName("T_Image"), TargetTexture);
            }
        }

        // 🧩 构建 FSlateBrush
        FSlateBrush Brush;
        Brush.ImageSize = TargetTexture
            ? FVector2D(TargetTexture->GetSizeX(), TargetTexture->GetSizeY()) * ButtonStyle.ScaleZoom
            : FVector2D(64.f, 64.f);
        Brush.TintColor = TargetColor;
        Brush.DrawAs = ESlateBrushDrawType::Image;
        Brush.SetResourceObject(DynamicMat ? (UObject*)DynamicMat : (UObject*)TargetTexture);

        // 🧩 设置按钮样式
        FButtonStyle NewStyle;
        NewStyle.SetNormal(Brush);
        NewStyle.SetHovered(Brush);
        NewStyle.SetPressed(Brush);
        NewStyle.SetDisabled(Brush);

        // 🔇 5. 点击音效（按下状态不播放）
        FSlateSound NoSound;
        NewStyle.SetPressedSound(bIsSelected ? NoSound : ClickSound);

        MMButton->SetStyle(NewStyle);

        // 📝 更新文本颜色（只有在不是图片切换模式时）
        if (ButtonStyle.bIsShowName && IsValid(Name))
        {
            FSlateColor TextColor = ButtonStyle.bEnablePressedChangeImage
                ? FSlateColor(FLinearColor::White)
                : FSlateColor(TargetColor);

            Name->SetColorAndOpacity(TextColor);
        }
    }
}
