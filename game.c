#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf(" 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 \n");
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");            //所有行列都用ROW与COL这样修改时很方便
			}
		}
		printf("%d\n", i + 1);                       //打印完后换一次行
		if (i < row - 1)
		{   
			for (j = 0;j < col;j++)           //用col-1,row-1最后一行，最后一列的分隔号时不用打印的嘛
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");           //打印完一行后换行
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下：\n");
	printf("请输入棋盘坐标：");       //坐标从1开始
	//判断坐标是否合法（是否在棋盘内）
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋，先就要判断坐标是否已经有棋子了
			if (board[y - 1][x - 1] == ' ')
			{
				board[y - 1][x - 1] = '*';
				break;
			}
			else
			{
				printf("该处已有棋子，请重新下棋\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

//可以优化电脑下棋，使人机不那么笨。
void CommputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下：\n");
	while (1)
	{
		int x = rand() % row;        //使用随机数，srand放在main函数中
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			if (board[x + 1][y] == '*' || board[x][y + 1] == '*' || board[x - 1][y] == '*' || board[x][y - 1] == '*' || board[x + 1][y + 1] == '*' || board[x - 1][y - 1] == '*' || board[x + 1][y - 1] == '*' || board[x - 1][y + 1] == '*')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没有满
			}
		}
	}
	return 1;//前面一直没有return，故棋盘满了
}

//还有地方需要优化，这里只能判断3*3棋盘胜利，不能判断更大的棋盘。
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	//判断三行
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col - 4;j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] == board[i][j + 3] && board[i][j + 3] == board[i][j + 4] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//判断三列
	for (i = 0;i < col;i++)
	{
		for (j = 0;j < row - 2;j++)
		{
			if (board[j][i] == board[j + 1][i] && board[j + 1][i] == board[j + 2][i] && board[j + 2][i] == board[j + 3][i] && board[j + 3][i] == board[j + 4][i] && board[j][i] != ' ')
			{
				return board[j][i];
			}
		}
	}
	//判断对角线
	for (a = 0;a < row - 4;a++)
	{
		for (i = a, j = 0;i < row - 4 && j < col - 4;i++, j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] == board[i + 3][j + 3] && board[i + 3][j + 3] == board[i + 4][j + 4] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (b = 1;b < col - 4;b++)
	{
		for (i = 0, j = b;i < row - 4 && j < col - 4;i++, j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] == board[i + 3][j + 3] && board[i + 3][j + 3] == board[i + 4][j + 4] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (a = row;a >= 4;a--)
	{
		for (i = a, j = 0;i >= 4 && j < col - 4;i--, j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i - 1][j + 1] == board[i - 2][j + 2] && board[i - 2][j + 2] == board[i - 3][j + 3] && board[i - 3][j + 3] == board[i - 4][j + 4] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (b = col;b >= 4;b--)
	{
		for (i = 0, j = b;i < row - 4 && j >= 4;i++, j--)
		{
			if (board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i + 2][j - 2] == board[i + 3][j - 3] && board[i + 3][j - 3] == board[i + 4][j - 4] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//判断是否平局（棋盘满了就平局）
	int ret = IsFull(board, row, col);
	if (ret == 1)
		return 'Q';
	else
		return 'C';
}