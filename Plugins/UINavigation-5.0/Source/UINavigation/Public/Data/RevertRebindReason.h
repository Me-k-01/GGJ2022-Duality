// Copyright (C) 2019 Gon�alo Marques - All Rights Reserved

#pragma once
#include "RevertRebindReason.generated.h"

UENUM(BlueprintType, meta = (ScriptName = "UINavRevertRebindReason"))
enum class ERevertRebindReason : uint8
{
	None UMETA(DisplayName = "None"),
	RestrictionMismatch UMETA(DisplayName = "Restriction Mismatch"),
	NonWhitelistedKey UMETA(DisplayName = "Non-Whitelisted Key"),
	BlacklistedKey UMETA(DisplayName = "Blacklisted Key"),
	UsedBySameInputGroup UMETA(DisplayName = "Used By Same Input Group"),
	UsedBySameInput UMETA(DisplayName = "Used By Same Input"),
	SwapRejected UMETA(DisplayName = "Swap Rejected"),
};