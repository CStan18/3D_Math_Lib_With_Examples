#include <iostream>
#include "Examples.h"
#include "Formulas.h"

void CharacterMovementExample()
{
	// Init point and vector
	Point startPoint{};
	startPoint.x = std::rand() % 10;
	startPoint.y = std::rand() % 10;
	startPoint.z = std::rand() % 10;

	Vector movementVector{};
	movementVector.x = std::rand() % 10;
	movementVector.y = std::rand() % 10;
	movementVector.z = std::rand() % 10;

	// Add vector to point
	Point endPoint = startPoint.AddVector(movementVector);

	// Print equation
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

void FindMovementVectorExample()
{
	// Init points
	Point startPoint{};
	startPoint.x = std::rand() % 10;
	startPoint.y = std::rand() % 10;
	startPoint.z = std::rand() % 10;

	Point endPoint{};
	endPoint.x = std::rand() % 10;
	endPoint.y = std::rand() % 10;
	endPoint.z = std::rand() % 10;

	// Calculate vector
	Vector movementVector{};
	movementVector.x = endPoint.x - startPoint.x;
	movementVector.y = endPoint.y - startPoint.y;
	movementVector.z = endPoint.z - startPoint.z;

	// Print equation
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

void FindVectorMagnitudeExample()
{
	std::cout << "\nExample 3: Find Vector Magnitude\n";

	// Init vector
	Vector movementVector{};
	movementVector.x = std::rand() % 10;
	movementVector.y = std::rand() % 10;
	movementVector.z = std::rand() % 10;

	// Print vector
	std::cout << "   Movement vector:   ("
		<< movementVector.x
		<< ", "
		<< movementVector.y
		<< ", "
		<< movementVector.z
		<< ")\n";

	// Calculate vector length
	float vectorLength = movementVector.FindVectorMagnitude();

	// Print vector equation
	std::cout << "Vector Magnitude = sqrt(" << movementVector.x <<
		"*" << movementVector.x <<
		" + " << movementVector.y <<
		"*" << movementVector.y <<
		" + " << movementVector.z <<
		"*" << movementVector.z << ")\n";

	std::cout << "    Vector Magnitude: " << vectorLength << "\n";
}
