#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(void)
//{
//	//����N��ֵ
//	//��Ϊ������Ч����n/a��������������ַ�������
//	int N = 0;
//	scanf("%d", &N);
//	char arr[1000];
// 	int i = 0;
//	while (i<N)
//	{
//		if (arr[i] = getchar() == ' ')
//		{
//			i++;
//		}
//	}
//	/*for (int i = 0;i < N;i++)
//	{
//		scanf("%d", &arr[i]);
//	}*/
//	/*for (int i = 0;i < N;i++)
//	{
//		scanf("%s", &*arr[i]);
//	}*/
//	//ͳ����Ч�����ĸ���
//	int un_count = 0;
//	for (int i = 0;i < N;i++)
//	{
//		if (strcmp(arr[i], "n/a") == 0)
//		{
//			un_count++;
//		}
//	}
//	//�����ֵ
//	//ȫ����Ч
//	if (un_count == N)
//	{
//		printf("n/a\n");
//	}
//	//����ȫ����Ч
//	else
//	{
//		int sum = 0;
//		for (int i = 0;i < N;i++)
//		{
//			sum = sum + atoi(arr[i]);
//		}
//		float ave = sum * 1.0f / (N - un_count);
//		printf("%.2f\n", ave);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(void)
//{
//	//����N��������Ϊ��n/a�������ַ���
//	int N = 0;
//	scanf("%d", &N);
//	getchar();
//	char arr[100][4];
//	int i = 0, j = 0;
//	for (i = 0;i < N;i++)
//	{
//		scanf("%s", arr[i]);
//	}
//	//ͳ����Ч�ɼ�
//	int un_count = 0;
//	for (int i = 0;i < N;i++)
//	{
//		if (strcmp(arr[i], "n/a") == 0)
//		{
//			un_count++;
//		}
//	}
//
//	return 0;
//}


////��ɰ�
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(void)
// {
//	int N = 0;
//	scanf("%d", &N);
//	getchar();
//	char arr[100][4] = { 0 };
//	char ch = 0;
//	//�����ݴ�������
//	for (int i = 0,j = 0;i < N;)
//	{
//		ch = getchar();
//		if ((ch != ' ') && (ch != '\n'))
//		{
//			arr[i][j] = ch;
//			j++;
//		}
//		else
//		{
//			i++;
//			j = 0;
//		}
//	}
//	//ͳ����Ч�ɼ�����
//	int un_count = 0;
//	for (int i = 0;i < N;i++)
//	{
//		if (strcmp(arr[i], "n/a") == 0)
//		{
//			un_count++;
//		}
//	}
//	if (un_count == N)
//	{
//		printf("n/a\n");
//		exit(0);
//	}
//	//�����ֵ
//	int sum = 0;
//	for (int i = 0;i < N;i++)
//	{
//		sum = sum + atoi(arr[i]);
//	}
//	float avre = sum * 1.0f / (N - un_count);
//	printf("%.2f\n", avre);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int N[250] = { 0 };
int num[105] = { 0 };
int my_atoi(const char* str)
{
	int num = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
			N[len - i - 1] = str[i] - '0';
		else
			return 0;
	}
	for (int j = len - 1; j >= 0; j--)
	{
		num += (int)(N[j] * pow(10, j));
	}
	return num;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	char grades[10];
	int tmp = n;
	for (int i = 0; i < tmp; i++)
	{
		scanf("%s", &grades);
		num[i] = my_atoi(grades);
		if (strcmp(grades, "n/a") == 0)
			n--;
	}
	float avg = 0;
	int sum = 0;
	for (int j = 0; j < tmp; j++)
	{
		sum += num[j];
	}
	avg = sum / (n * 1.0);
	printf("%.2f\n", avg);
	return 0;
}