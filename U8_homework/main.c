#include <stdio.h>
#include "customFuncs.h"


int main() {
    char userInput[1000];
    char destination[1000];

    int i = 0;
    int c;
    while ( (c = getchar()) != '\n' && c != EOF) {
        userInput[i] = c;
        ++i;
    }
    userInput[i] = '\0'; // so that it knows where to end.
    myStrcpy(destination, userInput);
    myTrimRight(destination);
    printf("%s", destination);
}