// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetMaterialBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class HASHFUNCTION_API UGetMaterialBlueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
    UFUNCTION(BlueprintPure, meta = (DisplayName = "Get All Materials from Directory", Keywords = "Get Material"), Category = Game)
    static TArray<UMaterial*> GetAllMaterialsFromDirectory( FString directory );
	
	
};
