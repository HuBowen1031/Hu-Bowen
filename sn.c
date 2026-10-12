#include <stdio.h>
int main() {
    int k;
    int n;
    double sum = 0;
    scanf("%d", &k);

    for (n = 1; sum <= k; n++) {
        sum += (1.0/n);
        //printf("added %f, now sum is %f and n is %d\n", (1.0/n),(sum),n);
    }
    n--;
    printf("%d", n);
}