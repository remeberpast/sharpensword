#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void menu()
{
	printf("*********************\n");
	printf("****1.加*****2.减****\n");
	printf("****3.乘*****4.除****\n");
	printf("*******0.退出********\n");
	printf("*********************\n");
}
int ADD(int x, int y)
{
	return x + y;
}
int SUB(int x, int y)
{
	return x - y;
}
int MUL(int x, int y)
{
	return x * y;
}
int DIV(int x, int y)
{
	return x / y;
}
int Clac(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入操作数：");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
int main(void)
{
	/*int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		int x = 0;
		int y = 0;
		int ret = 0;
		switch (input)
		{
		case 1:
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			ret = ADD(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			ret = SUB(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			ret = MUL(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			ret = DIV(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);*/


	//利用函数指针简化代码
	//int input = 0;
	//do
	//{
	//	int x = 0;
	//	int y = 0;
	//	int ret = 0;
	//	int (*pfarr[10])(int, int) = { NULL,ADD,SUB,MUL,DIV };//这样的数组通常叫做转移表
	//	menu();
	//	printf("请选择：");
	//	scanf("%d", &input);
	//	if (input == 0)
	//	{
	//		printf("退出计算器\n");
	//	}
	//	else if (input > 4)
	//	{
	//		printf("输入错误请重新输入\n");
	//	}
	//	else
	//	{
	//		printf("请输入两个操作数：");
	//		scanf("%d %d", &x, &y);
	//		ret = (pfarr[input])(x, y);
	//		printf("%d\n", ret);
	//	}
	//} while (input);


	//利用回调函数优化版本:利用函数Clac去调用不同的函数
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		int x = 0;
		int y = 0;
		int ret = 0;
		switch (input)
		{
		case 1:
			ret = Clac(ADD);
			printf("%d\n", ret);
			break;
		case 2:
			ret = Clac(SUB);
			printf("%d\n", ret);
			break;
		case 3:
			ret = Clac(MUL);
			printf("%d\n", ret);
			break;
		case 4:
			ret = Clac(DIV);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);


	return 0;
}