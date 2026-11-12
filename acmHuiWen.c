#include <stdio.h>

int main() {
    int digits[10000] = {0};
    int i, j;
    unsigned long long int num;
    scanf("%lld", &num);

    
    for (i = 0; num > 0; ++i) {
        digits[i] = num % 10;
        num /= 10;
    }

    for (j = 0; j <= i / 2; j++) {
        if (digits[j] != digits[i - 1 - j]) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}