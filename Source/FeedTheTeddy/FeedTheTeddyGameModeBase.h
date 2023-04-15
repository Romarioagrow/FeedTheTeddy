// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
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

	void AddPoints(int Points);


	

public:
	AFeedTheTeddyGameModeBase();

	UPROPERTY(BlueprintReadOnly, Category = "Score")
	int Score{ 0 };

	void EndGame();

	UPROPERTY(BlueprintReadOnly, Category = "SecondsLeft")
	int SecondsLeft{ 0 };


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<UUserWidget> GameOverWidgetClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
		TSubclassOf<UUserWidget> HudWidgetClass;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
		TSubclassOf<UHUD> GameOverWidgetClass;*/

protected:
	virtual void BeginPlay() override;

	FDelegateHandle AddToPointsAddedEvent();

	FDelegateHandle AddToGameOverEvent();
};
