// Import all necessary C libraries
#include <stdio.h>
#include <stdbool.h>

//
#include "../WorldClockLib_2.0/WorldClockLib_2.0.h"

//
int main()
{
	// Definition of all necessary variables
	char* extractionOfEachTZ;
	char* stringContainingAllTZ;
	bool cmpResult;
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
		if(strcmp(extractionOfEachTZ, "Europe/Paris") == 0)
		{
			//
			cmpResult = true;
		}

		// 
    	extractionOfEachTZ = strtok(NULL, ":");

		// Incrementation of the 'i' incrementor's value
		i++;
	}

	//
	printf("\n%d", cmpResult);

	// Breaking 2 lines
	printf("\n\n");

	//
	return 0;
}