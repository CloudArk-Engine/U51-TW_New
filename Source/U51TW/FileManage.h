// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileManage.generated.h"

/**
 * 
 */
UCLASS()
class U51TW_API UFileManage : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
			static bool U51LoadText(FString FileNameA, FString& SaveTextA);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
			static bool U51SaveText(FString SaveTextB, FString FileNameB);
	
};
