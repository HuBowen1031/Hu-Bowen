#include <stdio.h>
int main() {
    int a,b;
    int sum=0;
    int i;
    

    printf("Please input two integers:\n");
    printf("a:");
    scanf("%d", &a);
    printf("\n");
    printf("b:");
    scanf("%d", &b);
    printf("\n");

    for (i=a;i<=b;++i) {
        sum += i; // sum = sum + i
    }

    printf("Result: %d\n", sum);
}