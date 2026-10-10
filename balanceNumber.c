#include <stdio.h> 
int isBalance(int number) {
    int zero = 0, un = 0;
    while (number > 0) {
        if (number % 2 == 1) {
            un++;
        }
        else {
            zero++;
        }
        number /= 2;
    }
    if (zero == un) return 1;
    else return 0;
}


int main() {
    int n;
    int i;
    int balanceNum = 0;

    /*receive data*/
    scanf("%d", &n);
    int seq[n];
    for (i = 0; i < n; ++i) {
        scanf("%d",(seq + i));
        if (isBalance(seq[i])) {
            balanceNum++;
        }
    }
    printf("%d\n", balanceNum);

    


}