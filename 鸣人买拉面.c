//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int i, n, l, k, y;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	scanf("%d%d%d%d", &n, &l, &k, &y);
//	for (i = 0;i < n;i++)
//	{
//		int a = 0, b = 0, c = 0, j = 0;
//		getchar();
//		while (arr2[j] = getchar() != '\n')
//		{
//			arr2[j] = getchar();
//			j++;
//		}
//		for (int p = 0, a = 0, b = 0, c = 0;p<=j;p++)
//		{
//			if (arr1[p] == 'A')
//				a++;
//			else if (arr1[p] == 'B')
//				b++;
//			else if (arr2[p] == 'C')
//				c++;
//		}
//		arr2[j] = a * l + b * k + c * y;
//	}
//	for (int g = 0;g < 100;g++)
//	{
//		for (int h = 0;h < 100 - g - 1;h++)
//		{
//			int tmp;
//			if (arr2[h] > arr2[h + 1])
//			{
//				tmp = arr2[h];
//				arr2[h] = arr2[h+1];
//				arr2[h+1] = tmp;
//			}
//		}
//	}
//	printf("%d", arr2[n - 1]);
//	return 0;
//}
////ÐÞ¸Ä°æ
//#include <stdio.h>
//int main(void)
//{
//	int i, n, l, k, y;
//	char arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int m = 0;
//	scanf("%d %d %d %d", &n, &l, &k, &y);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		int j = 0;
//		do
//		{
//			arr1[j] = getchar();
//			j++;
//		} while (arr1[j - 1] != '\n');
//		for (int p = 0; p < j; p++)
//		{
//			if (arr1[p] == 'A')
//				a++;
//			else if (arr1[p] == 'B')
//				b++;
//			else if (arr1[p] == 'C')
//				c++;
//		}
//		arr2[m] = a * (l + k + y) + b * (2 * l + k) + c * (3 * l + 3 * k + 2 * y);
//		m++;
//	}
//	for (int g = 0; g < n; g++)
//	{
//		for (int h = 0; h < n - g - 1; h++)
//		{
//			if (arr2[h] > arr2[h + 1])
//			{
//				int tmp = arr2[h];
//				arr2[h] = arr2[h + 1];
//				arr2[h + 1] = tmp;
//			}
//		}
//	}
//	printf("%d\n", arr2[0]);
//	return 0;
//}

////Ö£ºÆÐ¡daiÂë
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1]);
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n, l, k, y;
//	scanf("%d %d %d %d", &n, &l, &k, &y);
//	getchar();
//	char ch = 0;
//	int time[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		int A = 0;
//		int B = 0;
//		int C = 0;
//		do
//		{
//			scanf("%c", &ch);
//			switch (ch)
//			{
//			case 'A':
//				A++;
//				break;
//			case 'B':
//				B++;
//				break;
//			case 'C':
//				C++;
//				break;
//			}
//		} while (ch != '\n');
//		time[i] = A * (l + k + y) + B * (2 * l + k) + C * (3 * l + 3 * k + 2 * y);
//	}
//	bubble_sort(time, n);
//	printf("%d\n", time[0]);
//	return 0;
//}