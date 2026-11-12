#include <stdio.h>
#include <string.h>

void doNothing() {
    return;
}

int main() {
    int result[20] = {0};
    char numbreA[15];
    char numbreB[15];
    scanf("%s %s", numbreA, numbreB);

    int i, j;
    int lenA = strlen(numbreA);
    int lenB = strlen(numbreB);


    //Deal with digit-by-digit multiplication, akin to human multiplication method.
    for (i = 0; i < lenA; ++i) {
        for (j = 0; j < lenB; ++j) {
            result[i + j] += (numbreA[lenA - 1 - i] - '0') * (numbreB[lenB - 1 - j] - '0');
        }
    }

    //Deal with overflow, e.g lower digit is 13, then it saves 3, and addd 1 to higher digit.
    for (i = 0; i < 19; ++i) { //19: the upper boundary.
        if (result[i] >= 10) {
            result [i + 1] += result[i] / 10;
            result[i] %= 10;
        }
    }
    for (j = 19; result[j] == 0; j--) {
        doNothing();
    }
    for (i = j; i >= 0; --i) {
        printf("%d", result[i]);
    }
    printf("\n");
}