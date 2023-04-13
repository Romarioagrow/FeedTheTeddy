// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BurgerPawn.h"
#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BurgerPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FEEDTHETEDDY_API ABurgerPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<UUserWidget> PauseMenuWidgetClass;

	virtual void BeginPlay() override;

private:
	void PauseGame();

	void MoveHorizontally(float AxisValue);

	void MoveVertically(float AxisValue);

	UPROPERTY()
		ABurgerPawn* ControlledBurgerPawn;

public:
	virtual void SetupInputComponent() override;
};
