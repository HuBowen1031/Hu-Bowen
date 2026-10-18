#include <stdio.h>

int verifyDigit(int num) {
    int existCnt[10] = {0};
    int i;
    while (num != 0) {
        existCnt[num % 10]++;
        num /= 10;
    }

    for (i = 0; i < 10; ++i) {
        if (existCnt[i] > 1) return 0;
    }
    return 1;
}

int main() {
    int n;
    int flag = 0;
    long long int i;
    scanf("%d", &n);
    int minN = 1, maxN = 1;
    
    for (i = 1; i < n; ++i) {
        minN *= 10;
    }

    for (i = 0; i < n; ++i) {
        maxN *= 10;
    }
    maxN--;




    for (i = minN; i <= maxN; ++i) {
        if (i % (5*7*8*9) == 0 && verifyDigit(i)) {
            flag = 1;
            printf("%lld\n", i);
        }
    }

    if (!flag) printf("not exist\n");
}