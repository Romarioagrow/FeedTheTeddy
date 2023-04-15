// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HomingActorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHomingActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FEEDTHETEDDY_API IHomingActorInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual UStaticMeshComponent* GetStaticMesh() PURE_VIRTUAL(IHomingActorInterface, return nullptr;);

	virtual float GetImpulseForce() PURE_VIRTUAL(IHomingActorInterface, return 0.0f;);

	virtual float GetHomingDelay() PURE_VIRTUAL(IHomingActorInterface, return 0.0f;);
};
