// Copyright (C) 2019 Gon�alo Marques - All Rights Reserved

#pragma once
#include "InputMode.generated.h"

UENUM(BlueprintType, meta = (ScriptName = "UINavInputMode"))
enum class EInputMode : uint8
{
	None UMETA(DisplayName = "None"),
	GameUI UMETA(DisplayName = "Game and UI"),
	Game UMETA(DisplayName = "Game Only"),
	UI UMETA(DisplayName = "UI Only")
};