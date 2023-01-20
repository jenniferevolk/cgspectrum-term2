// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/userWidget.h"
#include "Week8GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class WEEK8_API AWeek8GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	void StartPlay() override;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> ObjectiveWidgetClass;

	//UUserWidget* ObjectiveWidget = nullptr;

	
};
