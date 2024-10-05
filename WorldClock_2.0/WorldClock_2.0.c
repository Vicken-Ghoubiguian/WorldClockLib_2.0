//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
#include "WorldClock_2.0.h"

//
void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

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

// Funtion 'getWorldClock_2_0ForWishedTZ' to get date and time for the wished timezone
struct worldClock_2_0 getWorldClock_2_0ForWishedTZ(char* wishedTZ)
{
	// Definition of all necessary variables
    char* worldClock_2_0ChoosenTZ = malloc(30);
	char fullSize = strlen("TZ=") + strlen(" date") + strlen(" +%Y_%m_%d_%U_%u_%H_%M_%S") + strlen(wishedTZ);
	char c;
	int i = 0;
	int j = 0;
    FILE *cmd;
	char* extrArray;
	struct worldClock_2_0 resultWorldClock_2_0;
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
        	worldClock_2_0ChoosenTZ[i] = c;

			// Incrementation of the 'i' incrementor's value
			i++;
	}
	
	// Close the file 'cmd'
    pclose(cmd);

	// Conversion of the first extract element of the WorldClock_2_0 to an integer
	extrArray = strtok(worldClock_2_0ChoosenTZ, "_");

	// Loop to extract all elements of the WorldClock_2_0 to an integer and put them in the 'resultWorldClock_2_0' struct WorldClock_2_0
	while(extrArray != NULL) {

		//valOfTrans = (int)extrArray;
		sscanf(extrArray, "%d", &valOfTrans);

		//
		switch(j)
		{
			case 0 : resultWorldClock_2_0.year = valOfTrans; break;
			case 1 : resultWorldClock_2_0.month = valOfTrans; break;
			case 2 : resultWorldClock_2_0.dmonth = valOfTrans; break;
			case 3 : resultWorldClock_2_0.nweek = valOfTrans; break;
			case 4 : resultWorldClock_2_0.dweek = valOfTrans; break;
			case 5 : resultWorldClock_2_0.hour = valOfTrans; break;
			case 6 : resultWorldClock_2_0.minute = valOfTrans; break;
			case 7 : resultWorldClock_2_0.second = valOfTrans; break;
		}

		// 
    	extrArray = strtok(NULL, "_");

		// Incrementation of the 'j' incrementor's value
		j++;
   }

	// Return the date and time for the choosen timezone
    return resultWorldClock_2_0;
}

//
char* printfWorldClock_2_0(struct worldClock_2_0 worldClock_2_0ToDisplay)
{
	//
	char yearAsString[3];
    char monthAsString[3];
    char dmonthAsString[3];
    char nweekAsString[3];
    char dweekAsString[3];
    char hourAsString[3];
    char minuteAsString[3];
    char secondAsString[3];

	//
	char* resultString = malloc(50 * sizeof(char));

	//
	tostring(yearAsString, worldClock_2_0ToDisplay.year);
	tostring(monthAsString, worldClock_2_0ToDisplay.month);
	tostring(dmonthAsString, worldClock_2_0ToDisplay.dmonth);
	tostring(nweekAsString, worldClock_2_0ToDisplay.nweek);
	tostring(dweekAsString, worldClock_2_0ToDisplay.dweek);
	tostring(hourAsString, worldClock_2_0ToDisplay.hour);
	tostring(minuteAsString, worldClock_2_0ToDisplay.minute);
	tostring(secondAsString, worldClock_2_0ToDisplay.second);

	//
	sprintf(resultString, "date : %s/%s/%s｜ time : %s:%s:%s｜ number of week in the year : %s｜ number of day in the week : %s", yearAsString, monthAsString, dmonthAsString, hourAsString, minuteAsString, secondAsString, nweekAsString, dweekAsString);

	//
	return resultString;
}