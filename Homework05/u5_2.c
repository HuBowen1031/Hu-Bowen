#include <stdio.h>

int isSyncNumber(int number) {
    int count = 0;
    int digits[100];
    int i;
    while(number > 0) {
        digits[count] = number % 10;
        number /= 10;
        count++;
    } /*exit with (count - 1) as highest digit.*/
    for (i = 0; i < ((count - 1) / 2); ++i) {
        if (digits[i] != digits[count - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int judgeThis;
    scanf("%d", &judgeThis);

    if (isSyncNumber(judgeThis)) printf("%d is.\n", judgeThis);
    else printf("%d is not.\n", judgeThis);
}