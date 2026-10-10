#include <stdio.h>
int main() {
    double celsius, fahrenheit;
    printf("Please input a Celsius temperature:");
    scanf("%lf", &celsius);
    fahrenheit = (1.8*celsius) + 32;
    printf("THe corresponding Fahrenheit temperature is: %f\n", fahrenheit);
}