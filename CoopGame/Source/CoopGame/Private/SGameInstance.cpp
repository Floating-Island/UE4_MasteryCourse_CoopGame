// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameInstance.h"

#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"



USGameInstance::USGameInstance(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	OnCreateSessionCompleteDelegate = FOnCreateSessionCompleteDelegate::CreateUObject(this, &USGameInstance::OnCreateSessionComplete);
	OnStartSessionCompleteDelegate = FOnStartSessionCompleteDelegate::CreateUObject(this, &USGameInstance::OnStartOnlineGameComplete);
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

bool USGameInstance::hostSession(TSharedPtr<const FUniqueNetId> userID, FName sessionName, bool bIsLANSession,
                                 bool bIsPresence, int32 playerCapacity, FString mapName)
{
	IOnlineSubsystem* const onlineSubSystem = IOnlineSubsystem::Get();

	if(onlineSubSystem)
	{
		IOnlineSessionPtr session = onlineSubSystem->GetSessionInterface();

		if(session.IsValid() && userID.IsValid())
		{
			sessionSettings = MakeShareable(new FOnlineSessionSettings());

			configureSessionSettings(bIsLANSession, bIsPresence, playerCapacity);

			sessionSettings->Set(SETTING_MAPNAME, mapName, EOnlineDataAdvertisementType::ViaOnlineService);

			OnCreateSessionCompleteDelegateHandle = session->AddOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegate);

			return session->CreateSession(*userID, sessionName, *sessionSettings);
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Couldn't host session, no Online Subsystem present..."));
	return false;
}


