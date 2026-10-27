#include <stdio.h>
#include <time.h>

int getTodaySecUTC() {
    int s = time(0);
    return (s % 86400);
}

int main() {
    int sec = getTodaySecUTC();
    /*判断am/pm*/
    int ap = 0; /*am by default*/
    if (sec / 3600 >= 12) ap = 1;
    else ap = 0;

    int hours, minutes, seconds;

    hours = sec / 3600 % 12;

    minutes = (sec - (hours * 3600)) / 60;

    seconds = sec % 60;

    if (hours == 0) hours = 12;

    if (ap) printf("UTC: %d:%d:%d(PM)\n", hours, minutes, seconds);
    else printf("UTC: %d:%d:%d(AM)\n", hours, minutes, seconds);
}