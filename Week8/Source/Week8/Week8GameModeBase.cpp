// Copyright Epic Games, Inc. All Rights Reserved.


#include "Week8GameModeBase.h"
#include "ObjectiveWorldSubsystem.h"

void AWeek8GameModeBase::StartPlay()
{
	Super::StartPlay();
	UObjectiveWorldSubsystem* ObjectiveWorldSubsystem = GetWorld()->GetSubsystem<UObjectiveWorldSubsystem>();
	if (ObjectiveWorldSubsystem)
	{
		ObjectiveWorldSubsystem->CreateObjectiveWidget(ObjectiveWidgetClass);
		ObjectiveWorldSubsystem->DisplayObjectiveWidget();

	}
}

