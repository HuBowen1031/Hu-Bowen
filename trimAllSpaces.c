#include <stdio.h>

int main() {
    int c;
    char myStr[50];
    int i;
    int j;

    i = 0;
    while ((c = getchar()) != '\n' && c != EOF && c != '\r') {
        if (c != ' ') {
            myStr[i] = c;
            ++i;
        }
    }
    printf("[");
    for (j = 0; j <= i; ++j) printf("%c", myStr[j]);
    printf("]\n");
}