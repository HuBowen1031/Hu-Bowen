#include <stdio.h>
#include <stdlib.h>

#define PEOPLE_MAX 11

void swap(int *pA, int *pB) {
    int temp;
    temp = *pA;
    *pA = *pB;
    *pB = temp;
}

int findfirst(int v, int *pA, int n) {
    int j;
    for (j = 0; j < n; ++j) {
        if (*(pA + j) == v) return j;
    }
    return -1;
}

void selectionsort(int *pA, int n) {
    int j, k;
    int currentMax = 0;
    for (j = 0; j < n - 1; ++j) {
        currentMax = j;
        for (k = j + 1; k < n; ++k) {
            if (*(pA + k) > *(pA + currentMax)) currentMax = k;
        }
        if (currentMax != j) swap((pA + currentMax), (pA + j));
    }
}

int average(int *pA, int n) {
    int j;
    int sum = 0;
    for (j = 0; j < n; ++j) {
        sum += *(pA + j);
    }
    return (sum / n);
}

int b2search(int *pA, int n, int v) {
    int left = 0, right = n-1;
    int m = (left + right)/2; /*left offset*/
    int currentMvalue;
    while (left <= right) {
        m = (left + right) / 2; 
        currentMvalue = *(pA + m);
        if (currentMvalue < v) right = m-1;
        else if (currentMvalue > v) left = m + 1;
        else return m + 1;
    }
    return -1;
}

int main() {
    int i;
    int j;
    int c;
    
    int *arr = malloc(sizeof(int) * PEOPLE_MAX);

    for (i = 0; i < PEOPLE_MAX; ++i) {
        scanf("%d", arr + i);

        if (arr[i] == -1) {
            break; /*using i as array actual length rather than last index */
        }
    }


    scanf("%d", &c);
    int status = findfirst(c,arr,i);
    while (status == -1) {
        printf("not in table, try again\n");
        scanf("%d", &c);
        status = findfirst(c,arr,i);
        
    }

    selectionsort(arr, i);

    printf("%d, %d, %d\n", average(arr, i), c, b2search(arr, i, c));

    free(arr);
}