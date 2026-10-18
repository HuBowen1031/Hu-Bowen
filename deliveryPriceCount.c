#include <stdio.h>
int main() {
    int w, s;
    float p = 11;
    scanf("%d, %d", &w, &s);
    float discount = 0;
    if (s < 250) discount = 0;
    else if (s >= 250 && s < 500) discount = 0.02;
    else if (s >= 750 && s < 1000) discount = 0.05;
    else if (s >= 1000 && s < 1250) discount = 0.10;
    else discount = 0.15;

    printf("%5.2f\n", p * w * s * (1 - discount));

    switch (0) {
        case 0:
            break;
    }

    return 0;
}