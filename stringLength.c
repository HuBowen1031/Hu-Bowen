#include <stdio.h>
#include <stdlib.h>
int main() {
    int c;
    char myStr[50];
    int i = 0;
    int j;
    while ((c = getchar()) != '\n' && c != EOF && c != '\r') {
        myStr[i] = c;
        ++i;
    }
    --i;
    while (myStr[i] == ' ') --i;

    printf("[");
    for (j = 0; j <= i; ++j) printf("%c", myStr[j]);
    printf("]\n");
}