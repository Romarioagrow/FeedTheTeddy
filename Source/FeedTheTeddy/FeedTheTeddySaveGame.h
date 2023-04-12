// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FeedTheTeddySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class FEEDTHETEDDY_API UFeedTheTeddySaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "Saved Game Data")
	int HighScore{ 0 };
	
};
