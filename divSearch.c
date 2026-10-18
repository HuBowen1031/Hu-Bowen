#include <stdio.h>

int search(long long int seq[], long long int key, int n) {
    /*进行二分查找*/
    int l = 0, r = n-1;
    int p = (l + r) / 2; //offset left
    int min = -1;
    while (l <= r && l >= 0 && r <= n-1) {
        if (seq[p] > key) {
            r = p - 1;
        }
        else if (seq[p] == key) {
            r = p - 1;
            min = p;
        }
        else {
            l = p + 1;
        }

        p = (l + r) / 2;
    }

    if (min == -1) return -1;
    else return (min + 1);
    
}

int main() {
    int n;
    int i;
    int q;
    
    /*进行读取*/
    scanf("%d", &n);

    long long int a[n];
    for (i = 0; i < n; ++i) {
        scanf("%lld", a + i);
    }

    scanf("%d", &q);

    long long int keys[q];
    for (i = 0; i < q; ++i) {
        scanf("%lld", keys + i);
    }

    

    for (i = 0; i < q; ++i) {
        printf("%d ", search(a,keys[i], n));
    }

    printf("\n");
    return 0;
}