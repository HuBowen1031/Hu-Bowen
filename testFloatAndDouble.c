#include <stdio.h>
int main() {
    long double a = 0.1+0.2;
    printf("%.30Lf\n",a);
    printf("%d",(a == 0.30000000000000004111111111));
}