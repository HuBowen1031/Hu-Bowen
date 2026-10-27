#include <stdio.h>
int main() {
    int c;
    char myStr[50];
    int i = 0;
    int j = 0;
    int k = 0;
    while ((c = getchar()) == ' ') ++j;
    myStr[j] = c; 
    i = j + 1;
    while ((c = getchar()) != '\n' && c != EOF && c != '\r') {
        myStr[i] = c;
        ++i;
    }
    printf("[");
    for (k = j; k < i; ++k) printf("%c", myStr[k]);
    printf("]\n");
}