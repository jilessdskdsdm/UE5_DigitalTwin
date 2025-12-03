#include "MainMenu.h"
#include "Components/CanvasPanelSlot.h"
#include "Widget/MainMenuButton.h"
#include "TimerManager.h"
#include "Components/CanvasPanel.h"
#include "DigitalTwin/Data/FunctionLibrary.h"
#include "Widget/MainMenuButtonBackground.h"



void UMainMenu::NativeConstruct()
{
    Super::NativeConstruct();

    if (MenuConfigs.Num() > 0)
    {
        FString FirstKey = MenuConfigs.CreateConstIterator()->Key;
        GenerateLevelOneMenu(FirstKey);
    }
    
}

void UMainMenu::GenerateLevelOneMenu(const FString& MenuKey)
{
    GenerateMenuByKey(MenuKey,true);
}

void UMainMenu::ClearMenusFromLevelIndex(EMenuIndex FromLevel)
{
    int32 StartIndex = static_cast<int32>(FromLevel);
    TArray<EMenuIndex> KeysToClear;

    for (const auto& Pair : LevelKeyToButtonsMap)
    {
        // 只清除比当前层级更深的层级
        if (static_cast<int32>(Pair.Key) > StartIndex)
        {
            KeysToClear.Add(Pair.Key);
        }
    }

    for (EMenuIndex Level : KeysToClear)
    {
        if (LevelKeyToButtonsMap.Contains(Level))
        {
            for (UMainMenuButton* Btn : LevelKeyToButtonsMap[Level])
            {
                if (IsValid(Btn)) Btn->RemoveFromParent();
            }
            LevelKeyToButtonsMap.Remove(Level);
        }
        if (LevelToBackgroundWidgetMap.Contains(Level))
        {
            if (UUserWidget* BG = LevelToBackgroundWidgetMap[Level])
            {
                if (IsValid(BG)) BG->RemoveFromParent();
            }
            LevelToBackgroundWidgetMap.Remove(Level);
        }
        
        MenuLevelToSelectedName.Remove(Level);
        MenuLevelToButtonPosition.Remove(Level);
    }
    
}

