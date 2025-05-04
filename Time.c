#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main()
{
    time_t rawTime = 0;
    struct tm *timeInfo = NULL;
    char buffer[80] = { 0 };
    while(TRUE){
        time(&rawTime);
        timeInfo = localtime(&rawTime);
        printf("%d:%d:%d\n", timeInfo->tm_hour, timeInfo->tm_min, timeInfo->tm_sec);
        sleep(1);
        system("cls");
    }
    return 0;
}