//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n == 0)
//		{
//			break;
//		}
//		int all = 0;
//		int arr[50][50] = { 0 };
//		for (int i = 0;i < n;i++)
//		{
//			for (int j = 0;j < n;j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		int row = 0;
//		int col = 0;
//		for (all = 0;all <= 2 * n - 2;all++)
//		{
//			if (all <= n - 1)
//			{
//				if (all % 2 == 0)
//				{
//					for (col = 0, row = all - col;row >= 0;col++, row--)
//					{
//						printf("%d ", arr[row][col]);
//					}
//				}
//				else if (all % 2 == 1)
//				{
//					for (row = 0, col = all - row;col >= 0;row++, col--)
//					{
//						printf("%d ", arr[row][col]);
//					}
//				}
//			}
//			else
//			{
//				if (all == 2 * n - 2)
//				{
//					if (all % 2 == 0)
//					{
//						for (col = all / 2, row = all - col;row >= all / 2;col++, row--)
//						{
//							printf("%d ", arr[row][col]);
//						}
//					}
//					else if (all % 2 == 1)
//					{
//						for (row = (all - 1) / 2, col = all - row;col >= (all - 1) / 2;row++, col--)
//						{
//							printf("%d ", arr[row][col]);
//						}
//					}
//				}
//				else
//				{
//					if (all % 2 == 0)
//					{
//						for (col = (all / 2) - (2 * n - 2 - all) / 2, row = all - col;row >= (all / 2) - (2 * n - 2 - all) / 2;col++, row--)
//						{
//							printf("%d ", arr[row][col]);
//						}
//					}
//					else if (all % 2 == 1)
//					{
//						for (row = (all - 1) / 2 - (2 * n - 2 - all) / 2, col = all - row;col >= (all - 1) / 2 - (2 * n - 2 - all) / 2;row++, col--)
//						{
//							printf("%d ", arr[row][col]);
//						}
//					}
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}