#include <stdio.h>

int getIO(); //声明函数要在main外面！


int main() {
    printf("Are you OK? (y for yes and n for no):");
    getIO();
    return 0;
}

int getIO() {
    char flag;
    scanf("%c", &flag);
    if (flag == 'y') {
        printf("Yes!\n");
    }
    else if (flag == 'n') {
        printf("No.\n");
    }
    else {
        printf("Invalid input\n");
    }
    return 0;
}