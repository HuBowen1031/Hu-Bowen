#include <stdio.h>
#include <stdlib.h>

int main() {
    char digits[13];
    char hyphensIndex[3];
    char c;
    int i = 0, j = 0;

    while((c = getchar()) != EOF && c != '\n') {
        if (c == '-') {
            hyphensIndex[j] = i;
            j++;
            i++;
            continue;
        }
        digits[i] = c;
        i++;
    }

    j = 0;
    for (i = 0; i < 13; ++i) {
        if (hyphensIndex[j] == i) {
            printf("-");
            j++;
        }
        else printf("%c", digits[i]);
    }
    printf("\n");

}