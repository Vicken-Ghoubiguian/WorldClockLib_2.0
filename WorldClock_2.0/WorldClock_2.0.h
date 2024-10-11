//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
    Definition of various useful functions
*/

//
char* getListOfAllKnownTZ();

/*
    Definition of the 'OS' enum to determine the current operating system
*/

//
enum OS {undefined, unix, macOS, windows, linux, android, freeBSD};

//
enum OS getCurrentOS();

/*
    Definition of the 'worldClock_2_0' struct to define and manipulate results
*/

//
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

//
void printfWorldClock_2_0(struct worldClock_2_0 worldClock_2_0ToDisplay);

// Funtion 'sprintfWorldClock_2_0' to return date and time from a struct WorldClock_2_0 object as a string
char* sprintfWorldClock_2_0(struct worldClock_2_0 worldClock_2_0ToDisplay);

/*
    Definition of functions for conversions between 'worldClock_2_0', 'time_t' and 'tm'
*/