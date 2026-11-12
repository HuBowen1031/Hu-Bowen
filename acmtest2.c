#include <stdio.h>

void sort(int seq[], int n) {
    int temp;
    int i,j;
    for (i = 0; i < n - 1; ++i) {
        for (j = n-1; j > i; --j) {
            if (seq[j] < seq[j-1]) {
                temp = seq[j-1];
                seq[j-1] = seq[j];
                seq[j] = temp;
            }
        }
    }
}

int main() {
    int i;
    int j;
    int read[4];

    int n;
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        for (j = 0; j < 4; ++j) {
            scanf("%d", (read + j));
        }
        sort(read, 4);
        for(j = 0; j < 4; ++j) {
            printf("%d ", read[j]);
        }
        printf("\n");
    }
}