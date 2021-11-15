//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int i, n, x;//n为n个数，x表示要寻找的数。
//	for (;;)
//	{
//		scanf("%d %d", &n, &x);
//		if (n < 0 || n>100) 
//		{
//			printf("Input Error\n");
//		}
//		else if (n == 0)
//		{
//			printf("End Of Input\n");
//			break;
//		}
//		else
//		{
//			int k = 0;
//			int l = 0;
//			int arr[100] = { 0 };
//			for (i = 0;i < n;i++)
//			{
//				scanf("%d", &arr[i]);
//				for (int a = 0;a < i;a++)
//				{
//					if (arr[i] == arr[a])
//					{
//						l++;
//					}
//				}
//			}
//			if (l > 0)
//			{
//				printf("Input Error\n");
//			}
//			else
//			{
//				for (int j = 0;j < n;j++)
//				{
//
//					if (arr[j] == x)
//					{
//						printf("%d\n", j + 1);
//						k++;
//					}
//				}
//				if (k == 0)
//					printf("Input Error\n");
//			}
//		}
//	}
//	
//	return 0;
//}