#include "Formulas.h"
#include "math.h"

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

float Vector::FindVectorMagnitude() const
{
	float length;

	length = sqrt(x * x + y * y + z * z);
	
	return length;
}
