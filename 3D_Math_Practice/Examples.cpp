#include <iostream>
#include "Examples.h"
#include "Formulas.h"



void CharacterMovementExample()
{
	// p(6, 42, 19)
	Point startPoint{};
	startPoint.x = std::rand() % 10;
	startPoint.y = std::rand() % 10;
	startPoint.z = std::rand() % 10;

	// v(14, 23, 0)
	Vector movementVector{};
	movementVector.x = std::rand() % 10;
	movementVector.y = std::rand() % 10;
	movementVector.z = std::rand() % 10;

	Point endPoint = startPoint.AddVector(movementVector);

	std::cout << "Example 1: Basic Movement\n";
	std::cout << "   Starting point:    ("
		<< startPoint.x
		<< ", "
		<< startPoint.y
		<< ", "
		<< startPoint.z
		<< ")\n";

	std::cout << " + Movement vector:   ("
		<< movementVector.x
		<< ", "
		<< movementVector.y
		<< ", "
		<< movementVector.z
		<< ")\n";

	std::cout << "--------------------------------\n";

	std::cout << "   End point:         ("
		<< endPoint.x
		<< ", "
		<< endPoint.y
		<< ", "
		<< endPoint.z
		<< ")\n";
}

void FindVectorNeededExample()
{
	
	Point startPoint{};
	startPoint.x = std::rand() % 10;
	startPoint.y = std::rand() % 10;
	startPoint.z = std::rand() % 10;

	Point endPoint{};
	endPoint.x = std::rand() % 10;
	endPoint.y = std::rand() % 10;
	endPoint.z = std::rand() % 10;

	Vector movementVector{};
	movementVector.x = endPoint.x - startPoint.x;
	movementVector.y = endPoint.y - startPoint.y;
	movementVector.z = endPoint.z - startPoint.z;

	std::cout << "\nExample 2: Find Vector Between Points\n";

	std::cout << "   End point:         ("
		<< endPoint.x
		<< ", "
		<< endPoint.y
		<< ", "
		<< endPoint.z
		<< ")\n";

	std::cout << " - Starting point:    ("
		<< startPoint.x
		<< ", "
		<< startPoint.y
		<< ", "
		<< startPoint.z
		<< ")\n";

	std::cout << "--------------------------------\n";

	std::cout << "   Movement vector:   ("
		<< movementVector.x
		<< ", "
		<< movementVector.y
		<< ", "
		<< movementVector.z
		<< ")\n";


}
