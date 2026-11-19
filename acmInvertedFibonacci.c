#include <stdio.h>

unsigned long long int recursiveFibonacci(int n, int seq[]) {
    if (n == 2 || n == 1) {
        seq[n] = 1;
        return seq[n];
    }
    else {
        seq[n] =  recursiveFibonacci(n-1, seq) + recursiveFibonacci(n-2, seq);
        return seq[n];
    }

}

unsigned long long int iterFibonacci(int n, int seq[]) {
    int i;
    unsigned long long int temp = 0;
    unsigned long long int fiboNow = 1;
    unsigned long long int fiboPrev = 1;
    seq[1] = 1;
    seq[2] = 1;
    for (i = 3; i <= n; ++i) { //In fact this operation gets F3 at first run
        temp = fiboNow;
        fiboNow = fiboNow + fiboPrev;
        fiboPrev = temp;
        seq[i] = fiboNow;
    }
    return fiboNow;
}

int main() {
    int n;
    int i;
    int arrayOfFibo[50] = {0};
    scanf("%d", &n);
    iterFibonacci(n, arrayOfFibo);
    for (i = n; i >= 1; --i) {
        printf ("%d ", arrayOfFibo[i]);
    }
    printf("\n");
}