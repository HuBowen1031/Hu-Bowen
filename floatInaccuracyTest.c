#include <stdio.h>
int main() {
    float a = 2.3;
    printf("%f\n", a);
    printf("%-15.8f\n", a);
    printf("%-15.9f\n", a);
    printf("%-15.10f\n", a);
    printf("%-15.11f\n", a);
}