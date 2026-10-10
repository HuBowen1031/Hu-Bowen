#include <stdio.h>
#define PI 3 //咱类型转换还没学，故先用3代替小数pi
int main() {
    int radius;
    int perimeter, area;
    printf("圆周长面积计算器\n请输入圆的半径(整数):");
    scanf("%d", &radius);
    perimeter = PI*(radius*2);
    area = PI*(radius*radius);
    printf("周长:%d,面积:%d",perimeter,area);
}