#include <stdio.h>

int main() {
    int i;
    int n;
    int c;
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; ++i) {
        c = getchar();
        if (c >= '0' && c <= '9') printf("number\n");
        else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') printf("letter\n");
        else printf("else\n");
        getchar(); //get rid of \n or whatever else
    }
}