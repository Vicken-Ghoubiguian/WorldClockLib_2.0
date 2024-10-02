/*
    Definition of the 'OS' enum to determine the current operating system
*/

//
enum OS {undefined, unix, macOS, windows, linux, android, freeBSD};

//
enum OS getCurrentOS();

/*
    Definition of the 'WorldClock_2_0' struct to define and manipulate results
*/

//
struct WorldClock_2_0
{
    int year;
    int month;
    int dmonth;
    int nweek;
    int dweek;
    int hour;
    int minute;
    int second;

} WorldClock_2_0;

// Funtion 'getWorldClock_2_0ForWishedTZ' to get date and time for the wished timezone
struct WorldClock_2_0 getWorldClock_2_0ForWishedTZ(char* wishedTZ);

// Funtion 'printfWorldClock_2_0' to display date and time from a struct WorldClock_2_0 object
void printfWorldClock_2_0(struct WorldClock_2_0 WorldClock_2_0ToDisplay);

/*
    Definition of various useful functions
*/

//
char* getListOfAllKnownTZ();