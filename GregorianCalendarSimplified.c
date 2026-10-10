#include <stdio.h>
const int dayTable[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //A normal year

int yearDayCount(int year) {
    /*triage:Julian or Gregorian?*/
    if (year < 1582) {
        if (year % 4 == 0) return 366;
        else return 365;
    }
    if (year == 1582) {
        return 355;
    }
    if (year > 1582) {
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) return 366;
        else return 365;
    }
}

int fromStartOfTheYearDayCount(int year, int month, int day) {
    int i;
    int days = 0;
    if (month == 1) {
        return day;
    }
    else if (month == 2) {
        return (31 + day);
    }
    else {
        for (i = 0; i < month - 1; ++i) {
            days += dayTable[i];
        } //这个月之前的
        
        days += day;

        /*闰年要加一！*/
        if ((year > 1582 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))) || (year < 1582 && year % 4 == 0)) {
            days++;
        }

        if ( year == 1582 && ((month > 10) || (month == 10 && day >= 15)) ) {
            days -= 10;
        }

        return days;
    }


}

int main() {
    int year, month, day;
    int daysFromTheStartOfAD = 0;
    int i;
    scanf("%d%d%d", &day, &month, &year);
    for (i = 1;i <= year - 1; ++i) {
        daysFromTheStartOfAD += yearDayCount(i);
    }
    daysFromTheStartOfAD += fromStartOfTheYearDayCount(year, month, day);
    daysFromTheStartOfAD--; /*For the record, the program counts the day to 1/1/1, which means the result needs to trim 1!*/ 
    printf("%d\n", daysFromTheStartOfAD);
}