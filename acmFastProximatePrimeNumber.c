#include <stdio.h>

int isPrime(int numbre) {
    int i;
    if (numbre <= 1) return 0;
    if (numbre == 2) return 1;
    if (numbre % 2 == 0) return 0;

    for (i = 3; i <= numbre / i; i += 2) {
        if (numbre % i == 0) {
            return 0;
        } 
    }
    return 1;
}

int main() {
    int n; 
    int i, j;
    int m, k;
    int cnt = 0;

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d%d", &m, &k);
        j = m + 1;
        cnt = 0;
        while (cnt < k) {
            if (isPrime(j)) {
                cnt++;
                printf("%d ", j);
            }
            j++;
        }
        printf("\n");
    }
}