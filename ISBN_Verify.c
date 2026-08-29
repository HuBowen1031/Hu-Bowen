#include <stdio.h>
int main() {
    char isbn_digit[11];
    int i;
    int s = 0; 
    int isbn_result;

    scanf("%10s", isbn_digit);

    for (i=0;i<9;++i) {
        s += (isbn_digit[i]-'0')*(i+1);
    }
    
    isbn_result = s % 11;
    if ((isbn_result == 10 && isbn_digit[9] == 'X') || (isbn_result == (isbn_digit[9] - '0'))){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}