// Fill out your copyright notice in the Description page of Project Settings.


#include "SLevelSelectionBoxWidget.h"

#include "HAL/FileManager.h"
#include "Misc/Paths.h"

TArray<FString> USLevelSelectionBoxWidget::GetAllMapNames(FString levelsFolder)
{
	TArray<FString> MapPaths;
	IFileManager::Get().FindFilesRecursive(MapPaths, *FPaths::ProjectContentDir(), TEXT("*.umap"), true, false, false);

	TArray<FString> MapNames = TArray<FString>();
	MapNames.Empty();

	for(FString mapPath : MapPaths)
	{
		//remove the path
		FString mapFile;
		mapFile.Empty();
		FString discard;
		mapPath.Split(levelsFolder, &discard, &mapFile);

		//remove the extension
		FString mapName;
		mapName.Empty();
		mapFile.Split(".", &mapName, &discard);

		//add map name to our array
		MapNames.Add(mapName);
	}
	return MapNames;
}
