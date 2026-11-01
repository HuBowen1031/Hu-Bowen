#include <stdio.h>

int main() {
    int i;  int count = 0; int input = 0;
    int split[20]={0}; //无法预知大小时设定一个稍大的数组
                       //且全部初始化为0
    scanf("%d", &input);
    while(input > 0) {
        split[count] = input%10;    
        input = input/10;
        count++;      //输入数据的位数变量
    }
    for (i=count-1; i>=0; i--)  {
        printf("%d ", split[i]);
    }  

}