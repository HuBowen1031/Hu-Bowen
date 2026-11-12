#include <stdio.h>

int main() {
    int i;
    int j;
    int n;
    int a, b, c;
    scanf("%d", &n);
    int stat = 0;
    

    for (j = 0; j < n; ++j) {
        stat = 0;
        scanf("%d%d%d", &a, &b, &c);
        for (i = 1000; i <= 9999; ++i) {
            if (i % a == 0 && (i + 1) % b == 0 && (i + 2) % c == 0) {
                printf("%d\n", i);
                stat = 1;
                break;
            }
        }
        if (!stat) printf("Impossible\n");
    }
}