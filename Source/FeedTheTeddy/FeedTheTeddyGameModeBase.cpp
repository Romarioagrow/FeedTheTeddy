// Copyright Epic Games, Inc. All Rights Reserved.

#include "FeedTheTeddyGameModeBase.h"

#include "FeedTheTeddySaveGame.h"
#include <Kismet/GameplayStatics.h>
#include "EventManagerActor.h"
#include "ConfigurationDataActor.h"

void AFeedTheTeddyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// add to event manager 
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->AddPointsAddedEventListener(this);
		EventManager->AddGameOverEventListener(this);
	}

	// add hud
	/*if (HudWidgetClass != nullptr)
	{
		UUserWidget* CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), )
	}*/

	// start timer
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "ConfigurationData", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AConfigurationDataActor* ConfigurationData = Cast<AConfigurationDataActor>(TaggedActors[0]);
		SecondsLeft = ConfigurationData->GetTotalGameSeconds();
		StartOneSecondTimer();
	}

	// Проверьте, существует ли SaveSlot
	if (!UGameplayStatics::DoesSaveGameExist("FeedTheTeddySaveGame", 0))
	{
		// Если SaveSlot не существует, создайте его
		UFeedTheTeddySaveGame* SaveGameInstance = Cast<UFeedTheTeddySaveGame>(
			UGameplayStatics::CreateSaveGameObject(
				UFeedTheTeddySaveGame::StaticClass()));
		SaveGameInstance->HighScore = 0;
		UGameplayStatics::SaveGameToSlot(SaveGameInstance, "FeedTheTeddySaveGame", 0);
	}
}

FDelegateHandle AFeedTheTeddyGameModeBase::AddToPointsAddedEvent()
{
	return PointsAddedEvent.AddUObject(this, &AFeedTheTeddyGameModeBase::AddPoints);
}

FDelegateHandle AFeedTheTeddyGameModeBase::AddToGameOverEvent()
{
	return GameOverEvent.AddUObject(this, &AFeedTheTeddyGameModeBase::EndGame);
}

void AFeedTheTeddyGameModeBase::EndGame()
{
	// remove from event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->RemovePointsAddedEventListener(this);
		EventManager->RemoveGameOverEventListener(this);
	}

	// try to load game
	int HighScore = 0;
	UFeedTheTeddySaveGame* SaveGameInstance = Cast<UFeedTheTeddySaveGame>(
		UGameplayStatics::LoadGameFromSlot(
			"FeedTheTeddySaveGame", 0));

	// if save game exists, get high score
	if (SaveGameInstance != nullptr)
	{
		HighScore = SaveGameInstance->HighScore;
	}

	// if current score is higher than high score, save new high score
	if (Score > HighScore)
	{
		if (SaveGameInstance == nullptr)
		{
			// couldn`t load saved game
			SaveGameInstance = Cast<UFeedTheTeddySaveGame>(
				UGameplayStatics::CreateSaveGameObject(
					UFeedTheTeddySaveGame::StaticClass()));
		}
		SaveGameInstance->HighScore = Score;
		UGameplayStatics::SaveGameToSlot(
			SaveGameInstance, "FeedTheTeddySaveGame", 0);
	}

	// display game over widget and pause game
	if (GameOverWidgetClass != nullptr)
	{
		UUserWidget* CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), GameOverWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
			APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
			if (PlayerController != nullptr)
			{
				PlayerController->SetInputMode(FInputModeUIOnly());
				PlayerController->bShowMouseCursor = true;
				PlayerController->SetPause(true);
			}
		}
	}
}

void AFeedTheTeddyGameModeBase::StartOneSecondTimer()
{
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AFeedTheTeddyGameModeBase::ChangeSecondsTimer, 1.0f);
}

void AFeedTheTeddyGameModeBase::ChangeSecondsTimer()
{
	SecondsLeft -= 1;
	if (SecondsLeft == 0)
	{
		EndGame();	
	}
	else
	{
		StartOneSecondTimer();
	}
}

void AFeedTheTeddyGameModeBase::AddPoints(int Points)
{
	Score += Points;
}
