// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InteractableDoor.generated.h"



class UDoorInteractorComponent;
/**
 * 
 */
UCLASS()
class DOORS_API AInteractableDoor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AInteractableDoor();

protected:
	UPROPERTY(EditAnywhere,NoClear)
	UDoorInteractorComponent* DoorInteractorComponent;

};
