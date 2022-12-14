#include "Formulas.h"
#include "math.h"
#include <iostream>

// Prints point
void PrintPoint(Point point)
{
	std::cout << point.x
		<< ", "
		<< point.y
		<< ", "
		<< point.z
		<< ")\n";
}

// Prints vector
void PrintVector(Vector vector)
{
	std::cout << vector.x
		<< ", "
		<< vector.y
		<< ", "
		<< vector.z
		<< ")\n";
}

// Creates point
Point InitPoint()
{
	Point point{};
	point.x = std::rand() % 10;
	point.y = std::rand() % 10;
	point.z = std::rand() % 10;

	return point;
}

// Creates vector
Vector InitVector()
{
	Vector vector{};
	vector.x = std::rand() % 10;
	vector.y = std::rand() % 10;
	vector.z = std::rand() % 10;

	return vector;
}

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

	return movementVector;
}

// Returns length of vector
float Vector::FindVectorMagnitude() const
{
	float length;

	length = sqrt(x * x + y * y + z * z);
	
	return length;
}

// Compares vectors, returns true if they are equivalent
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

// Vector addition
// Returns vector of sum
// Used to change direction
Vector AddVectors(Vector v1, Vector v2)
{
	Vector summedVector;
	summedVector.x = v1.x + v2.x;
	summedVector.y = v1.y + v2.y;
	summedVector.z = v1.z + v2.z;
	return summedVector;
}

// Scales vector by input
void Vector::ScaleVector(float scaleVal)
{
	this->x = x * scaleVal;
	this->y = y * scaleVal;
	this->z = z * scaleVal;
}

Vector Vector::Normalize()
{
	Vector normanlizedVect{};
	float vectMag = this->FindVectorMagnitude();

	if (vectMag > 0)
	{
		normanlizedVect.x = this->x / vectMag;
		normanlizedVect.y = this->y / vectMag;
		normanlizedVect.z = this->z / vectMag;
	}
	
	return normanlizedVect;
}





