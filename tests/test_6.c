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
	char* allOfTimezones = getListOfAllKnownTZ();

    //
    printf("%s", allOfTimezones);

	//
	printf("\n");

	//
	return 0;
}