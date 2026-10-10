/*WA!!!*/

#include <stdio.h>
void bubble_sort(int seq[], int n) {
    int i,j;
    int temp;
    for (i = 0; i < n-1; ++i) {
        for (j = n-1; j > i; --j) {
            if (seq[j] < seq[j-1]) {
                temp = seq[j];
                seq[j] = seq[j - 1];
                seq[j - 1] = temp;
            }
        }
    }
    
}

int main() {
    int n;
    int i;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    int bucket = 0;
    for (i = 0; i < n; ++i) {
        scanf("%d",(a + i));
    }
    bubble_sort(a,n);
    bucket = a[0] + a[1];
    sum += bucket;
    for (i = 2; i <= n-1; ++i) {
        bucket += a[i];
        sum += bucket;
    }
    printf("%d\n", sum);
}