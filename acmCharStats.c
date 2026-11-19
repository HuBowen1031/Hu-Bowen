#include <stdio.h>

int main() { 
    int digits = 0;
    int upperCases = 0;
    int lowerCases = 0;
    int others = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= '0' && c <= '9') digits++;
        else if (c >= 'A' && c <= 'Z') upperCases++;
        else if (c >= 'a' && c <= 'z') lowerCases++;
        else others++;
    }

    printf("%d %d %d %d\n", digits, upperCases, lowerCases, others);
}