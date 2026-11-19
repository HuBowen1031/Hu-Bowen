#include <stdio.h>

char octReversed[150000] = {0};

int main() {
    unsigned long long int hexNum;
    int n;
    int i;
    int j;
    int digitCount = 0;
    int octDigit;

    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        scanf("%x", &hexNum);
        if (hexNum == 0) {
            printf("0\n");
            continue;
        }
        octDigit = 0;
        digitCount = 0;
        while (hexNum != 0) {
            octDigit = hexNum & 0x7;
            hexNum = hexNum >> 3;
            octReversed[digitCount] = octDigit + '0';
            digitCount++;
        }

        for(j = digitCount - 1; j >= 0; --j) {
            putchar(octReversed[j]);
        }
        printf("\n");
    }
}