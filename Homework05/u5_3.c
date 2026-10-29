#include <stdio.h>

int isReverse(int numberA, int numberB) {
    /*First, determine if the inputs meet the requirements.*/
    int i;
    int digitsOfNumberA[100];
    int digitsOfNumberB[100];
    int countA = 0;
    int countB = 0;

    while(numberA > 0) {
        digitsOfNumberA[countA] = numberA % 10;
        numberA /= 10;
        countA++;
    } /*exit with (countA - 1) as highest digit.*/

    while(numberB > 0) {
        digitsOfNumberB[countB] = numberB % 10;
        numberB /= 10;
        countB++;
    } /*exit with (countB - 1) as highest digit.*/

    if (countA != countB) return 0; /*If the digit count is not corresponding, there's no need to judge.*/

    

    for (i = 0; i < countA; ++i) {
        if (digitsOfNumberA[i] != digitsOfNumberB[countA - 1 - i]) { /*make sure all the digits identical, scan the whole sequence.*/
            return 0;
        } 
    }
    return 1;

}

int getReverse(int number) {
    int count = 0;
    int digits[100];
    int i;
    int reversed = 0;
    while(number > 0) {
        digits[count] = number % 10;
        number /= 10;
        count++;
    } /*exit with (count - 1) as highest digit.*/
    for (i = 0; i <= count - 1; ++i) {
        reversed *= 10;
        reversed += digits[i];
    }
    return reversed;
}

int main() {
    int numA, numB;
    scanf("%d%d", &numA, &numB);

    if (!isReverse((getReverse(numA) + getReverse(numB)), (numA + numB))){ 
        printf("Not reversed number set.\n");
        return 0;
    }
    printf("They are reversed number set.\n");
    return 0;
}