//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int C(a, b)
//{
//	int i, j, X, Y;
//
//	for (i = a, X = 1, j = b;i > a - j;i--)
//	{
//		X = X * i;
//	}
//	for (j = b, Y = 1;j > 0;j--)
//	{
//		Y = Y * j;
//	}
//	int c = X / Y;
//	return c;
//}
//
//int main(void)
//{
//	int i, n, sum;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		int a, b = 0;
//		scanf("%d", &a);
//		if (a == 0)
//		{
//			printf("1\n");
//		}
//		else if (a != 0)
//		{
//			for (b = 0, sum = 0;a >= b;a--, b++)
//			{
//				sum = sum + C(a, b);
//			}
//			printf("%d ", sum);
//		}
//
//	}
//
//	return 0;
//}