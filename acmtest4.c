#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    long long d;
    double root1, root2;

    while (scanf("%d,%d,%d", &a, &b, &c) == 3) {
        // 判别式用 long long 计算，避免 b*b 和 4*a*c 在 int 下溢出
        d = 1LL * b * b - 4LL * a * c;

        // 无解：判别式小于 0；或 a、b 同时为 0（题目约定同样输出 x）
        if (d < 0 || (a == 0 && b == 0)) {
            printf("x\n");
            continue;          // 改用 continue，继续处理后面的数据
        }

        if (a == 0) {
            // 一次方程 bx + c = 0
            root1 = -(double)c / b;
            if (fabs(root1) < 0.005) root1 = 0.0;   // 避免输出 -0.00
            printf("%.2lf\n", root1);
            continue;
        }

        if (d == 0) {
            // 两个相等实根（浮点除法，不能再用整数除法）
            root1 = -(double)b / (2.0 * a);
            if (fabs(root1) < 0.005) root1 = 0.0;
            printf("%.2lf\n", root1);
        } else {
            // 两个不等实根，按公式顺序输出
            root1 = (-(double)b + sqrt((double)d)) / (2.0 * a);
            root2 = (-(double)b - sqrt((double)d)) / (2.0 * a);
            if (fabs(root1) < 0.005) root1 = 0.0;
            if (fabs(root2) < 0.005) root2 = 0.0;
            printf("%.2lf %.2lf\n", root1, root2);
        }
    }
    return 0;
}
