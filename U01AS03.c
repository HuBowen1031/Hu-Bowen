#include <stdio.h>

#define PI 3;

int getPerimeter(int radius) {
    return 2*radius*PI;
}

int getArea(int radius) {
    return radius*radius*PI;
}

int main() {
    int radius;
    scanf("%d", &radius);

    printf("radius = %d\n",radius);
    printf("perimeter = %d\n", getPerimeter(radius));
    printf("area = %d\n", getArea(radius));
}