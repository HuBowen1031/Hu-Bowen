#include <stdio.h>
int main() {
    int prefix, clgID, publisherID, tefID, checkNum;
    printf("请输入ISBN号码:");
    scanf("%d-%d-%d-%d-%d",&prefix, &clgID, &publisherID, &tefID, &checkNum);
    printf("前缀号+组区号：%d-%d\n", prefix, clgID);
    printf("出版者号+书序号：%d-%d\n", publisherID, tefID);
    printf("校验码：%d\n", checkNum);
}