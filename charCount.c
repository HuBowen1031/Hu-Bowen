#include <stdio.h>
int main() {
    int characters = 0;
    int c;
    while ((c = getchar()) != '\n') {
        if (c != ' ') characters++;
    }
    printf("%d", characters);
}