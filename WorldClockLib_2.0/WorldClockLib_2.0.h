// Import all necessary C libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

// Function 'getListOfAllKnownTZ' to get all available timezones
char* getListOfAllKnownTZ();

// Function 'isWishedTZExist' to check if the 'wishedTZ' timezone exists or not
bool isWishedTZExist(char* wishedTZ);

// Definition of the 'OS' enum to determine the current operating system
enum OS {undefined, unix_1, unix_2, unix_3, macOS_apple, macOS_mach, windows_32, windows_64, cygwin, linux, android, freeBSD};

// Definition of the 'getCurrentOS' to return the current operating system as 'enum OS'
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

// Funtion 'getWorldClock_2_0ForWishedTZ' to get date and time for the wished timezone as struct WorldClock_2_0 object
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

// Funtion 'getLike_time_tForWishedTZ' to get date and time for the wished timezone as Like_struct_tm struct
struct like_time_t getLike_time_tForWishedTZ(char* wishedTZ);

// Funtion 'sprintfLike_time_t' to return date and time from a struct like_time_t object as a string
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

// Definition of the 'time_zone_abbreviations' struct to determine if current time of wished timezone is DST or not
struct time_zone_abbreviations
{
    char* tz_abr;
    int is_dst;

} time_zone_abbreviations;

// Definition of the 'tz_abr_s' which is an array of 'struct time_zone_abbreviations' values
const struct time_zone_abbreviations tz_abr_s[50];

//
//const struct worldClock_2_0 nullWorldClock_2_0 = {-1,-1,-1,-1,-1,-1,-1,-1,-1,"-1"};

//
