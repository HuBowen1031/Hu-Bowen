#include <stdio.h>
int main() {
    int n,t,k;
    int temp, alerted = 0, cont = 0;
    int i;
    scanf("%d %d %d",&n,&t,&k);
    for (i = 0; i < n; ++i){
        scanf("%d", &temp);
        if (temp >= t) {
            cont++;
        }
        else {
            cont = 0;
        }
        if (cont >= k && alerted == 0) {
            printf("YES %d\n", i+1);
            alerted = 1;
            break;
        }
    }
    if (alerted == 0) {
        printf("NO\n");
    }
}