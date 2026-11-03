#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int realA, realB;
    int *a = &realA, *b = &realB;
    
    scanf("%d%d", a, b);
    swap(a, b);
    printf("%d %d\n", *a, *b);
    return 0;
} 
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
