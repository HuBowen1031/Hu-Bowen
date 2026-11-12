#include <stdio.h>
#include <time.h>
#include <memory.h>

int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int getDaysofMonth(int year, int month)
{
    int daysofmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2)
        return daysofmonth[month - 1] + isLeapYear(year);
    else
        return daysofmonth[month - 1];
}

int getWeekDay(int year, int mon, int day)
{
    int wday;
    struct tm mytm;
    memset(&mytm, 0, sizeof(mytm));
    mytm.tm_year = year - 1900;
    mytm.tm_mon = mon - 1;
    mytm.tm_mday = day;
    mktime(&mytm);
    wday = mytm.tm_wday;
    if (wday == 0) wday = 7;
    return wday;
}

void getCalendar(int year, int month, int *weeks)
{
    /*输入类似2019,12的年和月，将该月的月历输出到weeks指针所指的数组中；
    这个数组大小设定为42，因为每个月最多可能属于6个星期；
    将（1~getDaysofMonth的得到该月最大天数）填入这个数组；
    空白的地方填0或-1；
    该函数需要调用后面的getWeekDay得到1号的星期值。*/
    int i;
    int start = getWeekDay(year, month, 1) - 1;
    for (i = 0; i < getDaysofMonth(year, month); ++i) {
        *(weeks + start + i) = i;
    }
}

void printCalendar(int month, int *weeks) {
    char holiday_mm[] = {1,1,1,5,5,5,10,10,10,10,10,10,10};
    char holiday_dd[] = {1,2,3,1,2,3, 1, 2, 3, 4, 5, 6, 7};
    int  holiday_num = 13;
    char *wname[]={"MON", "TUE", "WED", "THU", "FRI", "SAT","SUN" };
    int i,j,k = 0, hdh = 0;

    for (i = 0; i < 7; ++i) printf("%s\t", wname[i]);
    printf("\n");

    for (i = 0; i < 6; ++i) {
        for (j = 0; j < 7; ++j) {
            if (weeks[k] == 0) {
                printf("\t");
                k++;
                continue;
            }
            if (j == 6 || j == 5) {
                printf("%d(@)\t", weeks[k]);
                k++;
            }
            else if (month == holiday_mm[hdh] && (k + 1) == holiday_dd[hdh]) {
               if (!(j == 6) && !(j == 5)) {
                printf("%d(*)\t", weeks[k]);
                k++;
               }
                hdh++;
            }
            else {
                printf("%d\t", weeks[k]);
                ++k;
            }
            
            
        }
        printf("\n");
    }

}

int main() {
    int weeks[42] = {0};
    int year, month;
    printf("Please input the year and month:");
    scanf("%d%d", &year, &month);
    getCalendar(year, month, weeks);
    printCalendar(month, weeks);
}
