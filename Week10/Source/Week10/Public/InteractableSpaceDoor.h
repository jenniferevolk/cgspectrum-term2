// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InteractableSpaceDoor.generated.h"

class USpaceDoorInteractorComponent;
/**
 *
 */
UCLASS()
class WEEK10_API AInteractableSpaceDoor : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	AInteractableSpaceDoor();

protected:
	UPROPERTY(EditAnywhere, NoClear)
		USpaceDoorInteractorComponent* SpaceDoorInteractorComponent;

};