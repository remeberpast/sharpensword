//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//
//	int N = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &N);
//	for (int i = 0;i < N;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0;i < N - 1;i++)
//	{
//		for (int j = 0;j < N - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	int count = 0;
//	for (int i = 0;i < N;i++)
//	{
//		if (arr[i] % 3 == 0)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	if (count == N)
//	{
//		printf("Null\n");
//	}
//	return 0;
//}