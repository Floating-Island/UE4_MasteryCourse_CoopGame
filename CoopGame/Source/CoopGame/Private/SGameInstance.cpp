// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameInstance.h"

#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "GameMapsSettings.h"


USGameInstance::USGameInstance(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	OnCreateSessionCompleteDelegate = FOnCreateSessionCompleteDelegate::CreateUObject(this, &USGameInstance::OnCreateSessionComplete);
	OnStartSessionCompleteDelegate = FOnStartSessionCompleteDelegate::CreateUObject(this, &USGameInstance::OnStartOnlineGameComplete);

	searchesMaxNumber = 20;
	pingSize = 50;

	OnFindSessionsCompleteDelegate = FOnFindSessionsCompleteDelegate::CreateUObject(this, &USGameInstance::onFindSessionComplete);

	onnJoinSessionCompleteDelegate = FOnJoinSessionCompleteDelegate::CreateUObject(this, &USGameInstance::onJoinSessionComplete);

	onlineSubSystem = IOnlineSubsystem::Get();
	makeSession();

	onDestroySessionCompleteDelegate = FOnDestroySessionCompleteDelegate::CreateUObject(this, &USGameInstance::onDestroySessionComplete);
}


void USGameInstance::makeSession()
{
	if (onlineSubSystem)
	{
		session = onlineSubSystem->GetSessionInterface();
	}
}

///creation and start



void USGameInstance::createSession(FName sessionName, bool bIsLANSession, bool bIsPresence, int32 playerCapacity)
{
	hostSession(GetPrimaryPlayerUniqueId(), sessionName, bIsLANSession, bIsPresence, playerCapacity);
}

bool USGameInstance::hostSession(TSharedPtr<const FUniqueNetId> userID, FName sessionName, bool bIsLANSession,
                                 bool bIsPresence, int32 playerCapacity)
{
	if(session.IsValid() && userID.IsValid())
	{
		sessionSettings = MakeShareable(new FOnlineSessionSettings());

		configureSessionSettings(bIsLANSession, bIsPresence, playerCapacity);

		sessionSettings->Set(SETTING_MAPNAME, mapName.ToString(), EOnlineDataAdvertisementType::ViaOnlineService);

		OnCreateSessionCompleteDelegateHandle = session->AddOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegate);

		return session->CreateSession(*userID, sessionName, *sessionSettings);
	}

	UE_LOG(LogTemp, Log, TEXT("Couldn't host session, no Online Subsystem present..."));
	return false;
}

void USGameInstance::configureSessionSettings(bool bIsLANSession, bool bIsPresence, int32 playerCapacity)
{
	sessionSettings->bIsLANMatch = bIsLANSession;
	sessionSettings->bUsesPresence = bIsPresence;
	sessionSettings->NumPublicConnections = playerCapacity;
	sessionSettings->NumPrivateConnections = 0;
	sessionSettings->bAllowInvites = true;
	sessionSettings->bAllowJoinInProgress = true;
	sessionSettings->bShouldAdvertise = true;
	sessionSettings->bAllowJoinViaPresence = true;
	sessionSettings->bAllowJoinViaPresenceFriendsOnly = false;
}

void USGameInstance::OnCreateSessionComplete(FName sessionName, bool bWasSuccessful)
{
	UE_LOG(LogTemp, Log, TEXT("Session %s creation: %s."), (*sessionName.ToString()), (bWasSuccessful)? (*FString("Successful")):(*FString("Unsuccessful")));

	if (session.IsValid())
	{
		session->ClearOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegateHandle);
		if(bWasSuccessful)
		{
			OnStartSessionCompleteDelegateHandle = session->AddOnStartSessionCompleteDelegate_Handle(OnStartSessionCompleteDelegate);

			session->StartSession(sessionName);
		}
	}
}

void USGameInstance::OnStartOnlineGameComplete(FName sessionName, bool bWasSuccessful)
{
	UE_LOG(LogTemp, Log, TEXT("Session %s creation: %s."), (*sessionName.ToString()), (bWasSuccessful) ? (*FString("Successful")) : (*FString("Unsuccessful")));

	if (session.IsValid())
	{
		session->ClearOnStartSessionCompleteDelegate_Handle(OnStartSessionCompleteDelegateHandle);
	}

	if (bWasSuccessful)
	{
		UGameplayStatics::OpenLevel(GetWorld(), mapName, true, "listen");
	}
}