void UMainMenu::GenerateMenuByKey(const FString& MenuKey, bool bIsShow)
{
    if (!bIsShow) return;
    if (!IsValid(RootMenuContainer) || !MainMenuButtonClass || !MenuConfigs.Contains(MenuKey)) return;
    if (!MainMenuButtonBackgroundClass) return;

    CurrentMenuKey = MenuKey;
    const FMenuLevelConfig& Config = MenuConfigs[MenuKey];
    EMenuIndex ThatMenuLevelKey = Config.ThatMenu;

    // 清理旧按钮
    if (LevelKeyToButtonsMap.Contains(ThatMenuLevelKey))
    {
        for (UMainMenuButton* Button : LevelKeyToButtonsMap[ThatMenuLevelKey])
        {
            if (IsValid(Button)) Button->RemoveFromParent();
        }
        LevelKeyToButtonsMap[ThatMenuLevelKey].Empty();
    }

    // 清理旧背景
    if (LevelToBackgroundWidgetMap.Contains(ThatMenuLevelKey))
    {
        if (UUserWidget* OldBG = LevelToBackgroundWidgetMap[ThatMenuLevelKey])
        {
            if (IsValid(OldBG)) OldBG->RemoveFromParent();
        }
        LevelToBackgroundWidgetMap.Remove(ThatMenuLevelKey);
    }

    // 生成背景控件
    UMainMenuButtonBackground* MenuBackground = CreateWidget<UMainMenuButtonBackground>(this, MainMenuButtonBackgroundClass);
    if (!MenuBackground) return;
    MenuBackground->SetAnchorAndOffset(Config.AnchorPoint, Config.SubMenuOffset, Config.ButtonOffset);
    MenuBackground->Direction = Config.LayoutDirection;

    // **这里添加到 RootMenuContainer，并获取它的 CanvasPanelSlot 来设置锚点和偏移**
    UCanvasPanel* Canvas = Cast<UCanvasPanel>(RootMenuContainer);
    if (!Canvas)  return;

    UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Canvas->AddChild(MenuBackground));
    if (!CanvasSlot) return;

    // 设置锚点
    CanvasSlot->SetAnchors(FAnchors(Config.AnchorPoint.X, Config.AnchorPoint.Y));
    CanvasSlot->SetAlignment(Config.AnchorPoint);

    // 设置位置偏移
    CanvasSlot->SetPosition(Config.SubMenuOffset);

    // 设置背景图或默认背景
    if (Config.BackgroundImage)
    {
        MenuBackground->SetBackgroundBrush(Config.BackgroundImage, Config.BackgroundImageSize);
    }
    else
    {
        MenuBackground->SetBackgroundBrush(nullptr, 0); // 默认半透明背景
    }

    LevelToBackgroundWidgetMap.Add(ThatMenuLevelKey, MenuBackground);

    // 生成按钮并添加到 MenuBackground 的布局控件中
    TArray<UMainMenuButton*> CreatedButtons;
    TArray<UMainMenuButton*> AutoSelectButtons;

    const bool bReverseOrder = (Config.LayoutDirection == EMenuLayoutDirection::BottomToTop ||
                                Config.LayoutDirection == EMenuLayoutDirection::RightToLeft);

    int32 ID = -1;
    for (const FButtonStyles& Style : Config.ButtonStyles)
    {
        UMainMenuButton* Button = CreateWidget<UMainMenuButton>(this, MainMenuButtonClass);
        if (Button)
        {
            ID += 1;
            Button->SetupButton(Style.Name, Style);
            Button->SetShowName();
            Button->ThatLevelMenu = Config.ThatMenu;
            Button->ButtonID = ID;
            Button->Direction = Config.LayoutDirection;
            Button->ButtonStyle = Style;
            Button->OnButtonClicked.AddDynamic(this, &UMainMenu::HandleMenuButtonClick);

            MenuBackground->AddButtonToLayout(Button, Config.LayoutDirection, bReverseOrder);
            CreatedButtons.Add(Button);

            if (Style.bAutoSelect)
            {
                AutoSelectButtons.Add(Button);
            }
        }
    }

    MenuBackground->SetButtonSpacing(Config.ButtonSpacing, Config.LayoutDirection);
    LevelKeyToButtonsMap.FindOrAdd(ThatMenuLevelKey) = CreatedButtons;

    // 自动选中按钮（延迟）
    FTimerHandle TimerHandle;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, AutoSelectButtons]()
    {
        for (UMainMenuButton* Button : AutoSelectButtons)
        {
            if (IsValid(Button))
            {
                Button->HandleButtonClick();
                Button->SetSelected(true);
            }
        }
    }, 0.05f, false);
}

void UMainMenu::HandleMenuButtonClick(UMainMenuButton* ClickedButton, FString LevelName)
{
    if (!IsValid(ClickedButton)) return;

    EMenuIndex MenuLevelKey = EMenuIndex::OneMenu;
    for (const auto& Pair : LevelKeyToButtonsMap)
    {
        if (Pair.Value.Contains(ClickedButton))
        {
            MenuLevelKey = Pair.Key;
            break;
        }
    }

    // ✅ 这里记录：上一次点了什么按钮（和层级无关）
    LastSelectedName = CurrentSelectedName;
    CurrentSelectedName = LevelName;

    // 🔽 下面保持你原来的逻辑不变
    ClearMenusFromLevelIndex(MenuLevelKey);

    TArray<UMainMenuButton*>& Siblings = LevelKeyToButtonsMap.FindOrAdd(MenuLevelKey);
    for (UMainMenuButton* Btn : Siblings)
    {
        if (IsValid(Btn) && Btn != ClickedButton)
        {
            Btn->SetSelected(false);
        }
    }

    bool bWasAlreadySelected = ClickedButton->GetIsSelected();

    ClickedButton->SetSelected(true);
    MenuLevelToSelectedName.FindOrAdd(MenuLevelKey) = LevelName;

    if (bWasAlreadySelected)
    {
        MenuLevelToSelectedName.Remove(MenuLevelKey);
        MenuLevelToButtonPosition.Remove(MenuLevelKey);
        return;
    }

    FVector2D BtnPos = FVector2D::ZeroVector;
    if (UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(ClickedButton->Slot))
    {
        BtnPos = PanelSlot->GetPosition();
    }

    int32 NextLevelIndex = static_cast<int32>(MenuLevelKey) + 1;
    bool bHasNextMenu = false;

    for (const auto& Pair : MenuConfigs)
    {
        if (static_cast<int32>(Pair.Value.ThatMenu) == NextLevelIndex)
        {
            bHasNextMenu = true;
            break;
        }
    }
    

    // 继续子菜单逻辑
}


