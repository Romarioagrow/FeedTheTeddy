// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "Blueprint/UserWidget.h"
#include "DelegateDeclarations.h"

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

private:
	// event support
	FPointsAddedEvent PointsAddedEvent;

	FGameOverEvent GameOverEvent;

	int SecondsLeft{ 0 };

	void StartOneSecondTimer();

	void ChangeSecondsTimer();

	void AddPoints(int Points);

public:
	int Score{ 0 };

	void EndGame();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<UUserWidget> GameOverWidgetClass;

protected:
	virtual void BeginPlay() override;

	FDelegateHandle AddToPointsAddedEvent();

	FDelegateHandle AddToGameOverEvent();
};
