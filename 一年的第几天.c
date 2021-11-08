//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		int year, month, day, all;
//		printf("Äê£º");
//		scanf("%d", &year);
//		printf("ÔÂ£º");
//		scanf("%d", &month);
//		printf("ÈÕ£º");
//		scanf("%d", &day);
//		if ((year % 4 == 0 && year % 400 != 0) || (year % 400 == 0))
//		{
//			int arr[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//			int j = 0;
//			for (j = 1,all=0;j < month;j++)
//			{
//				all = all + arr[j];
//			}
//			printf("%d\n", all + day);
//		}
//		else
//		{
//			int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//			int k = 0;
//			for (k = 1, all = 0;k < month;k++)
//			{
//				all = all + arr[k];
//			}
//			printf("%d\n", all+day);
//		}
//	}
//	return 0;
//}