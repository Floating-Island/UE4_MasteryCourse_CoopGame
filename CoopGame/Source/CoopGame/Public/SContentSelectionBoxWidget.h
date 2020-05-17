// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SContentSelectionBoxWidget.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API USContentSelectionBoxWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadWrite, Category = "Widget")
		FText SelectedButton;

	UPROPERTY(BlueprintReadWrite, Category = "Widget")
		bool bIsAnyButtonSelected;
};
