//
#include <stdio.h>

//
#include "../WorldClock_2.0/WorldClock_2.0.h"

//
int main()
{
	//
	enum OS currentOS = getCurrentOS();
	char** arrayOfTZ;

	arrayOfTZ = getListOfAllKnownTZ();

	printf("%s\n", arrayOfTZ[0]);

	//
	/*for (int i = 0; i < 3; i++)
	{
		//
		printf("%s\n", arrayOfTZ[i]);
	}*/

    // Breaking 2 lines
	printf("\n\n");

	//
	return 0;
}