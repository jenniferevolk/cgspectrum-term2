// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorInteractorComponent.generated.h"

class ATriggerBox;
class IConsoleVariable;

UENUM()
enum class EDoorState
{
	DS_Closed = 0		UMETA(DisplayName = "Closed"),
	DS_Opening =1		UMETA(DisplayName = "Opening"),
	DS_Open = 2			UMETA(DisplayName = "Open"),
	DS_Locked = 3		UMETA(DisplayName = "Locked")
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DOORS_API UDoorInteractorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UDoorInteractorComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	DECLARE_EVENT(FDoorInteractionComponent, FOpened)
	FOpened& OnOpened() { return OpenedEvent; }

	FOpened OpenedEvent;

	static void OnDebugToggled(IConsoleVariable* Var);
	void DebugDraw();
	void OnDoorOpen();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		FRotator DesiredRotation = FRotator::ZeroRotator;
		FRotator StartRotation = FRotator::ZeroRotator;
		FRotator FinalRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere)
		float TimeToRotate = 1.0f;

	float CurrentRotationTime = 0.0f;
	

	UPROPERTY(EditAnywhere)
	ATriggerBox* TriggerBox;


	UPROPERTY(EditAnywhere)
	FRuntimeFloatCurve OpenCurve;

	UPROPERTY(BlueprintReadOnly)
	EDoorState DoorState;
};
