// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "Blueprint/UserWidget.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FeedTheTeddyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FEEDTHETEDDY_API AFeedTheTeddyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	//int HighScore{ 0 };
	int Score{ 0 };

	void EndGame();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<UUserWidget> GameOverWidgetClass;

protected:
	virtual void BeginPlay() override;
};
