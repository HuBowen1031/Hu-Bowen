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

void swap(int seq[], int index1, int index2) {
    int temp = 0;
    temp = seq[index1];
    seq[index1] = seq[index2];
    seq[index2] = temp;
}


int main() {
    int n;
    int i;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    int bucket = 0;
    int overallGroupCount = n;
    for (i = 0; i < n; ++i) {
        scanf("%d",(a + i));
    }
    bubble_sort(a,n); //初始升序

    //持续排序，维护升序列
    int leftest = 0;
    while (overallGroupCount > 1) {
        printf("sorting:%d,%d\n", a[leftest], a[leftest + 1]);
        bucket = a[leftest] + a[leftest + 1];
        sum += bucket;
        printf("Operation took:%d\n",sum);
        overallGroupCount--;
        leftest++;
        a[leftest] = bucket;
        if (bucket >= a[leftest + 1]) {
            for (i = leftest + 1; (a[i] < bucket && i <= n-1); ++i) {
            swap(a,i,i-1);
            }
        }
    }
    printf("%d\n", sum);
}