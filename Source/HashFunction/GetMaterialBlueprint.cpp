// Fill out your copyright notice in the Description page of Project Settings.


#include "GetMaterialBlueprint.h"
#include "Engine/ObjectLibrary.h"

TArray<UMaterial*> UGetMaterialBlueprint::GetAllMaterialsFromDirectory( FString directory )
{
    TArray<UMaterial*>* result = new TArray<UMaterial*>();
    
    UObjectLibrary *lib = UObjectLibrary::CreateLibrary(UMaterial::StaticClass(), false, true);
    lib->LoadAssetDataFromPath(directory);
    
    TArray<FAssetData> assetData;
    lib->GetAssetDataList(assetData);
    
    for (FAssetData asset : assetData) {
        UMaterial* mat = Cast<UMaterial>(asset.GetAsset());
        if (mat) {
            result->Add(mat);
        }
    }
    
    return *result;
}
