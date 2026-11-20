#include <stdio.h>

void abcba(int n) {
    int a = 1;
    int b = 0;
    int c = 0;

    for (a = 1; a <= 9; ++a) {
        for (b = 0; b <= 9; ++b) {
            for (c = 0; c <= 9; ++c) {
                if (2 * a + 2 * b + c == n) {
                    printf("%d\n", 10000 * a + 1000 * b + 100 * c + 10 * b + a);
                }
            }
        }
    }
}

void abccba(int n) {
    int a = 1;
    int b = 0;
    int c = 0;

    for (a = 1; a <= 9; ++a) {
        for (b = 0; b <= 9; ++b) {
            for (c = 0; c <= 9; ++c) {
                if (2 * a + 2 * b + 2 * c == n) {
                    printf("%d\n", 100000 * a + 10000 * b + 1000 * c + 100 * c + 10 * b + a);
                }
            }
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 45) abcba(n);
    abccba(n);
}