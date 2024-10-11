//
#include <stdio.h>

//
#include "../WorldClock_2.0/WorldClock_2.0.h"

//
int main()
{
	//
	enum OS currentOS = getCurrentOS();
	char wishedTimeZone[100];

	// Breaking 2 lines
	printf("\n\n");

	//
	printf("Please, write the timezone you want : ");
	scanf("%s", wishedTimeZone);
	printf("\n\n");

	//
	struct worldClock_2_0 resultWorldClock_2_0ForWishedTZ = getWorldClock_2_0ForWishedTZ(wishedTimeZone);

	//
	printf("%s : %s", wishedTimeZone, sprintfWorldClock_2_0(resultWorldClock_2_0ForWishedTZ));
	printf("\n\n");

	//
	return 0;
}