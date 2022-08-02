// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprint.h"

//function that calculats the distance between two points
float UMyBlueprint::Distance(FVector A, FVector B)
{
	return (A - B).Size();
}