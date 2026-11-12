#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char str[10000];
    int top = 0;
    int c;
    int i, j;

    scanf("%d", &n);
    getchar(); //吃掉多余换行符

    for (j = 0; j < n; ++j) {
        while ((c = getchar()) != '\n' && c != EOF) {
            str[top] = c;
            top++;
        }
        for (i = top - 1; i >= 0; --i) {
            putchar(str[i]);
        }
        top = 0;
        printf("\n");
    }
}