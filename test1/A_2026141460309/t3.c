#include <stdio.h>
int main() {
    int i,j;
    int upper;
    scanf("%d", &upper);

    while (upper < 21 || upper > 25) {
        printf("Please input again.\n");
        scanf("%d", &upper);
    }

    printf("start with 21, end with: %d\n",upper);

    /*construct 1st row*/
    printf("\t");
    for (i = 21; i <= upper; ++i) {
        printf("%d\t\t", i);
    }
    printf("\n");

    i = 21;
    while (i <= upper) {
        printf("%d\t", i);
        j = 21;
        do {
            printf("%dx%d=%d\t",j,i,(j*i));
            ++j;
        }
        while(j <= i);
        printf("\n");
        ++i;
    }
    
}