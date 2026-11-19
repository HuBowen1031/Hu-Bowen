#include <stdio.h>

int main() {
    char strRaw[1000] = {0};
    char strSub[1000] = {0};
    int i = 0;
    int j = 0;
    int lenRaw;
    int lenSub;
    int c;
    int found = 0;

    //Input
    while ((c = getchar()) != '\n' && c != EOF) {
        strRaw[i++] = c;
    }
    lenRaw = i;
    i = 0; // gonna use it next to store the sub string.
    while ((c = getchar()) != '\n' && c != EOF) {
        strSub[i++] = c;
    }
    lenSub = i;

    for (i = 0; i < lenRaw; ++i) {
        if (strRaw[i] == strSub[0]) {
            found = 1;
            for (j = 0; (j < lenSub) && (i + j < lenRaw); ++j) {
                if (strRaw[i + j] != strSub[j]) found = 0;
            }
            if (j != lenSub) found = 0;
            if (found) break;
        }
    }
    if (found) printf("YES\n");
    else printf("NO\n");
}