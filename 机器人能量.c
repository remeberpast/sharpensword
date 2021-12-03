//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int arr[50000] = { 0 };
//int rrr[50000] = { 0 };
//int main(void)
//{
//	int n = 0;
//	int i = 0;
//	int all = 0;
//	int min = 0;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//		all = all + arr[i];
//		rrr[i] = all;
//	}
//	int a = 0;
//	int b = 0;
//	for (a = 0;a < n - 1;a++)
//	{
//		for (b = 0;b < n - a - 1;b++)
//		{
//			if (rrr[b] > rrr[b + 1]) 
//			{
//				int tmp = rrr[b];
//				rrr[b] = rrr[b + 1];
//				rrr[b + 1] = tmp;
//			}
//		}
//	}
//	if (rrr[0] < 0)
//	{
//		printf("%d", -rrr[0]);
//	}
//	else
//	{
//		printf("%d", 0);
//	}
//	return 0;
//}

//Ö£ºÆÓÅ»¯°æ
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	long all = 0;
//	long min = 0;
//	long arr[50000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		scanf("%ld", &arr[i]);
//		all = all + arr[i];
//		if (all < min)
//		{
//			min = all;
//		}
//	}
//	printf("%ld", -min);
//	return 0;
//}