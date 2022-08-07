#pragma once
#include "Vector.h"

// 3D point
class Point
{
public:
	Point AddVector(Vector v);

	float x, y, z;
};
