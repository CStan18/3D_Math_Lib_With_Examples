#include <iostream>
#include "Examples.h"
#include "Formulas.h"

Vector vector1 = InitVector();
Vector vector2 = InitVector();


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
	std::cout << "   Starting point:    (";
	PrintPoint(startPoint);

	std::cout << " + Movement vector:   (";
	PrintVector(movementVector);

	std::cout << "--------------------------------\n";

	std::cout << "   End point:         (";
	PrintPoint(endPoint);
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
	std::cout << "\nExample 5: Comparing 2 vectors, find shortest\n";

	Vector shortestVector;
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

	shortestVector = CompareFindShorterVect(vector1, vector2);

	if (vector1.IsEqual(vector2))
	{
		std::cout << "Vectors are equal\n";
	}
	else if (shortestVector.IsEqual(vector1))
	{
		std::cout << "Vector 1 has less magnitude\n";
	}
	else
	{
		std::cout << "Vector 2 has less magnitude\n";
	}
}

void ScaleVectorExample()
{
	float scaleVal = std::rand() % 5;

	std::cout << "\nExample 6: Scaling vector\n";
	std::cout << "   Vector 1:   (";
	PrintVector(vector1);
	std::cout << " * Scale value: " << scaleVal << "\n";
	std::cout << "--------------------------------\n";
	vector1.ScaleVector(scaleVal);

	std::cout << "  Vector 1 Scaled: (";
	PrintVector(vector1);

}

void NormalizeExample()
{
	std::cout << "\nExample 7: Normalizing vector\n";
	std::cout << "   Vector:   (";
	PrintVector(vector1);
	std::cout << "/ by magnitude: " << vector1.FindVectorMagnitude() << "\n";
	vector1 = vector1.Normalize();
	std::cout << "Normalized: (";
	PrintVector(vector1);
	std::cout << "Length should now be 1: " << vector1.FindVectorMagnitude() << "\n";
}


