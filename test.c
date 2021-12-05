#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("*********  1.play  ***********\n");
	printf("*********  0.exit  ***********\n");
	printf("******************************\n");
}
void game()
{
	//棋盘
	//布置雷（雷：1，不是雷：0（注意区分歧义：1是雷还是雷的信息））
	// 创造两个数组，一个用用来存放雷，一个用来存放信息，两个数组都用char类型
	//扫雷
	//若要创造一个9*9的棋盘，数组创造成11*11比较好，因为在排查的时候不会数组越界
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘，一个全部初始化为字符0（不是数字零），用来存放雷的；另外一个用来输出，（也是存放扫雷信息的）
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘(传过去的数组是11，11但打印只打印9*9,即打印中间的9*9)
	DisplayBoard(show, ROW, COL);
	//布置雷（10个）
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);

}
int main(void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//游戏函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择（1/0）\n");
			break;
		}
	} while (input);

	return 0;
}