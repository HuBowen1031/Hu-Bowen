#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

char words[200005][25];
char unique[200005][25];

int main() {
    int n;
    int diffs = 0;
    int i;
    int j=0;

    scanf("%d", &n);
    for (i=0;i<n;++i) {
        scanf("%s", words[i]);
    }
    qsort(words, n, sizeof(words[0]), cmp);

    for (i=0; i<n; ++i) {
        if (i==0 || strcmp(words[i], words[i-1]) != 0) {
            strcpy(unique[j++], words[i]);
            diffs++;
        }
    }

    printf("%d\n",diffs);

    for (i=0;i<j;++i) {
        printf("%s\n", unique[i]);
    }
    return 0;
}