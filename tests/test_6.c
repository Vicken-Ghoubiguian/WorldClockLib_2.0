// Import all necessary C libraries
#include <stdio.h>
#include <stdbool.h>

//
#include "../WorldClockLib_2.0/WorldClockLib_2.0.h"

//
int main()
{
	// Definition of all necessary variables
	char* wishedTimeZone = malloc(100 * sizeof(char));
	bool isWishedTZExistOrNot;

	// Breaking 2 lines
	printf("\n\n");

	// Instrcutions bloc to get the specific timezone to have its date and time
	printf("Please, write the timezone you want : ");
	scanf("%s", wishedTimeZone);
	printf("\n\n");

	//
	isWishedTZExistOrNot = isWishedTZExist(wishedTimeZone);

	//
	printf("\n%d", isWishedTZExistOrNot);

	// Breaking 2 lines
	printf("\n\n");

	//
	return 0;
}