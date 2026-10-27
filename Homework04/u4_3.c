#include <stdio.h>
int main() {
    int isbnRaw[5];
    int isbnPure[13];
    int segment = 0;
    int i;
    int head = 12;
    int sum = 0;
    scanf("%d-%d-%d-%d-%d",&isbnRaw[0], &isbnRaw[1], &isbnRaw[2], &isbnRaw[3], &isbnRaw[4]);
    for (i = 4; i >= 0; --i) {
        while (isbnRaw[i] > 0) {
            isbnPure[head] = isbnRaw[i] % 10;
            head--;
            isbnRaw[i] /= 10;
        }
    }
    for (i = 0; i < 12; ++i) {
        if (i % 2 == 0) sum += isbnRaw[i];
        else sum += isbnRaw[i] * 3;
    }
    if (sum % 10 == 0) {
        printf("正确\n");
    }
    else {
        printf("错误\n");
    }
}
