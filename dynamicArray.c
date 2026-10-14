#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (i = 0; i < n; ++i) {
        arr[i] = i;
    }

    for (i = 0; i < n; ++i) {
        printf("%d,", arr[i]);
    }
    
    printf("\n");
}