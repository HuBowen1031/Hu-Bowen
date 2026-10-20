#include <stdio.h>
#include <math.h>

int sgn(int number) {
    if (number > 0) return 1;
    else if (number == 0) return 0;
    else return -1;
}

int main() {
    int a, b, c;
    int s;
    double delta;
    scanf("%dx^2 + %dx + %d = 0", &a, &b, &c);
    if (a == 0) {
    s = (double)c/(0-b);
    printf("不是二次方程。\n");
    printf("%d\n", s);
    }
    delta = b * b-4 * a * c;

    switch (sgn(delta)) {
        case 1 : {
            printf("2个不等实根。\n");
            printf("%lf, %lf\n", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
            break;
        }
        case 0 : {
            printf("2个相等实根。\n");
            printf("%lf\n", (double)(-b)/(2*a));
            break;
        }
        case -1 : {
            printf("2个共轭复根\n");
            break;
        }
    }
    return 0;
}