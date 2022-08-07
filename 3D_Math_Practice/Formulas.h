#pragma once

// 3D vector
class Vector
{
public:
	float x, y, z;

	// Find length of vector called on
	// Cannot change vector
	float FindVectorMagnitude() const;

	bool IsEqual(Vector otherVector);

};

// 3D point
class Point
{
public:
	float x, y, z;

	// Add vector to point, returns vector to end point
	Point AddVector(Vector v);

};

void PrintPoint(Point point);
void PrintVector(Vector vector);
Point InitPoint();
Vector InitVector();

// Finds vector between points
Vector FindMovementVector(Point startPoint, Point endPoint);

Vector CompareFindLongerVect(Vector vector1, Vector vector2);
Vector CompareFindShorterVect(Vector vector1, Vector vector2);