#include <stdio.h>
int main() {
    int n,m;
    int l = 0,r = 0;
    int i;
    int sum = 0;
    int min = 300000; //题目约定最大不超过这个数

    /*准备数据*/
    scanf("%d%d", &n, &m);
    int a[n];
    for (i = 0; i < n; ++i) {
        scanf("%d",(a + i));
    }

    /*初始求和*/
    r = m - 1; //直接把右边指针移动到目标位置
    for (i = l; i <= r; ++i) {
        sum += a[i];
    }
    if (sum < min) min = sum;
    while (r < n-1) {
        /*move left first*/
        sum -= a[l++];

        /*then right*/
        sum += a[++r];

        if (sum < min) min = sum;
    }

    printf("%d\n",min);
    return 0;
}