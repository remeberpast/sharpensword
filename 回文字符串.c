//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//char arr[1000] = { 0 };
////�ж��Ƿ����
//int is_re(int n)
//{
//	int tmp = n;
//	int a = 0, re = 0;
//	while (tmp != 0)
//	{
//		a = tmp % 10;
//		re = re * 10 + a;
//		tmp = tmp / 10;
//	}
//	if (re == n)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main(void)
//{
//	//�����ı�
//	int n = 0;
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		arr[n] = ch;
//		n++;
//	}
//	//�ҳ�����
//	char num_arr[100][10] = { 0 };
//	int a = 0, b = 0;
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] >= '0' && arr[i] <= '9')
//		{
//			num_arr[a][b] = arr[i];
//			if (arr[i + 1] >= '0' && arr[i + 1] <= '9')
//			{
//				b++;
//			}
//			else
//			{
//				a++;
//				b = 0;
//			}
//		}
//	}
//	int num[100] = { 0 };
//	//�ַ���������ת��Ϊ����
//	for (int i = 0;i < a;i++)
//	{
//		num[i] = atoi(num_arr[i]);
//	}
//	//�жϻ���
//	int re_count = 0;
//	int re_num[100] = { 0 };
//	for (int i = 0;i < a;i++)
//	{
//		if (is_re(num[i]) == 1)
//		{
//			re_count++;
//			re_num[i] = num[i];
//		}
//	}
//	if (re_num[0] == 0)
//	{
//		printf("None\n");
//		exit(0);
//	}
//	//�Ÿ���
//	for (int x = 0;x < a - 1;x++)
//	{
//		for (int y = 0;y < a - x - 1;y++)
//		{
//			if (re_num[y] < re_num[y + 1])
//			{
//				int tmp = re_num[y];
//				re_num[y] = re_num[y + 1];
//				re_num[y + 1] = tmp;
//			}
//		}
//	}
//	//��ÿ�������ֵĴ���,һά��������������ִ���
//	int times[2][100] = { 0 };
//	for (int i = 0,count = 1;i < re_count - 1;i++)
//	{
//		if (re_num[i] > re_num[i + 1])
//		{
//			times[0][i] = re_num[i];
//			times[1][i] = count;
//			count = 1;
//		}
//		else
//		{
//			count++;
//		}
//		if ((i == re_count - 2) && (re_num[i] > re_num[i + 1]))
//		{
//			times[0][i + 1] = re_num[i + 1];
//			times[1][i + 1] = count;
//		}
//	}
//	//�Դ�����������(��Ҫ�������һ��)
//	for (int a = 0;a < re_count - 1;a++)
//	{
//		for (int b = 0;b < re_count - a - 1;b++)
//		{
//			if (times[1][b] < times[1][b + 1])
//			{
//				int tmp1 = times[0][b];
//				times[0][b] = times[0][b + 1];
//				times[0][b + 1] = tmp1;
//				int tmp2 = times[1][b];
//				times[1][b] = times[1][b + 1];
//				times[1][b + 1] = tmp2;
//			}
//		}
//	}
//	//���
//	for (int i = 0;i < re_count;i++)
//	{
//		if (times[1][i] > times[1][i + 1])
//		{
//			printf("%d %d\n", times[0][i], times[1][i]);
//			break;
//		}
//		else
//		{
//			printf("%d ", times[0][i]);
//		}
//	}
//	return 0;
//}