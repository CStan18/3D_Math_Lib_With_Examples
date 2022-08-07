#include <iostream>
#include "Examples.h"
#include "Formulas.h"

void CharacterMovementExample()
{
	// Init point and vector
	Point startPoint{};
	startPoint = InitPoint();

	Vector movementVector{};
	movementVector = InitVector();

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
	startPoint = InitPoint();

	Point endPoint{};
	endPoint = InitPoint();

	// Calculate vector
	Vector movementVector{};
	movementVector = FindMovementVector(startPoint, endPoint);

	// Print equation
	std::cout << "\nExample 2: Find Vector Between Points\n";

	std::cout << "   End point:         (";
	PrintPoint(endPoint);
		

	std::cout << " - Starting point:    (";
	PrintPoint(startPoint);

	std::cout << "--------------------------------\n";

	std::cout << "   Movement vector:   (";
	PrintVector(movementVector);

}

void FindVectorMagnitudeExample()
{
	std::cout << "\nExample 3: Find Vector Magnitude\n";

	// Init vector
	Vector movementVector{};
	movementVector = InitVector();

	// Print vector
	std::cout << "   Movement vector:   (";
	PrintVector(movementVector);

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

void FindLongerVectorExample()
{
	std::cout << "\nExample 4: Comparing 2 vectors, find longest\n";
	
	Vector longestVector;
	Vector vector1 = InitVector();
	Vector vector2 = InitVector();

	std::cout << "   Vector 1:   (";
	PrintVector(vector1);

	std::cout << "   Vector 1 mag: " << vector1.FindVectorMagnitude()
		<< "\n";
	std::cout << "   Vector 2:   (";
	PrintVector(vector2);

	std::cout << "   Vector 2 mag: " << vector2.FindVectorMagnitude()
		<< "\n";

	longestVector = CompareFindLongerVect(vector1, vector2);
	
	if (vector1.IsEqual(vector2))
	{
		std::cout << "Vectors are equal\n";
	}
	else if (longestVector.IsEqual(vector1))
	{
		std::cout << "Vector 1 has greater magnitude\n";
	}
	else
	{
		std::cout << "Vector 2 has greater magnitude\n";
	}
}

void FindShorterVectorExample()
{

}
