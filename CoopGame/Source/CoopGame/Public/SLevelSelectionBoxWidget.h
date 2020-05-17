// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SLevelSelectionBoxWidget.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API USLevelSelectionBoxWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Widget")
	static TArray<FString> GetAllMapNames(FString levelsFolder);
	
protected:

	UPROPERTY(BlueprintReadWrite, Category = "Widget")
		FText SelectedLevel;
};
