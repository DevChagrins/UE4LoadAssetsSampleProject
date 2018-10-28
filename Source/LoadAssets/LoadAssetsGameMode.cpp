// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LoadAssetsGameMode.h"
#include "LoadAssetsBall.h"

ALoadAssetsGameMode::ALoadAssetsGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ALoadAssetsBall::StaticClass();
}
