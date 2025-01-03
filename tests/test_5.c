// Import all necessary C libraries
#include <stdio.h>

// Import the 'WorldClockLib_2.0' library
#include "../WorldClockLib_2.0/WorldClockLib_2.0.h"

//
int main()
{
    // Breaking 2 lines
	printf("\n\n");

    // Definition of the 'currentInterpreter' variable to get the current interpreter enum with the 'getCurrentInterpreter' function to obtain it
    enum interpreter currentInterpreter = getCurrentInterpreter();

    // Selecting the case corresponding of the 'currentInterpreter' value
    switch(currentInterpreter)
    {
        case sh : printf("Bourne shell\n\n"); break;
        case ash : printf("Almquist shell\n\n"); break;
        case dash : printf("Debian Almquist shell\n\n"); break;
        case bash : printf("Bash\n\n"); break;
        case ksh : printf("KornShell\n\n"); break;
        case zsh : printf("Z shell\n\n"); break;
        case csh : printf("C shell\n\n"); break;
        case tcsh : printf("TENEX C shell\n\n"); break;
        case ch : printf("Ch shell\n\n"); break;
        case eshell : printf("Emacs shell\n\n"); break;
        case fish : printf("Friendly interactive shell\n\n"); break;
        case pwsh : printf("PowerShell\n\n"); break;
        case rc : printf("rc shell\n\n"); break;
        case sash : printf("Stand-alone shell\n\n"); break;
        case scsh : printf("Scheme Shell\n\n"); break;
        default : printf("Unknown\n\n"); break;
    }

	//
	return 0;
}