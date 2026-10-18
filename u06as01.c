#include <stdio.h>
void sort(int seq[], int n) {
    int i = 0, j = 0;
    int temp;
    for (i = 0; i < n - 1; ++i) {
        for (j = n - 1; j > i; --j) {
            if (seq[j] > seq[j-1]) {
                temp = seq[j-1];
                seq[j-1] = seq[j];
                seq[j] = temp;
            }
        }
    }
}

int findfirst(int score, int seq[], int n) {
    int i;
    for (i = 0; i < n; ++i) {
        if (seq[i] == score) return i;
    }
    return -1;
}

int average(int seq[], int n) {
    int overall = 0;
    int i;
    for (i = 0; i < n; ++i) {
        overall += seq[i];
    }
    return (overall / n);
}

int main() {
    int i;
    int scores[10];
    int myScore;
    int n;
    
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        scanf("%d", scores + i);
    }

    scanf("%d", &myScore);

    while (findfirst(myScore, scores, n) == -1) {
        printf("重新输入\n");
        scanf("%d", &myScore);
    }

    sort(scores, n);

    printf("%d\n", (findfirst(myScore, scores, n) + 1));
    printf("%d\n", average(scores, n));
}