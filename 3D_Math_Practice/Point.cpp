#include "Point.h"

// Vector addition
Point Point::AddVector(Vector v)
{
	Point destinationPoint;

	destinationPoint.x = x + v.x;
	destinationPoint.y = y + v.y;
	destinationPoint.z = z + v.z;

	return destinationPoint;
}

Vector Point::FindMovementVector(Point startPoint, Point endPoint)
{
	Vector movementVector;
	movementVector.x = endPoint.x - startPoint.x;
	movementVector.y = endPoint.y - startPoint.y;
	movementVector.z = endPoint.z - startPoint.z;

	return Vector();
}
