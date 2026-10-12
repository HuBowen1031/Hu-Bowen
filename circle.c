#include <stdio.h>

#define PI 3

int main () {
    int radius;
    scanf("%d", &radius);
    printf("%d, %d", 2*PI*radius, PI*radius*radius);
}