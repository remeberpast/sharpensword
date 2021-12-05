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
	printf("------------ɨ��------------\n");
	//��ӡ�к�
	for (i = 0;i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)   //��ʼ��i��jΪ1����Ϊ��ӡ������Ҫ������һ�е�һ�����һ�����һ��
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------ɨ��------------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = easy_count;
	while (count)
	{
		//��������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//static���κ��������ֻ���ڴ��ļ���game.c����ʹ��,���Է�ֹ�������ļ��еĺ�������ͻ���˴�û���ر����ã�����Ҳ����
int get_mine_count(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* pa)
{ 
	//��Ϊ�׵�λ���Ƿŵ��ַ�1����ֱ�ӽ���Χ8��λ�õ��ַ���ӣ��ټ�ȥ8���ַ�0���͵õ��˶�Ӧ���׵ĸ��������ּ��ַ���0��==�����֡���
	int count = mine[x - 1][y - 1] + mine[x + 1][y + 1]  //��ѭ��Ҳ����
		+ mine[x + 1][y - 1] + mine[x - 1][y + 1]
		+ mine[x + 1][y] + mine[x - 1][y]
		+ mine[x][y + 1] + mine[x][y - 1] - 8 * '0';
	show[x][y] = count + '0';
	(*pa)++;
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//�����Ų������
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- easy_count)
	{
		printf("�������Ų�����꣺");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//��������Ƿ�����
			if (mine[x][y] == '1')//����
			{
				printf("BOOM!!!����ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else                //������
			{
				//������Χ�׵���Ϣ
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
				//��ʾ�Ų������Ϣ
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
	if (win == row * col - easy_count)
	{
		printf("��ϲ�㣡���׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}