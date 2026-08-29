#include <stdio.h>
int main() {
    int n, k, m;
    int i;
    int isPresent;
    int overall = 0, cont = 0, maxcont = 0;
    int flag;
    scanf("%d", &n);
    scanf("%d", &k);
    scanf("%d", &m);
    flag = 0;
    for (i=0; i<n; ++i) {
        scanf("%d", &isPresent);
        if (isPresent == 1) {
            overall++;
            if (flag == 0){
                flag = 1;
                cont++;
            }
            else {
                cont++;
                
            }
            if (cont > maxcont) {
                    maxcont = cont;
                }
        }
        else {
            flag = 0;
            cont = 0;
        }
    }
    printf("%d\n",overall);
    printf("%d\n",maxcont);
    if (overall >= k && maxcont >= m){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}