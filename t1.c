#include <stdio.h>
#include <string.h>
/*ERRONEOUS*/

unsigned char getChkCode(char *pid, int len) {
    int sum = 0;
    int i;
    for (i = 0; i < len; ++i) {
        sum += *(pid + i);
    }
    sum = sum & 0xff;
    return (char)sum;
}

char getTestCode(unsigned char chkCode) {
    char table[2] = {'B', 'A'};
    return table[chkCode % 2];
}

int getISBN13ChkCode(char id[], int len) {
    int i;
    int sum = 0;
    for (i = 0; i < len; ++i) {
        if (i % 2 == 0) sum += 3 * (id[i] - '0');
        else sum += id[i] - '0';
    }
    return sum;
}

int main() {
    int len = 0;
    char stuID[64];

    printf("please input your code:\n");

    scanf("%63s", stuID);
    while (strlen(stuID) != 13) {
        printf("length is not correct! try again\n");
        printf("please input your code:\n");
        scanf("%63s", stuID);
       
    }

    printf("Check Code is:0x%x\n", getChkCode(stuID, 13));
    printf("Test Code is: %c\n", getTestCode(getChkCode(stuID, 13)));
    printf("Your ID + isbn13 checkCode is:%s%d", stuID, getISBN13ChkCode(stuID, 13));
}