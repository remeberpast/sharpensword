//#define _CRT_SECURE_NO_WARNINGS 1
////��������Ϸ���������һ��1��100���������Ȼ��ȥ�£��������´��˻��ǲ�С�ˣ���Ϸ����һֱ������˳���Ϸ
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>     //ʹ���������������ʱ��Ҫ���ô�ͷ�ļ�
//void menu()
//{
//	printf("***************************\n");
//	printf("*********1.play************\n");
//	printf("*********0.exit************\n");
//	printf("***************************\n");
//}
//
//void game()           //��������Ϸ��ʵ��
//{
//	int ret = rand() % 100 + 1;      //�������������������ֵ��һ��0��32767��һ����,��%100��������0��99����+1��Ϊ1��100
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ���¶��ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main(void)
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));               //()������Ҫһ����ʱ�仯��ֵ��ʱ��պ��Ǻ�
//	do
//	{
//		menu();    //��ӡһ���˵�
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("���һ������\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��1/0��\n");
//			break;
//		}
//	} while (input);         //�˴�inputΪ0�ж�Ϊ�٣��������Ϊ��
//	
//	return 0;
//}