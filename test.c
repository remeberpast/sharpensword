#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("**********  1.play  *********\n");
	printf("**********  0.exit  *********\n");
	printf("*****************************\n");
}
void game()
{
	//�洢���ݣ���ά����
	char board[ROW][COL] = { 0 };
	//��ʼ�����̣���ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡ����,���ʾ��Ǵ�ӡ�����������
	DisplayBoard(board, ROW, COL);
	//��Ϸ�Ͱ�������ߣ�������
	char ret = 0;     //������Ϸ״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//�¹����ʹ�ӡһ������
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);   //iswin��������������Ӯ��*��������Ӯ����#��ƽ�֣�Q������Ϸ����(C)���ʴ˴����ĸ����Ŵ����������,ֻ�з���Cʱ��Ϸ�Ż����
		if (ret != 'C')
			break;
		 //��������									
		CommputerMove(board, ROW, COL);
		//�¹����ʹ�ӡһ������
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		printf("�˻����򲻹���SB�ǰ�\n");
		DisplayBoard(board, ROW, COL);
	}
	else
	{
		printf("ƽ��\n");
		DisplayBoard(board, ROW, COL);
	}
	//��������Ż�һ�£���Ϊ�������������Ҫ��ӡ���̣�����������ӡһ�μ���
	//DisplayBoard(board, ROW, COL);
}
int main(void)
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��1/0��\n");
			break;
		}
	} while (input);     //�����ʹ����input>1ʱ�ж�Ϊ�棬input=0ʱ�ж�Ϊ��
	return 0;
}