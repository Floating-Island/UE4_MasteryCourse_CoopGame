// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameInstance.h"



USGameInstance::USGameInstance(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	OnCreateSessionCompleteDelegate = FOnCreateSessionCompleteDelegate::CreateUObject(this, &USGameInstance::OnCreateSessionComplete);
	OnStartSessionCompleteDelegate = FOnStartSessionCompleteDelegate::CreateUObject(this, &USGameInstance::OnStartOnlineGameComplete);
}


