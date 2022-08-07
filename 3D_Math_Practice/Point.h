#pragma once
#include "Vector.h"

// 3D point
class Point
{
public:
	Point AddVector(Vector v);

	float x, y, z;
};

// Vector addition
Point Point::AddVector(Vector v)
{
	Point destinationPoint;

	destinationPoint.x = x + v.x;
	destinationPoint.y = y + v.y;
	destinationPoint.z = z + v.z;

	return destinationPoint;
}