// Fill out your copyright notice in the Description page of Project Settings.


#include "FileManage.h"

bool UFileManage::U51LoadText(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

bool UFileManage::U51SaveText(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}