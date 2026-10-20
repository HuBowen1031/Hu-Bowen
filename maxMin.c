#include <stdio.h>

typedef struct opsItem
{
    int value;
    int deltaToLeft;
    int *p;
} OLI;

void sortWithTwoKeys(OLI seq[], int n) {
    int i = 0, j = 0;
    OLI temp;
    for (i = 0; i < n - 1; ++i) {
        for (j = n - 1; j > i; --j) {
            if (seq[j].value > seq[j-1].value || (seq[j].value == seq[j-1].value && seq[j].deltaToLeft > seq[j-1].deltaToLeft)) {
                temp = seq[j-1];
                seq[j-1] = seq[j];
                seq[j] = temp;
            }
        }
    }
}


int main() {
    int i;
    int n;
    int isFirstMax = 1;
    scanf("%d", &n);

    int a[n];
    OLI opsItemsList[n-1];
    for (i = 0; i < n; ++i) {
        scanf("%d", a + i);
        if (a[i] > a[0]) isFirstMax = 0;
    }

    if (isFirstMax) {
        printf("%d", a[0]);
        return 0;
    }

    for (i = 1; i < n; ++i) {
        opsItemsList[i].value = a[i];
        opsItemsList[i].deltaToLeft = a[i] - a[i-1];
        opsItemsList[i].p = a + i;
    }

    sortWithTwoKeys(opsItemsList, n-1);

    while (opsItemsList[0].deltaToLeft > 1) {
        (*(opsItemsList[0].p))--;
        (*(opsItemsList[0].p - 1))++;
        opsItemsList[0].value--;
        opsItemsList[0].deltaToLeft -= 2;
        sortWithTwoKeys(opsItemsList, n-1);
        
    }
    printf("%d\n", opsItemsList[0].value);
}