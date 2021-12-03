#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int N = 0;
//	scanf("%d", &N);
//	int arr1[50000] = { 0 };
//	int arr2[50000] = { 0 };
//	for (i = 0;i < N;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int count = 0;
//	for (j = 0;j < N ;j++)
//	{
//		
//		int t = 0;
//		int m = j;
//		for (k = j + 1;k < N;k++)
//		{
//			if (arr1[m] <= arr1[k])
//			{
//				t++;
//				m = k;
//			}
//		}
//		if (t > 0)
//		{
//			count++;
//		}
//		
//		/*arr2[j] = count;*/
//	}
//	printf("%d", count);
//	/*int a = 0;
//	int b = 0;
//	for (a = 0;a < N;a++)
//	{
//		for (b = 0;b < a;b++)
//		{
//			if (arr2[b] < arr2[b + 1])
//			{
//				int tmp = arr2[b];
//				arr2[b] = arr2[b + 1];
//				arr2[b + 1] = tmp;
//			}
//		}
//	}
//	printf("%d", arr2[0]);*/
//	return 0;
//}
//
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int N = 0;
//	int arr1[50000] = { 0 };
//	scanf("%d", &N);
//	for (i = 0;i < N;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int a = 0;
//	int b = 0;
//	int arr2[50000] = { 0 };
//	for (a = 0;a < N;a++)
//	{
//		a = 0;
//		int count = 0;
//		for (b = 1;b < N - a;b++)
//		{
//			if (arr1[a] < arr1[a + b - 1])
//			{
//				a = a + b;
//				count++;
//			}
//		}
//		arr2[a] = count + 1;
//	}
//	int m = 0;
//	int n = 0;
//	for (m = 0;m < N;m++)
//	{
//		for (n = 0;n < m;n++)
//		{
//			if (arr2[n] < arr2[n + 1])
//			{
//				int tmp = arr2[n];
//				arr2[n] = arr2[n + 1];
//				arr2[n + 1] = tmp;
//			}
//		}
//	}
//	printf("%d\n", arr2[0]);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int N = 0;
//	int arr[50000] = { 0 };
//	int arr1[50000] = { 0 };
//	int count;
//	int max = 0;
//	scanf("%d", &N);
//	for (i = 0;i < N;i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (int i = 0;i < N;i++)
//	{
//		count = 0;
//		int k = i;
//		for (int j = k + 1;j < N;j++)
//		{
//			if (arr[k] < arr[j])
//			{
//				k = j;
//				j = k;
//				count++;
//			}
//		}
//		if (count > max)
//		{
//			max = count;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}