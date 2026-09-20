#include <stdio.h>
int main() {
    int a,b,c;
    printf("input a and b, we'll find the minimum:");
    scanf("%d%d",&a,&b);
    if (a>=b) c=b;
    else c=a;
    printf("%d",c);
}