#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_GUESS_TIME 3

int guessNumberFunc() {
    /*
    猜数主程序，使用返回值和主程序通信，确定输出状态。
    0:用户猜到了数。
    1:用户没有在规定的次数猜到数字。
    */
    time_t t;
    srand((unsigned) time(&t)); /*取系统当前时间当作随机数种子*/
    int upper_bound = 100;
    int lower_bound = 1;
    int numberToGuess = rand() % (upper_bound - lower_bound + 1) + lower_bound; /*由于随机数可能很大，采用取余来生成范围内的随机数*/

    int i;
    int guessedNumber;

    for (i = 0; i < MAX_GUESS_TIME; ++i) {
        scanf("%d", &guessedNumber);
        if (guessedNumber == numberToGuess) {
            return 0;
        }
        else if (guessedNumber > numberToGuess) {
            printf("猜大了。\n");
        }
        else {
            printf("猜小了。\n");
        }
    }
    return 1;
}

int main() {
    
    char userInputChar;
    
    int userGuessResult = guessNumberFunc();

    while (1) {
        if (!userGuessResult) { /*猜到了数*/
            printf("猜对了。继续？(y/n)");  
        }  
        else { /*没猜到数*/
            printf("到达上限。继续？(y/n)");
        }   
        scanf("%s", &userInputChar);
        if (userInputChar == 'y') {
            userGuessResult = guessNumberFunc();
        }
        else {
            break;
        }
    }
}

