#include <stdio.h>
#include "customFuncs.h" // 让编译器核对「声明」和「定义」是否一致

char* myStrcpy(char strDest[], const char strSrc[]) {
    if (strDest  == NULL || strSrc == NULL) return NULL;
    int i = 0;
    for (i = 0; strSrc[i] != '\0'; ++i) {
        strDest[i] = strSrc[i];
    }
    strDest[i] = '\0';
    return strDest;
}

void myTrimRight(char string[]) {
    int i = 0;
    while(string[i] != '\0') {
        i++;
    } //move to the end of string
    i--;
    while (string[i] == ' ') {
        string[i] = '\0';
    } //move leftwards, mark all spaces that are before end mark as \0, so the string is reduced
    return;
}