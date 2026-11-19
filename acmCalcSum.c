#include <stdio.h>

int main() {
    int c;
    int sum = 0;
    while ((c = getchar())!= '\n' && c != ' ' && c != EOF) {
        sum += c - '0';
    }

    printf("%d\n", sum);
}