// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DelegateDeclarations.generated.h"

// points added event
DECLARE_MULTICAST_DELEGATE_OneParam(FPointsAddedEvent, int);

// game over event
DECLARE_MULTICAST_DELEGATE(FGameOverEvent);

/**
 * 
 */
UCLASS()
class FEEDTHETEDDY_API UDelegateDeclarations : public UObject
{
	GENERATED_BODY()

};