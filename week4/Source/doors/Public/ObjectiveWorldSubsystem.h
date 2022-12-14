// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Subsystems/WorldSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveComponent.h"
#include "ObjectiveWorldSubsystem.generated.h"

class UObjectiveComponent;

UCLASS()
class DOORS_API UObjectiveWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	void CreateObjectiveWidget(TSubclassOf<UUserWidget> ObjectiveWidgetClass);
	void DisplayObjectiveWidget();


	UFUNCTION(BlueprintCallable)
		FString GetCurrentObjectiveDescription();

	UFUNCTION(BlueprintCallable)
		void AddObjective(UObjectiveComponent* ObjectiveComponent); 

	UFUNCTION(BlueprintCallable)
		void RemoveObjective(UObjectiveComponent* ObjectiveComponent);
	
	
	void OnObjectiveStateChanged(UObjectiveComponent* ObjectiveComponent, EObjectiveState ObjectiveState);

		//FString RemoveObjectiveDescription() { return TEXT("OpenDoor"); }

private:
	UUserWidget* ObjectiveWidget = nullptr;
	TArray<UObjectiveComponent*>Objectives;
};

