// Copyright Epic Games, Inc. All Rights Reserved.

#include "FeedTheTeddyGameModeBase.h"
#include "FeedTheTeddySaveGame.h"
#include <Kismet/GameplayStatics.h>

void AFeedTheTeddyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

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

void AFeedTheTeddyGameModeBase::EndGame()
{
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


