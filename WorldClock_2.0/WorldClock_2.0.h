//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
enum OS {undefined, unix, macOS, windows, linux, android, freeBSD};

//
struct datetime
{
    int year;
    int month;
    int dmonth;
    int dweek;
    int hour;
    int minute;
    int second;
    char* amORpm;
    char* tz;

} datetime;

//
enum OS getCurrentOS();

//
char* getListOfAllKnownTZ();

//
char* getDateTimeForWishedTZ(char* wishedTZ);