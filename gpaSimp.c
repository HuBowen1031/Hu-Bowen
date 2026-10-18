#include <stdio.h>
#include <string.h> // 需要用到 strcpy 复制字符串

int main() {
    int score;
    scanf("%d", &score);

    char grade[3];
    float GPA;

 
    if (score >= 93 && score <= 100) {
        strcpy(grade, "A"); 
        GPA = 4.0;
    }
    else if (score >= 90) { 
        strcpy(grade, "A-");
        GPA = 3.67;
    }
    else if (score >= 87) {
        strcpy(grade, "B+");
        GPA = 3.33;
    }
    else if (score >= 83) {
        strcpy(grade, "B");
        GPA = 3.0;
    }
    else if (score >= 80) {
        strcpy(grade, "B-");
        GPA = 2.67;
    }
    else if (score >= 77) {
        strcpy(grade, "C+");
        GPA = 2.33;
    }
    else if (score >= 73) {
        strcpy(grade, "C");
        GPA = 2.0;
    }
    else if (score >= 70) {
        strcpy(grade, "C-");
        GPA = 1.67;
    }
    else if (score >= 66) {
        strcpy(grade, "D+");
        GPA = 1.33;
    }
    else if (score >= 60) {
        strcpy(grade, "D");
        GPA = 1.0;
    }
    else {
        strcpy(grade, "F");
        GPA = 0.0;
    }

    printf("%5.2f\n%s\n%5.2f\n", (float)score, grade, GPA);

    return 0;
}