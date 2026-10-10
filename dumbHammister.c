#include <stdio.h>
int getSumOfEachDigit(int number) {
    int digitSum = 0;
    while (number > 0) {
        digitSum += number%10;
        number /= 10;
    }
    return digitSum;
}
int main() {
    int n,k;
    scanf("%d%d",&n,&k);

    int i;
    int max = 1;
    int valid = 0;
    for (i = 0; i < n; ++i) {
        max *= 10;
    }
    max -= 1;
    for (i = 1; i <= max; ++i) {
        if (getSumOfEachDigit(i) <= k) {
            valid += 1;
        }
    }
    printf("%d\n",valid);
    return 0;
}