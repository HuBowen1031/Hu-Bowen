#include <stdio.h>

#define PI 3

int getCirclePerimeter(int radius) {
    int perimeter = PI*(2*radius);
    return perimeter;
}

int getCircleArea(int radius) {
    int area = PI*(radius*radius);
    return area;
}

int main() {
    int radius;
    printf("圆周长面积计算器\n请输入圆的半径(整数):");
    scanf("%d", &radius);
    printf("周长:%d,面积:%d", getCirclePerimeter(radius), getCircleArea(radius));
}