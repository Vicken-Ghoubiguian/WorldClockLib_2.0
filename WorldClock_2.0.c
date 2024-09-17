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
	#if defined(_WIN32)
    	return windows;
	#elif defined(_WIN64)
		return windows;
	#elif defined(__CYGWIN__)
		return windows;
	#elif defined(unix)
		return unix;
	#elif defined(__unix)
		return unix;
	#elif defined(__unix__)
		return unix;
	#elif defined(__APPLE__)
		return macOS;
	#elif defined(__MACH__)
		return macOS;
	#elif defined(__linux__)
		return linux;
	#elif defined(__FreeBSD__)
		return freeBSD;
	#elif defined(__ANDROID__)
		return android;
	#else
		return undefined;
	#endif
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
	enum OS currentOS = getCurrentOS();

	//
	char* resultDTForWishedTZ = getDateTimeForWishedOlsonTZ("Pacific/Honolulu");

	//
	printf("%s", resultDTForWishedTZ);

	//
	return 0;
}