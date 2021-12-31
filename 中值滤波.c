//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void find_middle(int arr0[], int w)
//{
//	for (int a = 0;a < w - 1;a++)
//	{
//		for (int b = 0;b < w - 1 - a;b++)
//		{
//			if (arr0[b] < arr0[b + 1])
//			{
//				int tmp = arr0[b];
//				arr0[b] = arr0[b + 1];
//				arr0[b + 1] = tmp;
//			}
//		}
//	}
//}
////int main()
////{
////	int arr[10] = { 1,3,12,5,9,7,2,10,32,8 };
////	find_middle(arr, 10);
////	for (int i = 0;i < 10;i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}
//int main(void)
//{
//	//w为滤波宽度，n为数的个数
//	//滤波次数n-w+1
//	int w, n;
//	while (scanf("%d%d", &w, &n) != EOF)
//	{
//		int arr[100] = { 0 };
//		int brr[100] = { 0 };
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		if (w % 2 == 0)
//		{
//			printf("ERROR\n");
//			continue;
//		}
//		//滤波
//		for (int i = 0;i < n - w + 1;i++)
//		{
//			int arr0[100] = { 0 };
//			for (int j = 0;j < w;j++)
//			{
//				arr0[j] = arr[j + i];
//			}
//			//将arr0排序
//			/*for (int a = 0;a < w - 1;a++)
//			{
//				for (int b = 0;b < w - 1 - a;b++)
//				{
//					if (arr0[b] < arr0[b + 1])
//					{
//						int tmp = arr0[b];
//						arr0[b] = arr0[b + 1];
//						arr0[b + 1] = tmp;
//					}
//				}
//			}*/
//			find_middle(arr0, w);
//			brr[i] = arr0[w / 2];
//		}
//		//替换
//		for (int a = 0;a < n - w + 1;a++)
//		{
//			arr[w / 2 + a] = brr[a];
//		}
//		//输出
//		for (int k = 0;k < n;k++)
//		{
//			printf("%d ", arr[k]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//int N[250] = { 0 };
//int my_atoi(const char* str)
//{
//	int num = 0;
//	int len = strlen(str);
//	for (int i = 0;i < len;i++)
//	{
//		if (str[i] >= 48 && str[i] <= 57)
//			N[len - i - 1] = str[i] - '0';
//		else
//			return 0;
//	}
//	for (int j = len - 1;j >= 0;j--)
//	{
//		num += (int)(N[j] * pow(10, j));
//	}
//	return num;
//}
//int main()
//{
//	printf("%d\n", my_atoi("abcd"));//48~57
//	return 0;
//}

//#include<stdio.h>
//int sort(int arr[], int start, int sz)//对滤波窗口内的数进行排序
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[start + j] > arr[start + j + 1])
//			{
//				int tmp = arr[start + j];
//				arr[start + j] = arr[start + j + 1];
//				arr[start + j + 1] = tmp;
//			}
//		}
//	}
//	return arr[start + (sz - 1) / 2];
//}
//void copy(int* tmp, int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		*(tmp + i) = *(arr + i);
//	}
//}
//int main()
//{
//
//	int w, n;
//	int arr[1000] = { 0 };
//	int tmp[1000] = { 0 };
//	int replace[1000] = { 0 };
//	while (scanf("%d%d", &w, &n) != EOF)
//	{
//		if (w % 2 == 1)
//		{
//			for (int p = 0; p < n; p++)
//			{
//				scanf("%d", &arr[p]);
//			}
//			copy(tmp, arr, n);
//			if (w <= n)
//			{
//				int k = 0;
//				for (int i = (w - 1) / 2; i <= n - 1 - (w - 1) / 2; i++)
//				{
//					replace[k] = sort(tmp, i - (w - 1) / 2, w);
//					copy(tmp, arr, n);
//					k++;
//				}//找到替换的值并储存
//				for (int j = 0; j < k; j++)
//				{
//					arr[((w - 1) / 2) + j] = replace[j];
//				}//替换
//			}
//			else
//				;
//			for (int m = 0; m < n; m++)
//			{
//				printf("%d ", arr[m]);
//			}
//			printf("\n");
//		}
//		else
//			printf("ERROR\n");
//	}
//	return 0;
//}
