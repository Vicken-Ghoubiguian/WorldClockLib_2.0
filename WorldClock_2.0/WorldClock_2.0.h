//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function 'displaytListOfAllKnownTZ' to display all available timezones
void displaytListOfAllKnownTZ();

// Function 'getListOfAllKnownTZ' to get all available timezones
//char** getListOfAllKnownTZ();

// Definition of the 'OS' enum to determine the current operating system
enum OS {undefined, unix, macOS, windows, linux, android, freeBSD};

//
//enum OS getCurrentOS();

// Definition of the 'worldClock_2_0' struct to define and manipulate results
struct worldClock_2_0
{
    int year;
    int month;
    int dmonth;
    int nweek;
    int dweek;
    int hour;
    int minute;
    int second;

} worldClock_2_0;

// Funtion 'getWorldClock_2_0ForWishedTZ' to get date and time for the wished timezone
struct worldClock_2_0 getWorldClock_2_0ForWishedTZ(char* wishedTZ);

// Funtion 'sprintfWorldClock_2_0' to return date and time from a struct WorldClock_2_0 object as a string
char* sprintfWorldClock_2_0(struct worldClock_2_0 worldClock_2_0ToDisplay);

//
struct tm conversion_of_worldClock_2_0_to_struct_tm(struct worldClock_2_0 worldClock_2_0ToConvert);

//
struct worldClock_2_0 conversion_of_struct_tm_to_worldClock_2_0(struct tm structTmToConvert);

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