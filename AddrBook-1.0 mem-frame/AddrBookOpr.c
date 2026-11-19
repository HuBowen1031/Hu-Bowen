#include <stdio.h>
#include <string.h>
#include "AddrBookOpr.h"


/*读一行到 buf（最长 size-1 个字符），去掉末尾换行；超长部分直接丢弃。
  直接用 scanf 读字符串遇到空格会断开，所以统一用 fgets 读整行。*/
static void readLine(char *buf, int size)
{
    if (fgets(buf, size, stdin) == NULL)     /*读失败（如遇到 EOF）*/
    {
        buf[0] = '\0';
        return;
    }

    if (strchr(buf, '\n') == NULL)           /*没读到换行说明输入超长*/
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;                                /*把本行剩下的字符丢掉*/
    }
    else
    {
        buf[strcspn(buf, "\n")] = '\0';      /*去掉末尾换行*/
    }
}


/*增加*/
int addMember(struct AddrInfo *pData, int num)
{
    struct AddrInfo nc;

    if (num >= MAX_LEN)                      /*有效下标是 0 ~ MAX_LEN-1*/
    {
        printf("已超过最大限制\n");
        return num;
    }

    printf("请输入姓名：\n");
    readLine(nc.name, sizeof(nc.name));

    printf("请输入电话：\n");
    readLine(nc.teleno, sizeof(nc.teleno));

    printf("请输入 email：\n");
    readLine(nc.email, sizeof(nc.email));

    pData[num] = nc;                         /*把新记录放到当前末尾*/

    printf("\n 已添加1条记录，总记录数：%d\n", num + 1);

    return num + 1;                          /*有效记录数加 1*/
}


/*删除*/
int delMember(struct AddrInfo *pData, int num)
{
    int i, j;
    char name[LEN_NAME + 1] ;

    printf("请输入你要删除的姓名：\n") ;
    readLine(name, sizeof(name)) ;

    /*先找到姓名为 name 的记录*/
    for (i = 0; i < num; i++)
    {
        if (strcmp(pData[i].name, name) == 0)
            break;
    }

    if (i == num)                            /*整个数组都找遍了也没找到*/
    {
        printf("\n 未找到姓名为 %s 的记录\n", name);
        return num;
    }

    /*后面的记录依次前移，覆盖掉被删的那条*/
    for (j = i; j < num - 1; j++)
    {
        pData[j] = pData[j + 1];
    }

    printf("\n 已删除1条记录，总记录数：%d\n", num - 1);

    return num - 1;                          /*有效记录数减 1*/
}

/*显示全部*/
void dispAll(struct AddrInfo *pData, int num)
{
    int i = 0;

    if (num == 0)
    {
        printf("\n 记录为空\n");
        return;
    }

    for (i = 0; i < num; i++)
    {
        printf("\n 第%d条记录：\n", i + 1);
        dispOneRecord(&pData[i]);
    }

    printf("\n 共有%d条记录\n", num);
}


/*显示一个*/
void dispOneRecord(const struct AddrInfo *pData)
{
    printf(" 姓 名: %s\n", pData->name);
    printf(" 电 话: %s\n", pData->teleno);
    printf(" email: %s\n", pData->email);
}
