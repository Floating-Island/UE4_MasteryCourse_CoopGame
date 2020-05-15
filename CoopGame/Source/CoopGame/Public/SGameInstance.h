// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OnlineSessionInterface.h"
#include "SGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API USGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	USGameInstance(const FObjectInitializer& ObjectInitializer);
	void configureSessionSettings(bool bIsLANSession, bool bIsPresence, int32 playerCapacity);

protected:

	//Sessions

	bool hostSession(TSharedPtr<const FUniqueNetId> userID, FName sessionName, bool bIsLANSession, bool bIsPresence, int32 playerCapacity, FString mapName);

	//delegates
	FOnCreateSessionCompleteDelegate OnCreateSessionCompleteDelegate;
	FOnStartSessionCompleteDelegate OnStartSessionCompleteDelegate;

	//handles
	FDelegateHandle OnCreateSessionCompleteDelegateHandle;
	FDelegateHandle OnStartSessionCompleteDelegateHandle;

	TSharedPtr<class FOnlineSessionSettings> sessionSettings;
	
	virtual void OnCreateSessionComplete(FName sessionName, bool bWasSuccessful);

	virtual void OnStartOnlineGameComplete(FName sessionName, bool bWasSuccessful);
	
};
