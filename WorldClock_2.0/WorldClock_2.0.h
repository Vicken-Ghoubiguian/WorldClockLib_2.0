/*
    Definition of the 'OS' enum to determine the current operating system
*/

//
enum OS {undefined, unix, macOS, windows, linux, android, freeBSD};

//
enum OS getCurrentOS();

/*
    Definition of the 'datetime' struct to define and manipulate results
*/

//
struct datetime
{
    int year;
    int month;
    int dmonth;
    int nweek;
    int dweek;
    int hour;
    int minute;
    int second;

} datetime;

// Funtion 'getDateTimeForWishedTZ' to get date and time for the wished timezone
char* getDateTimeForWishedTZ(char* wishedTZ);

/*
    Definition of various useful functions
*/

//
char* getListOfAllKnownTZ();