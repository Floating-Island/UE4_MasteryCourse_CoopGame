// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OnlineSessionInterface.h"
#include "SGameInstance.generated.h"

class IOnlineSubsystem;
/**
 * 
 */
UCLASS()
class COOPGAME_API USGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	void makeSession();
	USGameInstance(const FObjectInitializer& ObjectInitializer);
	void configureSessionSettings(bool bIsLANSession, bool bIsPresence, int32 playerCapacity);

protected:

	//Sessions

	IOnlineSubsystem* onlineSubSystem;

	IOnlineSessionPtr session;
	
	//Session Creation and start
	UPROPERTY(BlueprintReadWrite, Category = "Session Creation")
		FName mapName;

	UFUNCTION(BlueprintCallable, Category = "Session Creation")
	bool hostSession(TSharedPtr<const FUniqueNetId> userID, FName sessionName, bool bIsLANSession, bool bIsPresence, int32 playerCapacity);

	//delegates
	FOnCreateSessionCompleteDelegate OnCreateSessionCompleteDelegate;
	FOnStartSessionCompleteDelegate OnStartSessionCompleteDelegate;

	//handles
	FDelegateHandle OnCreateSessionCompleteDelegateHandle;
	FDelegateHandle OnStartSessionCompleteDelegateHandle;

	TSharedPtr<FOnlineSessionSettings> sessionSettings;
	
	virtual void OnCreateSessionComplete(FName sessionName, bool bWasSuccessful);

	virtual void OnStartOnlineGameComplete(FName sessionName, bool bWasSuccessful);

	//Session Search

	UFUNCTION(BlueprintCallable, Category = "Session Search")
		void findSession(TSharedPtr<const FUniqueNetId> userID, bool bIsLANSession, bool bIsPresence);

	FOnFindSessionsCompleteDelegate OnFindSessionsCompleteDelegate;
	FDelegateHandle OnFindSessionsCompleteDelegateHandle;

	TSharedPtr<class FOnlineSessionSearch> sessionSearch;

	UPROPERTY(BlueprintReadWrite, Category = "Session Search")
		int searchesMaxNumber;
	UPROPERTY(BlueprintReadWrite, Category = "Session Search")
		int pingSize;

	void onFindSessionComplete(bool bWasSuccessful);

	//Session Join
	UFUNCTION(BlueprintCallable, Category = "Session Join")
		bool joinSession(TSharedPtr<const FUniqueNetId> userID, FName sessionName, const FOnlineSessionSearchResult& SearchResult);

	FOnJoinSessionCompleteDelegate onnJoinSessionCompleteDelegate;

	FDelegateHandle onJoinSessionCompleteDelegateHandle;

	void onJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type result);

	//Session Destruction

	FOnDestroySessionCompleteDelegate onDestroySessionCompleteDelegate;

	FDelegateHandle onDestroySessionCompleteDelegateHandle;

	UFUNCTION(BlueprintCallable, Category = "Session Destruction")
		virtual void  onDestroySessionComplete(FName sessionName, bool bWasSuccessful);
};
