#include <stdio.h>

int main() {
    int i;
    double n;
    double rates[12];
    double maxRate = 0.0;

    scanf("%lf", &n);

    for (i = 0; i < 12; ++i) {
        scanf("%lf", (rates + i));
        if (rates[i] > maxRate) maxRate = rates[i];
    }

    printf("%.2lf\n", maxRate * n);
    
}