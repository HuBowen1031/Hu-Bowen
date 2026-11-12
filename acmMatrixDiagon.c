#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    int i,j,k;
    scanf("%d", &n);
    int sum;

    for (i = 0; i < n; ++i) {
        sum = 0;
        scanf("%d", &m);
        int *a = malloc(m * m * sizeof(int));
        for (j = 0; j < m * m; ++j) scanf("%d", a + j);

        for (k = 0; k < m; ++k) {
            sum += a[k * m + k] + a[m * (k + 1) - k - 1];
        }
        printf("%d\n", sum);
    }
}