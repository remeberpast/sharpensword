//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//long arr[50][50] = { 0 };
//long arr2[50][50] = { 0 };
//int main(void)
//{
//	//�����������K�η�
//	int N = 0;
//	int k = 0;
//	scanf("%d %d", &N, &k);
//	getchar();
//	//������д�������
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = 0;j < N;j++)
//		{
//			scanf("%ld", &arr[i][j]);
//		}
//	}
//	//����
//
//	
//	for (int a = 0;a < N;a++)
//	{
//		for (int b = 0;b < N;b++)
//		{
//			int sum = 0;
//			for (int x = 0;x < N;x++)
//			{
//				sum = sum + arr[a][x] * arr[x][b];
//			}
//			arr2[a][b] = sum;
//		}
//	}
//	//����õ��Ľ��
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = 0;j < N;j++)
//		{
//			printf("%ld ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}