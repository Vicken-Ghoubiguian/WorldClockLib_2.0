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
enum OS getCurrentOS();

// Definition of the 'worldClock_2_0' struct to define and manipulate results
struct worldClock_2_0
{
    int year;
    int month;
    int dmonth;
    int nweek;
    int dweek;
    int dyear;
    int hour;
    int minute;
    int second;
    char* timezone;

} worldClock_2_0;

// Funtion 'getWorldClock_2_0ForWishedTZ' to get date and time for the wished timezone
struct worldClock_2_0 getWorldClock_2_0ForWishedTZ(char* wishedTZ);

// Funtion 'sprintfWorldClock_2_0' to return date and time from a struct WorldClock_2_0 object as a string
char* sprintfWorldClock_2_0(struct worldClock_2_0 worldClock_2_0ToDisplay);

// Definition of the 'like_time_t' struct to add a date and time with its specific timezone as 'time_t'
struct like_time_t
{
    time_t dt_as_time_t;
    int nweek;
    char* timezone;

} like_time_t;

//
//struct worldClock_2_0 conversion_of_time_t_to_worldClock_2_0(struct like_time_t time_tToConvert);

//
//struct like_time_t conversion_of_worldClock_2_0_to_time_t(struct worldClock_2_0 worldClock_2_0ToConvert);

//
char* sprintfLike_time_t(struct like_time_t time_tToDisplay);

// Definition of the 'like_struct_tm' struct to add a date and time with its specific timezone as 'struct tm'
struct like_struct_tm
{
    struct tm dt_as_struct_tm;
    int nweek;
    char* timezone;

} like_struct_tm;

//
struct worldClock_2_0 conversion_of_struct_tm_to_worldClock_2_0(struct like_struct_tm structTmToConvert);

//
struct like_struct_tm conversion_of_worldClock_2_0_to_struct_tm(struct worldClock_2_0 worldClock_2_0ToConvert);

//
char* sprintfLike_struct_tm(struct like_struct_tm structTmToDisplay);
