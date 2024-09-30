//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
#include "WorldClock_2.0.h"

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

// Function 
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
			printf("%s", s);

			//
			strcpy(&arrayOfTZ[i],s);
	}

	//
	pclose(cmd);

	//
	return arrayOfTZ;
}

// Funtion 'getDateTimeForWishedTZ' to get date and time for the wished timezone
char* getDateTimeForWishedTZ(char* wishedTZ)
{
	// Definition of all necessary variables
    char* dtChoosenTZ = malloc(30);
	char fullSize = strlen("TZ=") + strlen(" date") + strlen(" +%Y_%m_%d_%U_%u_%H_%M_%S") + strlen(wishedTZ);
	char c;
	int i = 0;
	int j = 0;
    FILE *cmd;
	char* extrArray;
	struct datetime resultDT;
	int valOfTrans = 0;

	// Definition of the bash command to have date and time for the choosen timezone
	char* completeCommand = (char*) malloc(fullSize);
	strcat(completeCommand, "TZ=");
	strcat(completeCommand, wishedTZ);
	strcat(completeCommand, " date");
	strcat(completeCommand, " +%Y_%m_%d_%U_%u_%H_%M_%S");

	// Execution of the command "TZ={wishedTZ} date +'%Y_%m_%d_%U_%u_%H_%M_%S'" to have the date and time for the wished timezone via the 'cmd' file
    cmd=popen(completeCommand, "r");

	//
    while((c = fgetc(cmd)) != EOF)
	{
			//
        	dtChoosenTZ[i] = c;

			//
			i++;
	}
	
	// Close the file 'cmd'
    pclose(cmd);

	//
	extrArray = strtok(dtChoosenTZ, "_");

	//
	while(extrArray != NULL) {

		//
		valOfTrans = extrArray - '0';

		//
		switch(j)
		{
			case 0 : resultDT.year = valOfTrans; break;
			case 1 : resultDT.month = valOfTrans; break;
			case 2 : resultDT.dmonth = valOfTrans; break;
			case 3 : resultDT.nweek = valOfTrans; break;
			case 4 : resultDT.dweek = valOfTrans; break;
			case 5 : resultDT.hour = valOfTrans; break;
			case 6 : resultDT.minute = valOfTrans; break;
			case 7 : resultDT.second = valOfTrans; break;
		}

		//
    	extrArray = strtok(NULL, "_");

		//
		j++;
   }

	// Return the date and time for the choosen timezone
    return dtChoosenTZ;
}