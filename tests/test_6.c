//
#include <stdio.h>

//
#include "../WorldClockLib_2.0/WorldClockLib_2.0.h"

//
int main()
{
	//
	printf("\n");

	//
	char* test = getListOfAllKnownTZ();

    //
    printf("%s", test);

	//
	printf("\n");

	//
	return 0;
}