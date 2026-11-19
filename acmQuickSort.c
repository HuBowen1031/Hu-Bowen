#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int i = low - 1;
    int j;

    for (j = low; j < high; ++j) {
        if (arr[j] <= arr[high]) { //why equal also applies: aggregate all the identical numbers
            ++i; // expand the lower-than area. 
            swap(&arr[i], &arr[j]); // swap ensured that all the lower numbers go before i, and all the larger numbers go after, so the change is clean. 
        }
    }
    swap(&arr[i + 1], &arr[high]); // position it to the middle, now that all the data have been divided. 
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) { //i.e not finished yet
        int pm = partition(arr, low, high);

        quickSort(arr, low, pm - 1);
        quickSort(arr, pm + 1, high);
    }
}

int main() {
    int i;
    int m, n;
    int seq[100000];
    scanf("%d%d", &n, &m);
    
    for (i = 0; i < n; ++i) {
        scanf("%d", seq + i);
    }

    quickSort(seq, 0, n - 1);
    printf("%d\n", seq[n - m]);
}