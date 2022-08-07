#include <iostream>
#include "Examples.h"
#include "Formulas.h"

int main()
{
	// Seeds random num generators with current time
	std::srand(time(0));

	// Prints out examples
	CharacterMovementExample();
	FindMovementVectorExample();
	FindVectorMagnitudeExample();
	FindLongerVectorExample();
	FindShorterVectorExample();

}