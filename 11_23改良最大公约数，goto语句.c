#define _CRT_SECURE_NO_WARNINGS 1

////���������Լ��������a
//#include <stdio.h>
//int main(void)
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	int tmp = 0;
//	if (x > y)
//		tmp = y;
//	else
//		tmp = x;
//	while (1)
//	{
//		if (x % tmp == 0 && y % tmp == 0)
//		{
//			printf("%d", tmp);
//			break;
//		}
//		tmp--;
//	}
//	return 0;
//}


////���Լ��������b��շת�������
//#include <stdio.h>
//int main(void)
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = 0;               //�����ж�mn��С�����ǿ��Գɹ���
//	while (m % n)
//	{
//		tmp = m % n;
//		m = n;
//		n = tmp;
//	}
//	printf("%d", n);
//	return 0;
//}


//��С�����������棨m����n�������Լ�����ɣ�


////�ػ���������������ֹͣ�ػ���
////shutdown -s -t 60(60��ػ�)��shutdown -a��ȡ���ػ���
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h> 
//int main(void)
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("���ĵ��Խ���һ�����ڹػ��������롰��������ֹͣ�ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

