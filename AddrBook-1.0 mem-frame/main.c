/************************************************
* 
* 这是地址本管理程序的主程序文件。
*
************************************************/

#include  <stdio.h>
#include "AddrInfo.h"
#include "AddrBookOpr.h"  
    

/*显示程序信息*/
void DispProgInfo( )
{
    puts(" ");
    puts("********************************************************************" );
    puts("                     欢迎使用地址本管理系统V1.0(mem)                    " );
    puts("      Powered By C89, created by FZL in the last century :)        ");
    puts("********************************************************************\n" );
}

/*程序主循环*/
int main()
{
    int  option = 0;    

    int ncNum = 0;              /*局部变量，有效记录个数*/
    struct AddrInfo ncData[MAX_LEN] ;   /*局部变量，记录的数组*/

    DispProgInfo( );            /*显示程序信息 */

    do
    {
        puts(" ");              /*提示用户选择操作*/
        puts("请选择操作：" );
        puts(" 0：退出系统 " );
        puts(" 1：添加记录 ") ;
        puts(" 2：删除记录 ") ; 
        puts(" 5：显示所有记录信息 \n" );
        
        if (scanf("%d", &option ) != 1)     /*输入的不是数字*/
        {
            option = -1;
            printf("\n 无效输入，请输入数字\n");
        }

        /*丢弃本行剩余字符。
          注意：fflush(stdin) 在 macOS 上是未定义行为，不会真正清空输入缓冲，
          会导致后面 fgets 读到残留的换行，所以这里手动读到行尾。*/
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
                ;
        }

        switch(option )         /*根据用户选择调用相关函数完成指定的操作*/
        {
            case 1:                 /*添加一个记录*/
                ncNum = addMember(ncData, ncNum);
                break;
            case 2:                 /*删除记录*/
                ncNum = delMember(ncData, ncNum);
                break;
            case 5:                 /*打印所有记录信息*/
                dispAll(ncData, ncNum);
                break;
            default:            
                break;
        }
    }while(option != 0 );   

    return 0;
}

