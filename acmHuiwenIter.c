#include <stdio.h>

void getFiveDigitPalindromicNumber(int list[]) {

}

int sumListElement(int list[], int n) {
    int i;
    int sum = 0;
    for (i = 0; i < n; ++i) {
        sum += list[i];
    }
}

int main() {
    //first, I know that for n > 45, 5-digit iter is not necessary. (5 * 9 = 45)
    //Then, I know that brute force would be too much, since the digits are large.
    //It occurred to me that, n = 1 is nothing, n = 2 only get you 10001 and 100001.
    //So when you start iter,make the highest digit as 1.Then add the opposite.

    int n;
    scanf("%d", &n);

}