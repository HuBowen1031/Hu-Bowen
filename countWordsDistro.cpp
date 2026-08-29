#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int state;
    int wordDistro[20];
    int inWordCharCount;
    int i;
    int c;
    int j;
    int k;
    int flag;
    char horLine[20];
    state = OUT;
    inWordCharCount = 0;
    for (i=0; i<20; ++i){
        wordDistro[i] = 0;
    }
    
    while ((c=getchar()) != EOF)
    {
        if (c == '\t' || c == ' ' || c == '\n')
        {
            if (state == IN)
            {
                ++wordDistro[inWordCharCount];
                inWordCharCount = 0;
            }
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            inWordCharCount = 1;
        }
        else
        {
            ++inWordCharCount;
        }
    }
    if (state == IN) {
    ++wordDistro[inWordCharCount];
    }
    
    printf("Words Length Distribution(horizontal)\n");
    for (i = 0; i<20; ++i){
        for (j=0; j<wordDistro[i]; ++j){
            putchar('|');
        }
        printf("\n");
    }

    printf("Words Length Distribution(vertical) \n");
    flag = 1;
    while (flag == 1){ //这行不是空
        for (j=0; j<20; ++j){ //清空该行
            horLine[j] = ' ';
            }
        flag = 0; //默认空
        for (i = 0; i<20; ++i){ //扫描每格
            
            if (wordDistro[i] > 0){ //不空，打标记，更新flag,
                horLine[i] = '*';
                --wordDistro[i];
                flag = 1;
            }
        }
        for (k=0;k<20;++k){
            putchar(horLine[k]);
        }
        printf("\n");
    }


}   