#include <stdio.h>

int main() {
    char strRaw[1000] = {0};
    char strSub[1000] = {0};
    int i = 0;
    int j = 0;
    int k = 0;
    int lenRaw;
    int lenSub;
    int c;
    int found = 0;
    int identical = 1;

    //Input
    while ((c = getchar()) != '\n' && c != EOF) {
        strRaw[i++] = c;
    }
    lenRaw = i;
    i = 0; // gonna use it next to store the sub string.
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c != strRaw[i]) identical = 0;
        strSub[i++] = c;
        
    }
    lenSub = i;

    if (identical) {
        printf("NULL\n");
        return 0;
    }
    for (i = 0; i < lenRaw; ++i) {
        if (strRaw[i] == strSub[0]) {
            found = 1;
            for (j = 0; (j < lenSub) && (i + j < lenRaw); ++j) {
                if (strRaw[i + j] != strSub[j]) found = 0;
            }
            if (j != lenSub) found = 0;
            if (found) {
                for (k = i; k < i + j; ++k) strRaw[k] = '\t';
                break;
            }
        }
    }
    i = 0; //Now it serves as the iterator
    if (found) {
        while ((c = strRaw[i]) != '\n' && c != EOF && c != '\0') {
            if (c != '\t') {
                putchar(strRaw[i++]);
            }
            else ++i;
        }
        printf("\n");
    }
    
    if (!found) printf("NO\n");
}