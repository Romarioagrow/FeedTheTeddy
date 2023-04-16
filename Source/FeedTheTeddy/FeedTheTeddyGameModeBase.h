// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "FeedTheTeddySaveGame.h"
#include "Engine/Classes/GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "DelegateDeclarations.h"
#include "CoreMinimal.h"
#include "TeddyHUD.h"
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

	void StartOneSecondTimer();

	void ChangeSecondsTimer();

public:
	AFeedTheTeddyGameModeBase();

	UPROPERTY(BlueprintReadWrite, Category = "Score")
	int Score{ 0 };

	void EndGame();

	UPROPERTY(BlueprintReadOnly, Category = "SecondsLeft")
	int SecondsLeft{ 0 };


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<UUserWidget> GameOverWidgetClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
		TSubclassOf<UUserWidget> HudWidgetClass;

	UFUNCTION()
		void AddPoints(int Points);

	FDelegateHandle AddToPointsAddedEvent(FPointsAddedEvent& PointsAddedEventToSubscribe);

	FDelegateHandle AddToGameOverEvent(FGameOverEvent& GameOverEventToSubscribe);

protected:
	virtual void BeginPlay() override;

	
};
