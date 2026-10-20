#include <stdio.h>
int main() {
    int w, s;
    float p = 11;
    scanf("%d, %d", &w, &s);
    float discount = 0.15;
    switch (s / 250) {
        case 0:
            discount = 0;
            break;
        case 1:
            discount = 0.02;
            break;
        case 2:
            discount = 0.05;
            break;
        case 3:
            discount = 0.08;
            break;
        case 4:
            discount = 0.10;
            break;


    }

    printf("%5.2f\n", p * w * s * (1 - discount));

}