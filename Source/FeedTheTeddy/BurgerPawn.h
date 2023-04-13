// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FriesActor.h"
#include "DelegateDeclarations.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BurgerPawn.generated.h"

UCLASS()
class FEEDTHETEDDY_API ABurgerPawn : public APawn
{
	GENERATED_BODY()

private:
	float HalfCollisionWidth;
	float HalfCollisionHeight;
	float TopClampKludgeAmount{ 3.5f };

	// game over event
	FGameOverEvent GameOverEvent;

	// saved for efficiency
	AConfigurationDataActor* ConfigurationData;

public:
	// Sets default values for this pawn's properties
	ABurgerPawn();

	// projectile
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Fries"),
		Category = "Components")
		TSubclassOf<AFriesActor> UFries;

	UPROPERTY(BlueprintReadOnly, Category = "Health")
		float HealthPercent{ 1.0f };

	const int MaxHealth{ 100 };

	int Health{ MaxHealth };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/**
	 * @brief 
	 * @param OverlappedComponent 
	 * @param OtherActor 
	 * @param OtherComp 
	 * @param OtherBodyIndex 
	 * @param bFromSweep 
	 * @param SweepResult 
	*/
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent,
						class AActor* OtherActor,
						class UPrimitiveComponent* OtherComp,
						int32 OtherBodyIndex,
						bool bFromSweep,
						const FHitResult& SweepResult);

	/**
	 * @brief 
	 * @param moveScale 
	*/
	void MoveHorizontally(float moveScale);

	/**
	 * @brief 
	 * @param moveScale 
	*/
	void MoveVertically(float moveScale);

	/**
	 * @brief shoot fries
	*/
	void Shoot();

	/**
	 * @brief 
	 * @param EndPlayReason 
	*/
	UFUNCTION()
		virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/**
	 * @brief 
	 * @return 
	*/
	FGameOverEvent& GetGameOverEvent();

private:
	void CheckGameOver();
};
