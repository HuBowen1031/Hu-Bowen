#include <stdio.h>

#define PI 3.14

double getArea(int r) {
    return r * r * PI;
}

double getLength(int r) {
    return 2 * PI * r;
}

int main() {
    int r; 
    scanf("%d", &r);
    double area = getArea(r);
    double length = getLength(r);
    int diameter = 2 * r;

    printf("直径=%d\n周长=%.2lf\n面积=%.2lf\n", diameter, length, area);
}