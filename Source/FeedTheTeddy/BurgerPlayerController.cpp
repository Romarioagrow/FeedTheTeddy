// Fill out your copyright notice in the Description page of Project Settings.

#include "BurgerPlayerController.h"
#include "Camera/CameraActor.h"
#include <Kismet/GameplayStatics.h>

void ABurgerPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// set player pawn
	APawn* InPawn = GetPawn();
	Possess(InPawn);
	ControlledBurgerPawn = Cast<ABurgerPawn>(InPawn);

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundActors);

	// Make sure a camera actor is found
	if (FoundActors.Num() > 0)
	{
		// Get the first camera actor
		ACameraActor* CameraActor = Cast<ACameraActor>(FoundActors[0]);

		// Set the view target to the found camera actor
		SetViewTarget(CameraActor);
	}
}

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

void ABurgerPlayerController::MoveHorizontally(float AxisValue)
{
	if (ControlledBurgerPawn != nullptr)
	{
		ControlledBurgerPawn->MoveHorizontally(AxisValue);
	}
}

void ABurgerPlayerController::MoveVertically(float AxisValue)
{
	if (ControlledBurgerPawn != nullptr)
	{
		ControlledBurgerPawn->MoveVertically(AxisValue);
	}
}

void ABurgerPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// game pause action
	InputComponent->BindAction("PauseGame", IE_Pressed, this, &ABurgerPlayerController::PauseGame);
	InputComponent->BindAction("Fire", IE_Pressed, this, &ABurgerPlayerController::Fire);

	// pawn moving actions
	InputComponent->BindAxis("MoveHorizontally", this, &ABurgerPlayerController::MoveHorizontally);
	InputComponent->BindAxis("MoveVertically", this, &ABurgerPlayerController::MoveVertically);
}

void ABurgerPlayerController::Fire()
{
	if (ControlledBurgerPawn != nullptr)
	{
		ControlledBurgerPawn->Shoot();
	}
}
