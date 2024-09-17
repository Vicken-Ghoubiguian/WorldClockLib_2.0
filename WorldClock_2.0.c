//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
char* getDateTimeForWishedOlsonTZ(char* wishedOlsonTZ)
{
	//
	char* wishedTZ = "Pacific/Fakaofo";
    char* dtChoosenOlsonTZ = malloc(30);
	char fullSize = strlen("TZ=") + strlen(" date") + strlen(wishedTZ);

	//
	char* completeCommand = (char*) malloc(fullSize);
	strcat(completeCommand, "TZ=");
	strcat(completeCommand, wishedTZ);
	strcat(completeCommand, " date");

	//
    FILE *cmd=popen(completeCommand, "r");

	//
    while (fgets(dtChoosenOlsonTZ, sizeof(dtChoosenOlsonTZ), cmd) !=NULL)
           printf("%s", dtChoosenOlsonTZ);
	
	//
    pclose(cmd);

	//
    return dtChoosenOlsonTZ;
}

//
int main()
{
	//
	char* test = getDateTimeForWishedOlsonTZ("Pacific/Fakaofo");

	//
	return 0;
}