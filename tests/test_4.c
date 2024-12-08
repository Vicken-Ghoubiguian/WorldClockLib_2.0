//
#include <stdio.h>

//
#include "../WorldClockLib_2.0/WorldClockLib_2.0.h"

//
int main()
{
	// Definition of all necessary variables
	char* extractionOfEachTZ;
	char* stringContainingAllTZ;
	int i = 0;

	// Breaking 2 lines
	printf("\n\n");

	//
	stringContainingAllTZ = getListOfAllKnownTZ();

	//
	extractionOfEachTZ = strtok(stringContainingAllTZ, ":");

	//
	while(extractionOfEachTZ != NULL)
	{
		//
		printf("%s\n", extractionOfEachTZ);

		// 
    	extractionOfEachTZ = strtok(NULL, ":");

		// Incrementation of the 'i' incrementor's value
		i++;
	}

	// Breaking 2 lines
	printf("\n\n");

	//
	return 0;
}