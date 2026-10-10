#include <stdio.h>
int main() {
    int i;

    int n,k;
    scanf("%d", &n);
    scanf("%d", &k);

    int a[n];

    for (i = 0; i < n; ++i) {
        scanf("%d",a+i);
    }

    int l = 0, r = k;
    int max = 0;
    int sum = 0;

    for (i = l; i <= r; ++i) {
        sum += a[i];
    }
    max = sum;
    while (r < n-1) {
        sum -= a[l++];
        sum += a[++r];
        if (sum > max) max = sum;
    }

    printf("%d\n", max);
    return 0;
}