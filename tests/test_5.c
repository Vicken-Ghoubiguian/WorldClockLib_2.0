//
#include <stdio.h>

//
#include "../WorldClock_2.0/WorldClock_2.0.h"

//
int main()
{
    // Definition of the 'currentOS' variable to get the current OS enum as the current operating system
    enum OS currentOS;

    // Breaking 2 lines
	printf("\n\n");

    //
    currentOS = getCurrentOS();

    //
    switch(currentOS)
    {
        case unix_1 : printf("Unix 1\n\n"); break;
        case unix_2 : printf("Unix 2\n\n"); break;
        case unix_3 : printf("Unix 3\n\n"); break;
        case macOS_apple : printf("MacOS Apple\n\n"); break;
        case macOS_mach : printf("MacOS Mach\n\n"); break;
        case windows_32 : printf("Windows 32\n\n"); break;
        case windows_64 : printf("Windows 64\n\n"); break;
        case cygwin : printf("Cygwin\n\n"); break;
        case linux : printf("Linux\n\n"); break;
        case android : printf("Android\n\n"); break;
        case freeBSD : printf("FreeBSD\n\n"); break;
        default : printf("Unknown\n\n"); break;
    }

	//
	return 0;
}