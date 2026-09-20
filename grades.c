#include <stdio.h>
int main() {
    int n;
    int current;
    int peopleTable[5];
    double overallscore = 0;
    int maxscore = 0, minscore = 100;
    double avgscore = 0;
    int i;
    for (i=0;i<5;++i) {
        peopleTable[i] = 0;
    }

    scanf("%d", &n);
    for (i=0;i<n;++i) {
        scanf("%d", &current);
        if (current <= 59) {
            peopleTable[0]++;
        }else if (current <= 69)
        {
            peopleTable[1]++;
        }else if (current <= 79)
        {
            peopleTable[2]++;
        }else if (current <= 89)
        {
            peopleTable[3]++;
        }else if (current <= 100)
        {
            peopleTable[4]++;
        }
        
        overallscore += current;

        if (current > maxscore) {
            maxscore = current;
        }
        if (current < minscore) {
            minscore = current;
        }
        
    }

    avgscore = overallscore/n;

    for (i=0;i<5;++i) {
        printf("%d ", peopleTable[i]);
    }
    printf("\n");
    printf("%d %d %.2f \n", maxscore, minscore, avgscore);
}