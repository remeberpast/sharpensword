//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int arr[30] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
// 
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0;i < n - 1;i++)
//	{
//		for (int j = 0;j < n - 1 - j;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	int count = 1;
//	for (int i = 0;i < n - 1;i++)
//	{
//		if (arr[i + 1] > arr[i])
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}