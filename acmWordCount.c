#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char sentence[150];
    while(scanf("%s", sentence) == 1) {
        count++;
    }
    printf("%d", count);
}  