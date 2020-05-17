// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SContentSelectionBoxWidget.h"
#include "SLevelSelectionBoxWidget.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API USLevelSelectionBoxWidget : public USContentSelectionBoxWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Widget")
	static TArray<FString> GetAllMapNames(FString levelsFolder);
};
