// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InteractableDoor.generated.h"

/**
 * 
 */

class UDoorInteractionComponent;

UCLASS()
class WEEK2_API AInteractableDoor : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	AInteractableDoor();
Protected:

	UPROPERTY(EditAnywhere,NoClear)
	UDoorInteractionComponent* DoorInteractionComponent;

};
