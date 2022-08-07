#pragma once
#include "Vector.h"

// 3D point
class Point
{
public:
	Point AddVector(Vector v);
	Vector FindMovementVector(Point startPoint, Point endPoint);

	float x, y, z;
};
