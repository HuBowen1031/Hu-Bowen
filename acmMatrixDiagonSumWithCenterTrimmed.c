#include <stdio.h>

int main() {
    int n;
    int i, j, k;
    int sum = 0;
    int oneBlock;
    //int matrix2d[5][5]; //I DO NOT NEED THIS GODDAMN MATRIX AT ALL
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        for (j = 0; j < 5; ++j) {
            for (k = 0; k < 5; ++k) {
                scanf("%d", &oneBlock);
                if (j == k || k == (4 - j)) {
                    sum += oneBlock;
                    //printf("added number %d\n", oneBlock);
                }
            }
        }
        printf("%d\n", sum);
    }

}