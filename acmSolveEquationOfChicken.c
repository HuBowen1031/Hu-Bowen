#include <stdio.h>

int main() {
    int n;
    int found = 0;
    int x, y, z;
    scanf("%d", &n);

    for (x = 0; x <= n / 7; ++x) {
        if ((n - 7 * x) % 4 == 0) {
            found = 1;
            y = (n - 7 * x) / 4;
            z = 6 * x + 3 * y;
            printf("%d %d %d\n", x, y, z);
        }
    }
    if (!found) printf("NO\n");
}