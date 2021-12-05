#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------扫雷------------\n");
	//打印列号
	for (i = 0;i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)   //初始化i、j为1，因为打印棋盘是要跳过第一行第一列最后一行最后一列
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------扫雷------------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = easy_count;
	while (count)
	{
		//随机生成下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//static修饰后这个函数只能在此文件（game.c）中使用,可以防止与其他文件中的函数名冲突，此处没有特别作用，不加也可以
int get_mine_count(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* pa)
{ 
	//因为雷的位置是放的字符1，故直接将周围8个位置的字符相加，再减去8个字符0，就得到了对应的雷的个数（数字加字符‘0’==‘数字’）
	int count = mine[x - 1][y - 1] + mine[x + 1][y + 1]  //用循环也可以
		+ mine[x + 1][y - 1] + mine[x - 1][y + 1]
		+ mine[x + 1][y] + mine[x - 1][y]
		+ mine[x][y + 1] + mine[x][y - 1] - 8 * '0';
	show[x][y] = count + '0';
	(*pa)++;
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//输入排查的坐标
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- easy_count)
	{
		printf("请输入排查的坐标：");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//检查坐标是否是雷
			if (mine[x][y] == '1')//是雷
			{
				printf("BOOM!!!您被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else                //不是雷
			{
				//坐标周围雷的信息
				int count = get_mine_count(mine, show, x, y, &win);
				if (count == 0)
				{
					get_mine_count(mine, show, x + 1, y + 1, &win);
					get_mine_count(mine, show, x - 1, y - 1, &win);
					get_mine_count(mine, show, x + 1, y - 1, &win);
					get_mine_count(mine, show, x - 1, y + 1, &win);
					get_mine_count(mine, show, x, y + 1, &win);
					get_mine_count(mine, show, x, y - 1, &win);
					get_mine_count(mine, show, x + 1, y, &win);
					get_mine_count(mine, show, x - 1, y, &win);

				}
				//显示排查出的信息
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
	}
	if (win == row * col - easy_count)
	{
		printf("恭喜你！排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
}