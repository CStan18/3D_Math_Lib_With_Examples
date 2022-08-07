#include "Formulas.h"
#include "math.h"
#include <iostream>

// Vector addition
// Adds vector to point
// Returns end point
Point Point::AddVector(Vector v)
{
	Point endPoint{};

	endPoint.x = x + v.x;
	endPoint.y = y + v.y;
	endPoint.z = z + v.z;

	return endPoint;
}

// Vector subtraction
// Subtracts two points
// Returns vector between points
Vector FindMovementVector(Point startPoint, Point endPoint)
{
	Vector movementVector{};
	movementVector.x = endPoint.x - startPoint.x;
	movementVector.y = endPoint.y - startPoint.y;
	movementVector.z = endPoint.z - startPoint.z;

	return Vector();
}

// Returns length of vector
float Vector::FindVectorMagnitude() const
{
	float length;

	length = sqrt(x * x + y * y + z * z);
	
	return length;
}

bool Vector::IsEqual(Vector otherVector)
{
	if (this->x == otherVector.x &&
		this->y == otherVector.y &&
		this->z == otherVector.z)
	{
		return true;
	}
	return false;
}

// Compares two vector arguments
// Returns longest
Vector CompareFindLongerVect(Vector vector1, Vector vector2)
{
	float vector1Mag = vector1.FindVectorMagnitude();
	float vector2Mag = vector2.FindVectorMagnitude();

	if (vector1.IsEqual(vector2))
	{
		return vector1;
	}

	if (vector1Mag > vector2Mag)
	{
		return vector1;
	}
	else if (vector1Mag < vector2Mag)
	{
		return vector2;
	}
		
	return Vector();
}

// Compares two vector arguments
// Returns shortest
Vector CompareFindShorterVect(Vector vector1, Vector vector2)
{
	float vector1Mag = vector1.FindVectorMagnitude();
	float vector2Mag = vector2.FindVectorMagnitude();

	if (vector1Mag < vector2Mag)
	{
		return vector1;
	}
	else if (vector1Mag > vector2Mag)
	{
		return vector2;
	}
	return Vector();
}




