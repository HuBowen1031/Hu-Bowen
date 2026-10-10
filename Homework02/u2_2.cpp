#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
    int i = 0;
    char c;
    char plainText[100000],cipherText[100000];
    printf("plain text:");
    while ((c = getchar()) != '\n' && c != EOF) {
        plainText[i] = c;
        ++i;
    }
    for (i = 0; i < 100000; ++i) {
        if ('A' <= plainText[i] && plainText[i] <= 'Z') {
            cipherText[i] = (plainText[i] + 3 - 'A') % 26 + 'A';
        }
        else if ('a' <= plainText[i] && plainText[i] <= 'z') {
            cipherText[i] = (plainText[i] + 3 - 'a') % 26 + 'a';
        }
        else {
            cipherText[i] = plainText[i];
        }
        
    }
    printf("cipher text:%s\n",cipherText);
}