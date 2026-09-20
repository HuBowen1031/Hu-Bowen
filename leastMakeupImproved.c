#include <stdio.h>
int main() {
    int n,k;
    int l = 0, r = 0;
    int rec[200005];
    int i;
    int currentMU = 0;
    int longest = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; ++i) {
        scanf("%d", rec + i);
    }

    /* 
    思路：
    r是"主动"，l是"被动"。

    每次r往前，先维护窗口，再计算长度。

    这样，每一步都有更新，包括最后。

    */

    while (r < n) {  // 也可以用 for, 反而更直观
        if (rec[r] == 0) {
            currentMU++;
        }
        
        while (currentMU > k) {
            if (rec[l] == 0) currentMU--;
            l++;
        }
        
        if ((r-l+1) > longest) longest = r-l+1;

        r++;

    }

    //if ((r-l) > longest) longest = r-l; //就不需要了：r必然会落到最后位置而且最大长度被更新

    printf("%d", longest);

    return 0;
}