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
typedef struct
{
   
} datetime;

//
char* getListOfAllKnownTZ()
{
	// 
	char* command = "awk '/^Z/ { print $2 }; /^L/ { print $3 }' /usr/share/zoneinfo/tzdata.zi";
	char* arrayOfTZ = malloc(100 * 200);
	int i = 0;

	//
	char s[100];

	//
    FILE *cmd=popen(command, "r");

	//
	while(fgets(s, 100, cmd))
	{
			//
			strcpy(&arrayOfTZ[i],s);
	}

	//
	pclose(cmd);

	//
	return arrayOfTZ;
}

//
char* getDateTimeForWishedTZ(char* wishedTZ)
{
	//
    char* dtChoosenTZ = malloc(30);
	char fullSize = strlen("TZ=") + strlen(" date") + strlen(wishedTZ);

	//
	char* completeCommand = (char*) malloc(fullSize);
	strcat(completeCommand, "TZ=");
	strcat(completeCommand, wishedTZ);
	strcat(completeCommand, " date");

	//
	char c;
	int i = 0;

	//
    FILE *cmd=popen(completeCommand, "r");

	//
    while((c = fgetc(cmd)) != EOF)
	{
			//
        	dtChoosenTZ[i] = c;

			//
			i++;
	}
	
	//
    pclose(cmd);

	//
    return dtChoosenTZ;
}

//
/*int main()
{
	//
	enum OS currentOS = getCurrentOS();

	//
	char* arrayOfTZ = getListOfAllKnownTZ();

	//
	for (int i = 0; i < 3; i++)
	{
		printf("%c\n", arrayOfTZ[i]);
	}

	//
	printf("\n\n\n\n");

	//
	char* resultDTForWishedTZ = getDateTimeForWishedTZ("Pacific/Honolulu");

	//
	printf("%s", resultDTForWishedTZ);

	//
	return 0;
}*/