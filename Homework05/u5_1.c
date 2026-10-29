#include <stdio.h>
#include <stdlib.h>

char caesar(char c) {
    if (c >= 'A' && c <= 'Z') return ((c + 3 - 'A') % 26 + 'A');
    else if ((c >= 'a' && c <= 'z')) return ((c + 3 - 'a') % 26 + 'a');
    else return c;
}

int main() {
    int i;

    char plainText[100];
    char cipherText[100];

    scanf("%s", plainText);

    for (i = 0; plainText[i] != EOF; ++i) {
        cipherText[i] = caesar(plainText[i]);
        printf("%c", cipherText[i]);
    }
    printf("\n");
}