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
	//����
	//�����ף��ף�1�������ף�0��ע���������壺1���׻����׵���Ϣ����
	// �����������飬һ������������ף�һ�����������Ϣ���������鶼��char����
	//ɨ��
	//��Ҫ����һ��9*9�����̣����鴴���11*11�ȽϺã���Ϊ���Ų��ʱ�򲻻�����Խ��
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ�����̣�һ��ȫ����ʼ��Ϊ�ַ�0�����������㣩����������׵ģ�����һ�������������Ҳ�Ǵ��ɨ����Ϣ�ģ�
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����(����ȥ��������11��11����ӡֻ��ӡ9*9,����ӡ�м��9*9)
	DisplayBoard(show, ROW, COL);
	//�����ף�10����
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);

}
int main(void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��1/0��\n");
			break;
		}
	} while (input);

	return 0;
}