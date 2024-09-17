#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//
	char* wishedTZ = "Pacific/Fakaofo";
    char result[30]={0x0};
	char fullSize = strlen("TZ=") + strlen(" date") + strlen(wishedTZ);

	//
	char* completeCommand = (char*) malloc(fullSize);
	strcat(completeCommand, "TZ=");
	strcat(completeCommand, wishedTZ);
	strcat(completeCommand, " date");

	//
    FILE *cmd=popen(completeCommand, "r");

	//
    while (fgets(result, sizeof(result), cmd) !=NULL)
           printf("%s", result);
	
	//
    pclose(cmd);

	//
    return 0;
}