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
				printf("|");            //�������ж���ROW��COL�����޸�ʱ�ܷ���
			}
		}
		printf("%d\n", i + 1);                       //��ӡ���һ����
		if (i < row - 1)
		{   
			for (j = 0;j < col;j++)           //��col-1,row-1���һ�У����һ�еķָ���ʱ���ô�ӡ����
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");           //��ӡ��һ�к���
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����£�\n");
	printf("�������������꣺");       //�����1��ʼ
	//�ж������Ƿ�Ϸ����Ƿ��������ڣ�
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//���壬�Ⱦ�Ҫ�ж������Ƿ��Ѿ���������
			if (board[y - 1][x - 1] == ' ')
			{
				board[y - 1][x - 1] = '*';
				break;
			}
			else
			{
				printf("�ô��������ӣ�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

//�����Ż��������壬ʹ�˻�����ô����
void CommputerMove(char board[ROW][COL], int row, int col)
{
	printf("�����£�\n");
	while (1)
	{
		int x = rand() % row;        //ʹ���������srand����main������
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
				return 0;//����û����
			}
		}
	}
	return 1;//ǰ��һֱû��return������������
}

//���еط���Ҫ�Ż�������ֻ���ж�3*3����ʤ���������жϸ�������̡�
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	//�ж�����
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
	//�ж�����
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
	//�ж϶Խ���
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
	//�ж��Ƿ�ƽ�֣��������˾�ƽ�֣�
	int ret = IsFull(board, row, col);
	if (ret == 1)
		return 'Q';
	else
		return 'C';
}