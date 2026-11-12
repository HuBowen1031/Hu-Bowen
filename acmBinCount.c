#include <stdio.h>
int main() {
    int count = 0;
    int num;
    scanf("%d", &num);


    if (num == 0) {
        printf("1\n");
        return 0;
    }
    while (num > 0) {
        if (!(num % 2)) count++;
        num /= 2;
    }

    printf("%d\n",count);
}
