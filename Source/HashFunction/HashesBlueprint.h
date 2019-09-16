// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HashesBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class HASHFUNCTION_API UHashesBlueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Adds floats", CompactNodeTitle = "Add Floats", Keywords = "Float Add"), Category = Game)
	static float AddFloats(float fA, float fB);
	
	
	
};
