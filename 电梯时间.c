//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int i, j, T, N;
//	int arr[100] = { 0 };
//	int sum = 0;
//	scanf("%d", &T);
//	for (i = 0;i < T;i++)
//	{
//		scanf("%d", &N);
//		for (j = 0;j < N;j++)
//		{
//			scanf("%d", &arr[j]);
//		}
//		int k = 0;
//		sum = arr[0] * 6 + 5;
//		for (k = 0;k <= j; k++)
//		{
//			if (arr[k + 1] == 0)
//			{
//				break;
//			}
//			else
//			{
//				if (arr[k + 1] - arr[k] > 0)
//				{
//					sum = sum + (arr[k + 1] - arr[k]) * 6 + 5;
//				}
//				else if (arr[k + 1] - arr[k] < 0)
//				{
//					sum = sum + (arr[k] - arr[k + 1]) * 4 + 5;
//				}
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}