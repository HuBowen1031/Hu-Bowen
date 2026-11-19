/*********************************************************
* 这是地址本管理程序的功能文件。实现记录的增加、删除和显示
**********************************************************/

//避免重复包含
#pragma once

#include "AddrInfo.h"

/*记录操作*/
int addMember(struct AddrInfo *pData, int num);         /*添加一个记录*/
int delMember(struct AddrInfo *pData, int num);         /*删除一个记录*/
void dispAll(struct AddrInfo *pData, int num);          /*显示所有记录信息*/
void dispOneRecord(const struct AddrInfo *memData);     /*显示一个记录信息*/

