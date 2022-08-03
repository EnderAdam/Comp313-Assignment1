// Fill out your copyright notice in the Description page of Project Settings.


#include "ScaleVector.h"

//function that multiplies a vector by a scalar
FVector UScaleVector::ScaleVector(FVector vector, float scalar, bool isTouchingGround)
{
	//the vector is multiplied by the scalar
	//if the object is touching the ground, it should multiple by a bigger number to move the same distance
	//so we have a boolean to check for that.
	if (isTouchingGround) {
		float biggerScalar = scalar * 4.0;
		return FVector(vector.X * biggerScalar, vector.Y * biggerScalar, vector.Z * biggerScalar);
	}
	else {
		return FVector(vector.X * scalar, vector.Y * scalar, vector.Z * scalar);
	}
}
