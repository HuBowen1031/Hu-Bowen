#include <stdio.h>

int isLeapYear(int year) {
    if(year < 1582 || year > 9999) return -1;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) return 1;
    else return 0;
}

int main() {
    int year;
    scanf("%d", &year);

    switch (isLeapYear(year)) {
        case (-1):
            printf("ILLEGAL\n");
            break;

        case (0):
            printf("Not a leap year.\n");
            break;

        case(1):
            printf("Is a leap year.\n");
            break;
    }
}