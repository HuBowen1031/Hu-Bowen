/*********************************************************
* 这是地址本管理程序的记录结构文件。
**********************************************************/

//避免重复包含
#pragma once

/*用宏定义来规定各个字符串数据项的最大长度*/
#define LEN_NAME    16
#define LEN_EMAIL   32
#define LEN_TELENO  16

/*最大容量*/
#define MAX_LEN    30


/*定义一条记录的数据结构类型*/
struct AddrInfo
{    
    char name[LEN_NAME + 1];        /*成员姓名*/
    char teleno[LEN_TELENO + 1];    /*成员的电话*/
    char email[LEN_EMAIL+ 1];       /*成员e-mail地址*/
};




