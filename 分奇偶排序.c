#define _CRT_SECURE_NO_WARNINGS 1
//不小心写成了字符形式的数字，错误了
//#include <stdio.h>
//#include <stdlib.h>
////奇数在前，偶数在后
//void pupple_sort(int arr[], int count)
//{
//	for (int i = 0; i < count - 1;i++)
//	{
//		for (int j = 0;j < count - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int arr[], int count)
//{
//	for (int i = 0;i < count;i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		int arr[1000] = { 0 };
//		int odd[1000] = { 0 };
//		int even[1000] = { 0 };
//		int odd_count = 0, even_count = 0;
//		int ch = 0;
//		//输入
//		while((ch = getchar()) != '\n')
//		{
//			if (ch == ' ')
//			{
//				continue;
//			}
//			else if (ch % 2 == 1)
//			{
//				odd[odd_count] = ch;
//				odd_count++;
//			}
//			else
//			{
//				even[even_count] = ch;
//				even_count++;
//			}
//		}
//		//排序
//		pupple_sort(odd, odd_count);
//		pupple_sort(even, even_count);
//		//输出
//		print(odd, odd_count);
//		print(even, even_count);
//	}
//	return 0;
//}

//纠正
#include <stdio.h>
#include <stdlib.h>
//奇数在前，偶数在后
void pupple_sort(int arr[], int count)
{
	for (int i = 0; i < count - 1;i++)
	{
		for (int j = 0;j < count - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print(int arr[], int count)
{
	for (int i = 0;i < count;i++)
	{
		printf("%d ", arr[i]);
	}
}
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	getchar();
	for (int i = 0;i < n;i++)
	{
		int arr[1000] = { 0 };
		int odd[1000] = { 0 };
		int even[1000] = { 0 };
		int odd_count = 0, even_count = 0;
		int ch = 0;
		//输入
		/*while((ch = getchar()) != '\n')
		{
			if (ch == ' ')
			{
				continue;
			}
			else if (ch % 2 == 1)
			{
				odd[odd_count] = ch;
				odd_count++;
			}
			else
			{
				even[even_count] = ch;
				even_count++;
			}
		}*/
		int num = 0;
		for (;;)
		{
			scanf("%d", &num);
			if (num % 2 == 1)
			{
				odd[odd_count] = num;
				odd_count++;
			}
			else
			{
				even[even_count] = num;
				even_count++;
			}
			ch = getchar();
			if (ch == '\n')
			{
				break;
			}
			
		}
		//排序
		pupple_sort(odd, odd_count);
		pupple_sort(even, even_count);
		//输出
		print(odd, odd_count);
		print(even, even_count);
	}
	return 0;
}