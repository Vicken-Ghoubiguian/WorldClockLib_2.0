//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
enum OS {undefined, unix, macOS, windows, linux, android, freeBSD};

//
enum OS getCurrentOS()
{
	//
	return undefined;
}

//
char* getDateTimeForWishedOlsonTZ(char* wishedOlsonTZ)
{
	//
    char* dtChoosenOlsonTZ = malloc(30);
	char fullSize = strlen("TZ=") + strlen(" date") + strlen(wishedOlsonTZ);

	//
	char* completeCommand = (char*) malloc(fullSize);
	strcat(completeCommand, "TZ=");
	strcat(completeCommand, wishedOlsonTZ);
	strcat(completeCommand, " date");

	//
	char c;
	int i = 0;

	//
    FILE *cmd=popen(completeCommand, "r");

	//
    while ((c = fgetc(cmd)) != EOF)
	{
			//
        	dtChoosenOlsonTZ[i] = c;

			//
			i++;
	}
	
	//
    pclose(cmd);

	//
    return dtChoosenOlsonTZ;
}

//
int main()
{
	//
	char* resultDTForWishedTZ = getDateTimeForWishedOlsonTZ("Pacific/Honolulu");

	//
	printf("%s", resultDTForWishedTZ);

	//
	return 0;
}