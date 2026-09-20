#include <stdio.h>

int main(void) {
    int userFlag;
    printf("Are you ok? ");
    scanf("%d",&userFlag);
    if (userFlag == 1) {
        printf("yes\n");
    }
    else if (userFlag == 0) {
        printf("No\n");
    }
    return 0;
}
