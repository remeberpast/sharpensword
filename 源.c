#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void menu()
{
	printf("*********************\n");
	printf("****1.��*****2.��****\n");
	printf("****3.��*****4.��****\n");
	printf("*******0.�˳�********\n");
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
	printf("�������������");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
int main(void)
{
	/*int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		int x = 0;
		int y = 0;
		int ret = 0;
		switch (input)
		{
		case 1:
			printf("�������������");
			scanf("%d %d", &x, &y);
			ret = ADD(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("�������������");
			scanf("%d %d", &x, &y);
			ret = SUB(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("�������������");
			scanf("%d %d", &x, &y);
			ret = MUL(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("�������������");
			scanf("%d %d", &x, &y);
			ret = DIV(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);*/


	//���ú���ָ��򻯴���
	//int input = 0;
	//do
	//{
	//	int x = 0;
	//	int y = 0;
	//	int ret = 0;
	//	int (*pfarr[10])(int, int) = { NULL,ADD,SUB,MUL,DIV };//����������ͨ������ת�Ʊ�
	//	menu();
	//	printf("��ѡ��");
	//	scanf("%d", &input);
	//	if (input == 0)
	//	{
	//		printf("�˳�������\n");
	//	}
	//	else if (input > 4)
	//	{
	//		printf("�����������������\n");
	//	}
	//	else
	//	{
	//		printf("������������������");
	//		scanf("%d %d", &x, &y);
	//		ret = (pfarr[input])(x, y);
	//		printf("%d\n", ret);
	//	}
	//} while (input);


	//���ûص������Ż��汾:���ú���Clacȥ���ò�ͬ�ĺ���
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
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
			printf("�˳�����\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);


	return 0;
}