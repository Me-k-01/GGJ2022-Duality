// Copyright (C) 2019 Gon�alo Marques - All Rights Reserved

#include "UINavController.h"
#include "UINavPCComponent.h"

AUINavController::AUINavController()
{
	UINavPCComp = CreateDefaultSubobject<UUINavPCComponent>(TEXT("UINav PC Component"));
}