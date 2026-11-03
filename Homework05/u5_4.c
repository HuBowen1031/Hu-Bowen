#include <stdio.h>

#define MAX_LEN 64

int main(void) {
    char digits[MAX_LEN];
    int hyphensIndex[MAX_LEN];
    int hyphenCount = 0;
    int length = 0;
    int i, j;
    int c;

    /* Read one line, remembering where each hyphen appeared. */
    while (length < MAX_LEN && (c = getchar()) != EOF && c != '\n') {
        if (c == '-') {
            hyphensIndex[hyphenCount] = length;
            hyphenCount++;
        } else {
            digits[length] = (char)c;
        }
        length++;
    }

    /* Print only the digits, skipping every recorded hyphen position. */
    for (i = 0, j = 0; i < length; ++i) {
        if (j < hyphenCount && hyphensIndex[j] == i) {
            putchar('-');
            j++;
            continue;
        }
        putchar(digits[i]);
    }
    putchar('\n');

    return 0;
}
