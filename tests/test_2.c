//
#include <stdio.h>

//
#include "../WorldClock_2.0/WorldClock_2.0.h"

//
int main()
{
	//
	enum OS currentOS = getCurrentOS();
	char* arrayOfTZ = getListOfAllKnownTZ();
	char wishedTimeZone[100];

	//
	for (int i = 0; i < 3; i++)
	{
		//
		printf("%c\n", arrayOfTZ[i]);
	}

	//
	printf("\n\n\n\n");

	//
	printf("Please, write the timezone you want : ");
	scanf("%s", wishedTimeZone);
	printf("\n\n");

	//

	//
	printf("%s : ", wishedTimeZone);
	printf("\n\n");

	//
	return 0;
}