#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int i;
    scanf("%d", &n);
    char buffer[10000];

    for (i = 0; i < n; ++i) {
        strcpy(buffer, "");
        scanf("%s", buffer);
        printf("%ld\n", strlen(buffer));
    }
}