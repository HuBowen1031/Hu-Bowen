#include <stdio.h>
int main() {
    int n,k;
    int l = 0, r = 0;
    int rec[200005];
    int i;
    int currentMU = 0;
    int longest = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; ++i) {
        scanf("%d", rec + i);
    }

    if (rec[0] == 0) currentMU++;

    while (++r < n) {
        if (rec[r] == 0) currentMU++;
        if (r - l > longest) { //r往后了，减一下正好是长度
            longest = r-l;
        }
        if (currentMU > k) {
            while (currentMU > k) {
                if (rec[l] == 0) currentMU--;
                l++;
            }
            
        }

    }
    if (r - l > longest) { //r往后了，减一下正好是长度
            longest = r-l;
        }

    printf("%d\n", longest);
}