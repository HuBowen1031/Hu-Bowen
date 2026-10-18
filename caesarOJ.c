#include <stdio.h>
#include <string.h>
int main() {
    int i;

    char plainText[85];
    char cipherText[85];

    scanf("%s",plainText);

    int n = strlen(plainText);
    for (i = 0; i < n; ++i) {
        cipherText[i] = (plainText[i] - 'a' + 3) % 26 + 'a';
    }

    printf("%s\n",cipherText);
}