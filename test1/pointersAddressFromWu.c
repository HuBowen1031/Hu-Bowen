#include<stdio.h>
int main(){
    double a[10];
    double *p1,*p2;
    int n;
    scanf("%d",&n);
    if(n<1||n>9){
        printf("input error");
        return 0;
    }
    p1=a; p2=&a[n];
    unsigned long long addr1 = (unsigned long long)&p1;
    unsigned long long addr2 = (unsigned long long)&p2;
    unsigned int diff= addr2 - addr1;
    printf("%d",diff);
    return 0;
}