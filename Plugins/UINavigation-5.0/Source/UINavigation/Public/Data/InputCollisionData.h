// Copyright (C) 2019 Gon�alo Marques - All Rights Reserved

#pragma once
#include "InputCollisionData.generated.h"

USTRUCT(BlueprintType)
struct FInputCollisionData
{
	GENERATED_BODY()

	FInputCollisionData()
	{
	}

	FInputCollisionData(const FText InCurrentInputText,
						const FText InCollidingInputText,
						const int InCollidingKeyIndex,
						const FKey InCurrentInputKey,
						const FKey InPressedKey) :
		CurrentInputText(InCurrentInputText),
		CollidingInputText(InCollidingInputText),
		CollidingKeyIndex(InCollidingKeyIndex),
		CurrentInputKey(InCurrentInputKey),
		PressedKey(InPressedKey)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputCollisionData)
	FText CurrentInputText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputCollisionData)
	FText CollidingInputText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputCollisionData)
	int CollidingKeyIndex = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputCollisionData)
	FKey CurrentInputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputCollisionData)
	FKey PressedKey;

};