//
#include <stdio.h>

//
#include "../WorldClock_2.0/WorldClock_2.0.h"

//
int main()
{
	//
	enum OS currentOS = getCurrentOS();

	//
	char* arrayOfTZ = getListOfAllKnownTZ();

	//
	for (int i = 0; i < 3; i++)
	{
		printf("%c\n", arrayOfTZ[i]);
	}

	//
	printf("\n\n\n\n");

	//
	char* resultDTForWishedTZ = getDateTimeForWishedTZ("Pacific/Honolulu");

	//
	printf("%s", resultDTForWishedTZ);

	//
	return 0;
}