#define _CRT_SECURE_NO_WARNINGS 1
//通讯录：(动态增长版本)
// 内存不够用时可增加
//1.可以存放1000人信息
//2.包括人名、年龄、性别、地址、电话
//3.可以查找、增删、排序、修改
//版本3：使用文件是通讯录退出后也能记住数据

#include "contact.h"

void menu()
{
	printf("*****************************************\n");
	printf("*****1.增加联系人 ***** 2.删去联系人*****\n");
	printf("*****3.查找联系人 ***** 4.修改信息  *****\n");
	printf("*****5.联系人排序 ***** 6.打印信息  *****\n");
	printf("*****0.退出并保存 ***** *****************\n");
	printf("*****************************************\n");
}

//把选项定义为枚举类型方便记忆
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main(void)
{
	int input = 0;
	////创建通讯录con
	contact con;
	//Peoinfo date[MAX_DATE];
	////必须知道当前通讯录中有多少个元素，以便添加，用一个变量来记录
	//int sz = 0;
	//于是可以改进为把通讯录与sz统一再一起，封装起来（头文件中）
	//初始化通讯录
	
	//对于动态版本，还要知道通讯录的最大容量，不够时再加

	//动态版本的的初始化函数，还要在堆区开辟空间
	InitContact(&con);
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			//在销毁之前保存
			SaveContact(&con);
			//动态版时，退出时便销毁通讯录,归还内存
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}