#include <stdio.h>

double getAverage(int numbres[]) {
    /*Hard-encoded as 6 numbers.*/
    int i;
    int sum = 0;

    for (i = 0; i < 6; ++i) {
        sum += numbres[i];
    }
    return ((double)sum / 6);
}

double getVariance(int numbres[], double average) {
    double sum = 0;
    int i; 
    for (i = 0; i < 6; ++i) {
        sum += (numbres[i] - average) * (numbres[i] - average);
    }
    return (sum / 6);
}

int main() {
    int i;
    int j;
    int numbres[6];
    double var, avg;
    int n;
    scanf("%d", &n);

    for (j = 0; j < n; ++j) {
        for (i = 0; i < 6; ++i) {
            scanf("%d", numbres + i);
        }
        avg = getAverage(numbres);
        var = getVariance(numbres, avg);
        printf("%.2lf %.2lf\n", avg, var);
    }

    
}