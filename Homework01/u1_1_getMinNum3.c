//修改例子1.5-3，从键盘依次输入3个整数，打印最小值
#include <stdio.h>
int getMinNum(int x, int y, int z) {
    int temp;
    if (x > y) {
        if (y > z) {
            temp = z;
        }
        else { //else y <= z
            temp = y;
        }
    }
    else { //else x <= y
        if (x > z) {
            temp = z;
        }
        else { //else x <= z
            temp = x;
        }
    }
    return temp;

}

int main() {
    int a,b,c;
    printf("input 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("min=%d\n",getMinNum(a, b, c));
}