// Copyright (C) 2019 Gon�alo Marques - All Rights Reserved

#pragma once
#include "Modules/ModuleInterface.h"

class FUINavigationModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};