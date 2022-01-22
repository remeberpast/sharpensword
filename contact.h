#pragma once

//类型定义放在头文件中，因为其他不同文件都可能用到，所以放在头文件中，在其他文件应用头文件即可
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_DATE 100
#define INC_SZ 5

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Peoinfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

//静态版本
//typedef struct contact
//{
//	Peoinfo date[MAX_DATE];
//	int sz;//sz用于记录通讯录当前通讯录有多少人，以便后续的添加
//}contact;

//动态版本
typedef struct contact
{
	Peoinfo* date;
	int sz;//sz用于记录通讯录当前通讯录有多少人，以便后续的添加
	int capacity;
}contact;

//初始化通讯录
void InitContact(contact* pc);

//增加联系人
void AddContact(contact* pc);

//打印信息,因为不用修改，用const修饰是函数更安全
void PrintContact(const contact* pc);

//删除联系人
void DelContact(contact* pc);

//查找联系人
void SearchContact(contact* pc);

//修改联系人
void ModifyContact(contact* pc);

//将联系人排序
void SortContact(contact* pc);

//退出时销毁通讯录
void DestroyContact(contact* pc);

//保存通讯录信息到文件
void SaveContact(contact* pc);

//加载文件
void LoadContact(contact* pc);

//检测容量不够就增容
void CheckCapacity(contact* pc);

//通过名字查找
int FindByName(contact* pc, char name[]);