// Import all necessary C libraries
#include <stdio.h>

// Import the 'WorldClockLib_2.0' library
#include "../WorldClockLib_2.0/WorldClockLib_2.0.h"

//
int main()
{
	// Definition of the 'wishedTimeZone' variable to get the specific timezone to have its date and time
	char* wishedTimeZone = malloc(100 * sizeof(char));

	// Breaking 2 lines
	printf("\n\n");

	// Instrcutions bloc to get the specific timezone to have its date and time
	printf("Please, write the timezone you want : ");
	scanf("%s", wishedTimeZone);
	printf("\n\n");

	// Get the date and time of the specific timezone
	//struct worldClock_2_0 resultWorldClock_2_0ForWishedTZ = getWorldClock_2_0ForWishedTZ(wishedTimeZone);

	// Display the date and time of the specific timezone
	/*printf("%s", sprintfWorldClock_2_0(resultWorldClock_2_0ForWishedTZ));
	printf("\n\n");*/

	//
	return 0;
}