///Searching

void USGameInstance::findGamesSession(bool bIsLANSession, bool bIsPresence)
{
	findSession(GetPrimaryPlayerUniqueId(), bIsLANSession, bIsPresence);
}



void USGameInstance::findSession(TSharedPtr<const FUniqueNetId> userID, bool bIsLANSession, bool bIsPresence)
{
	if (session.IsValid() && userID.IsValid())
	{
		sessionSearch = MakeShareable(new FOnlineSessionSearch());

		sessionSearch->bIsLanQuery = bIsLANSession;
		sessionSearch->MaxSearchResults = searchesMaxNumber;
		sessionSearch->PingBucketSize = pingSize;

		if(bIsPresence)
		{
			sessionSearch->QuerySettings.Set(SEARCH_PRESENCE, bIsPresence, EOnlineComparisonOp::Equals);
		}
		TSharedRef<FOnlineSessionSearch> searchSettings = sessionSearch.ToSharedRef();

		OnFindSessionsCompleteDelegateHandle = session->AddOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegate);

		session->FindSessions(*userID, searchSettings);
		return;
	}
	
	onFindSessionComplete(false);
}

void USGameInstance::onFindSessionComplete(bool bWasSuccessful)
{
	UE_LOG(LogTemp, Log, TEXT("Found sessions: %s."), (bWasSuccessful) ? (*FString("Yes")) : (*FString("No")));

	if (session.IsValid())
	{
		session->ClearOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegateHandle);

		TArray<FOnlineSessionSearchResult> searchResults = sessionSearch->SearchResults;
		
		UE_LOG(LogTemp, Log, TEXT("Number of found sessions: %d."), searchResults.Num());

		UE_LOG(LogTemp, Log, TEXT("Sessions found:"));

		for (auto sessionFound : searchResults)
		{
			UE_LOG(LogTemp, Log, TEXT("%s"), *(sessionFound.Session.OwningUserName));
		}
	}
}


//Joining

void USGameInstance::joinGamesSession(FName sessionName, const FOnlineSessionSearchResult& SearchResult)
{
	const TSharedPtr<const FUniqueNetId> primaryUserID = GetPrimaryPlayerUniqueId();

	if(SearchResult.Session.OwningUserId != primaryUserID)
	{
		joinSession(primaryUserID, sessionName, SearchResult);
	}
}

bool USGameInstance::joinSession(TSharedPtr<const FUniqueNetId> userID, FName sessionName,
                                 const FOnlineSessionSearchResult& SearchResult)
{
	bool bJoinSuccessful = false;

	if (session.IsValid() && userID.IsValid())
	{
		onJoinSessionCompleteDelegateHandle = session->AddOnJoinSessionCompleteDelegate_Handle(onnJoinSessionCompleteDelegate);

		bJoinSuccessful = session->JoinSession(*userID, sessionName, SearchResult);
	}
	
	return bJoinSuccessful;
}

void USGameInstance::onJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type result)
{
	UE_LOG(LogTemp, Log, TEXT("Joining session %s, %d."), *(sessionName.ToString()), static_cast<int32>(result));

	if (session.IsValid())
	{
		session->ClearOnJoinSessionCompleteDelegate_Handle(onJoinSessionCompleteDelegateHandle);

		APlayerController* const userController = GetFirstLocalPlayerController();

		FString travelURL;

		if(userController && session->GetResolvedConnectString(sessionName, travelURL))
		{
			UE_LOG(LogTemp, Log, TEXT("Session URL: %s"), *(travelURL));

			userController->ClientTravel(travelURL, ETravelType::TRAVEL_Absolute);
		}
	}
}

void USGameInstance::onDestroySessionComplete(FName sessionName, bool bWasSuccessful)
{
	UE_LOG(LogTemp, Log, TEXT("Destroying session %s was %s."), *(sessionName.ToString()), (bWasSuccessful) ? (*FString("Successful")) : (*FString("Unsuccessful")));

	if(session.IsValid())
	{
		session->ClearOnDestroySessionCompleteDelegate_Handle(onDestroySessionCompleteDelegateHandle);

		if(bWasSuccessful)
		{
			//goes to the default game map after destroying the session.
			UGameplayStatics::OpenLevel(GetWorld(), FName(*UGameMapsSettings::GetGameDefaultMap()));
		}
	}
}