void UMainMenu::PositionButtons(const FMenuLevelConfig& Config, const TArray<UMainMenuButton*>& Buttons)
{
    if (Buttons.Num() == 0 || !IsValid(RootMenuContainer)) return;

    FVector2D ContentPivot = Config.AnchorPoint;
    FVector2D StartPos = Config.SubMenuOffset;

    for (int32 i = 0; i < Buttons.Num(); i++)
    {
        UMainMenuButton* Button = Buttons[i];
        if (!IsValid(Button)) continue;

        if (UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(Button->Slot))
        {
            FVector2D ButtonSize = Button->GetDesiredSize();
            if (ButtonSize.IsZero())
                ButtonSize = FVector2D(100.f, 40.f);

            FVector2D Pos = StartPos;
            if (Config.LayoutDirection == EMenuLayoutDirection::TopToBottom)
            {
                Pos.Y += i * (ButtonSize.Y + Config.ButtonSpacing);
            }
            else
            {
                Pos.X += i * (ButtonSize.X + Config.ButtonSpacing);
            }

            PanelSlot->SetAnchors(FAnchors(ContentPivot.X, ContentPivot.Y));
            PanelSlot->SetAlignment(ContentPivot);
            PanelSlot->SetPosition(Pos);
            PanelSlot->SetSize(ButtonSize);

            float Scale = Config.ButtonStyles.IsValidIndex(i) ? Config.ButtonStyles[i].ScaleZoom : 1.0f;
            Button->SetRenderScale(FVector2D(Scale));
        }
    }
}


FString UMainMenu::FindMenuKeyByButtonName(const FString& ButtonName)
{
    for (const auto& Pair : MenuConfigs)
    {
        const FString& MenuKey = Pair.Key;
        const FMenuLevelConfig& Config = Pair.Value;

        for (const FButtonStyles& Style : Config.ButtonStyles)
        {
            if (Style.Name == ButtonName)
            {
                return MenuKey;
            }
        }
    }

    return TEXT(""); // 没找到返回空
}

TArray<UMainMenuButton*> UMainMenu::GetAllMenuButtons() const
{
    TArray<UMainMenuButton*> AllButtons;

    for (const auto& Pair : LevelKeyToButtonsMap)
    {
        for (UMainMenuButton* Button : Pair.Value)
        {
            if (IsValid(Button))
            {
                AllButtons.Add(Button);
            }
        }
    }

    return AllButtons;
}


UMainMenuButtonBackground* UMainMenu::GetBackgroundByKey(const FString& MenuKey) const
{
    if (!MenuConfigs.Contains(MenuKey))
    {
        return nullptr;
    }

    // 2️⃣ 获取配置
    const FMenuLevelConfig& Config = MenuConfigs[MenuKey];
    EMenuIndex TargetMenuLevel = Config.ThatMenu;

    // 3️⃣ 查找对应的背景 Widget
    if (LevelToBackgroundWidgetMap.Contains(TargetMenuLevel))
    {
        if (UMainMenuButtonBackground* BG = LevelToBackgroundWidgetMap[TargetMenuLevel])
        {
          return BG;
        }
    }

  return nullptr;
}
