// Fill out your copyright notice in the Description page of Project Settings.


#include "BurgerPlayerController.h"

void ABurgerPlayerController::PauseGame()
{
	if (PauseMenuWidgetClass != nullptr)
	{
		UUserWidget* CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PauseMenuWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
			SetPause(true);
		}
	}
}

void ABurgerPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("PauseGame", IE_Pressed, this, &ABurgerPlayerController::PauseGame);

}
