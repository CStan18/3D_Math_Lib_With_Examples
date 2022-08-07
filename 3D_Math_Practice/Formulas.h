#pragma once

// 3D vector
class Vector
{
public:
	float x, y, z;

	// Find length of vector called on
	// Cannot change vector
	float FindVectorMagnitude() const;

	// Compares this vector to another
	// Returns true if equivalent
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
//Prints point
void PrintPoint(Point point);

//Prints vector
void PrintVector(Vector vector);

// Initializes point
Point InitPoint();

// Initializes vector
Vector InitVector();

// Finds vector between points
Vector FindMovementVector(Point startPoint, Point endPoint);

// Input 2 vector arguments
// Returns longest vector
Vector CompareFindLongerVect(Vector vector1, Vector vector2);

// Input 2 vector arguments
// Returns shortest vector
Vector CompareFindShorterVect(Vector vector1, Vector vector2);