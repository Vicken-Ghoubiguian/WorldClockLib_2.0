//
enum OS {undefined, unix, macOS, windows, linux, android, freeBSD};

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

//
enum OS getCurrentOS();

//
char* getListOfAllKnownTZ();

// Funtion 'getDateTimeForWishedTZ' to get date and time for the wished timezone
char* getDateTimeForWishedTZ(char* wishedTZ);