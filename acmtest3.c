#include <stdio.h>

void printDesignatedLine(int n, int maxLen) {
    int i,j;
    for (i = 0; i < (maxLen / 2) - (n - 1); ++i) {
        printf(" ");
    }
    for (j = 0; j < (2 * n - 1); ++j) {
        printf("*");
    }
    for (i = 0; i < (maxLen / 2) - (n - 1); ++i) {
        printf(" ");
    }
    printf("\n");
}

int main() {
    int i, j;
    int currentTriangleSize;
    int m;
    scanf("%d", &m);

    for (i = 0; i < m; ++i) {
        scanf("%d", &currentTriangleSize);
        for (j = currentTriangleSize; j > 0; --j) {
            printDesignatedLine(j, (2 * currentTriangleSize - 1));
        }
    }
}