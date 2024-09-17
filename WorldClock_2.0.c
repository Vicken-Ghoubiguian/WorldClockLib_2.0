#include <stdio.h>
int main()
{
	//
    FILE *cmd=popen("TZ=Pacific/Fakaofo date", "r");

	//
    char result[30]={0x0};

	//
    while (fgets(result, sizeof(result), cmd) !=NULL)
           printf("%s\n", result);
	
	//
    pclose(cmd);

	//
    return 0;
}
