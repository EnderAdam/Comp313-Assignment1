// Fill out your copyright notice in the Description page of Project Settings.


#include "ScaleVector.h"

//function that multiplies a vector by a scalard
FVector UScaleVector::ScaleVector(FVector vector, float scalar, bool touchingGround)
{
	return FVector(vector.X * scalar, vector.Y * scalar, vector.Z * scalar);
}
