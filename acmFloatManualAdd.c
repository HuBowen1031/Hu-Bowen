#include <stdio.h>

int GCD(int a, int b) {
    /*Get Greatest Common Divisor*/
    if(a % b != 0) {
        return GCD(b, a % b);
    }
    else return b;
}

int LCM(int a, int b) {
    return ((a * b) / GCD(a, b));
}

int main() {
    int numerators[10];
    int denominators[10];
    int i;
    int denomLCM = 1;
    int numerSum = 0;
    int finalcom;

    int n;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d/%d", numerators + i, denominators + i);
        denomLCM = LCM(denomLCM, denominators[i]);
    }
    for (i = 0; i < n; ++i) {
        numerSum += numerators[i] * (denomLCM / denominators[i]);
    }
    if (GCD(numerSum, denomLCM) != 1) {
        finalcom = GCD(numerSum, denomLCM);
        numerSum /= finalcom;
        denomLCM /= finalcom;
    }
    if (denomLCM == 1) {
        printf("%d\n", numerSum);
    }
    else {
        printf("%d/%d\n", numerSum, denomLCM);
    }
}