#include <stdio.h>
int hammister(n,k) {
    int i,j;
    int valid = 0;
    int number[n];
    int sum = 0;
    int highest = 0;

    /*初始化数组*/
    for (i=0;i<n;++i) { 
        number[i] = 0;
    }


    /*1位的情况快速处理*/
    if (n == 1 && k < 10) {
        return (k + 1);
    }
    else if (n == 1 && k >= 10) {
        return 10;
    }

    /*多位的情况，也就是n>1*/
    else {
        /*第一位快速处理*/
        if (k < 10) {
            valid = k+1;
        }
        else {
            valid = 10;
        }

        /*从第二位开始推*/
        for (i=1;i<n;++i) {
            highest = i; //逐位处理累加,先搞最高位

            /*把上次的草稿消掉*/
            for (j = 0; j < highest; ++j) {
                number[j] = 0;
            }

            /*进一位，显然这一个数符合条件，100....0*/
            number[highest] = 1; //让最高位最小
            sum = 1;
            valid++;
            
            for (j = 0; j < highest; ++j) {
                while (number[j] < 10 && sum <= k) {
                    number[j]++;
                    sum++;
                    valid++;
                }
                
            }

            //记得重置sum
        }
    }
}
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    hammister(n,k);
}
