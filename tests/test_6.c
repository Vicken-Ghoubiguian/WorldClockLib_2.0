//
#include <stdio.h>

//
#include "../WorldClockLib_2.0/WorldClockLib_2.0.h"

//
int main()
{
	//
	char* allOfTimezones = malloc(600 * (100 * sizeof(char)));

	// Breaking 2 lines
	printf("\n\n");

	//
	allOfTimezones = getListOfAllKnownTZ();

    //
    printf("%s", allOfTimezones);

	// Breaking 2 lines
	printf("\n\n");

	//
	return 0;
}