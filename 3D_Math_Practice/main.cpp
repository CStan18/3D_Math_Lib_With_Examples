#include <iostream>
#include "Vector.h"
#include "Point.h"

int main()
{
	// Character movement

	// p(6, 42, 19)
	Point startingPoint; 
	startingPoint.x = 6;
	startingPoint.y = 42;
	startingPoint.z = 19;

	// v(14, 23, 0)
	Vector movementVector;
	movementVector.x = 14;
	movementVector.y = 23;
	movementVector.z = 0;

	Point destinationPoint = startingPoint.AddVector(movementVector);

	std::cout << "Starting point:    ("
		<< startingPoint.x
		<< ", "
		<< startingPoint.y
		<< ", "
		<< startingPoint.z
		<< ")\n";

	std::cout << "Movement vector:   ("
		<< movementVector.x
		<< ", "
		<< movementVector.y
		<< ", "
		<< movementVector.z
		<< ")\n";

	std::cout << "------------------------------\n";

	std::cout << "Destination point: ("
		<< destinationPoint.x
		<< ", "
		<< destinationPoint.y
		<< ", "
		<< destinationPoint.z
		<< ")\n";

}