#pragma once

// 3D vector
class Vector
{
public:
	float x, y, z;

	// Find length of vector called on
	// Cannot change vector
	float FindVectorMagnitude() const;
};

// 3D point
class Point
{
public:
	float x, y, z;

	// Add vector to point, returns vector to end point
	Point AddVector(Vector v);
};

// Finds vector between points
Vector FindMovementVector(Point startPoint, Point endPoint);