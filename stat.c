#include <stdio.h>
int main() {
    int n, k, m;
    int i;
    int isPresent;
    int overall = 0, cont = 0, maxcont = 0;
    /*
    scanf("%d", &n);
    scanf("%d", &k);
    scanf("%d", &m);
    */
    scanf("%d %d %d",&n,&k,&m);
    for (i=0; i<n; ++i) {
        scanf("%d", &isPresent); //Read 
        if (isPresent == 1) { //need to act
            overall++; 
            cont++;
            
        }
        else {
            cont = 0;
        }
        if (cont > maxcont) {
            maxcont = cont;
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