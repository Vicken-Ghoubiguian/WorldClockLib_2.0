// Import all necessary C libraries
#include <stdio.h>
#include <stdbool.h>

//
#include "../WorldClockLib_2.0/WorldClockLib_2.0.h"

//
int main()
{
	// Definition of all necessary variables
	bool isWishedTZExistOrNot;

	// Breaking 2 lines
	printf("\n\n");

	//
	isWishedTZExistOrNot = isWishedTZExist("Europe/Paris");

	//
	printf("\n%d", isWishedTZExistOrNot);

	// Breaking 2 lines
	printf("\n\n");

	//
	return 0;
}