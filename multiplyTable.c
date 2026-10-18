#include <stdio.h>
int main() {
    int n;
    int i,j;

    scanf("%d", &n);

    if (!(n >= 1 && n <= 9)) {
        printf("input error\n");
        return 0;
    }

    printf("\t");
    for (i = 1; i <= n; ++i) {
        printf("%d\t", i);
    }
    printf("\n");

    for (i = 1; i <= n; ++i) {
        printf("%d\t", i);
        for (j = 1; j <= i; ++j) {
            printf("%dx%d=%d\t", j, i, (i * j));
        }
        printf("\n");
    }
}