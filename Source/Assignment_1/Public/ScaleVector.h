// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScaleVector.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT_1_API UScaleVector : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	//function that multiplies a vector by a scalar
		UFUNCTION(BlueprintCallable, Category = "ScaleVector")
		static FVector ScaleVector(FVector vector, float scalar);
	
};
