#include <stdio.h>

void transpose(int *arr, int *dest, int n) {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            *(dest + n * i + j) = *(arr + n * j + i);
        }
    }
}

void matrixSum(int *arr1, int *arr2, int *resultArr, int n) {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            *(resultArr + n * i + j) = *(arr1 + n * i + j) + *(arr2 + n * i + j);
        }
    }
}

int main() {
    int n;
    int i, j;
    scanf("%d", &n);
    int matrix[n][n];
    int matrix_T[n][n];
    int result[n][n];

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    transpose(matrix, matrix_T, n);
    matrixSum(matrix, matrix_T, result, n);
    
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}