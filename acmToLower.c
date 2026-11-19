#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'A' && c <= 'Z') {
            putchar(c - 'A' + 'a');
        }
    }
    printf("\n");
}