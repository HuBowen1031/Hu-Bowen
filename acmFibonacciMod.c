#include <stdio.h>


unsigned long long int recursiveFibonacci(int n) {
    if (n == 2 || n == 1) return 1;
    return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
}

unsigned long long int iterFibonacci(int n) {
    int i;
    unsigned long long int temp = 0;
    unsigned long long int fiboNow = 1;
    unsigned long long int fiboPrev = 1;
    for (i = 2; i < n; ++i) { //In fact this operation gets F3 at first run
        temp = fiboNow;
        fiboNow = fiboNow + fiboPrev;
        fiboPrev = temp;
    }
    return fiboNow;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", iterFibonacci(n) % 10007);
    printf("%lld\n", recursiveFibonacci(n) % 10007);
}