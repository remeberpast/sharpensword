//#define _CRT_SECURE_NO_WARNINGS 1
// //此题没有使用前面所使用的回文数判定法，因为这里时伪回文数，要有一位数字不同
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	for (int i = 0;i < n;i++)
//	{
//
//		int num = 0;
//		scanf("%d", &num);
//		if (num < 10)
//		{
//			printf("no\n");
//		}
//		else
//		{
//			int num_count = 0;
//			int count = 0;
//			int j = 0;
//			while (num != 0)
//			{
//				arr[j] = num % 10;
//				num = num / 10;
//				count++;
//				j++;
//			}
//			int low = 0;
//			int high = count - 1;
//			while (low <= high)
//			{
//				if (arr[low] != arr[high])
//				{
//					num_count++;
//				}
//				low++;
//				high--;
//			}
//			if (num_count == 1)
//			{
//				printf("yes\n");
//			}
//			else
//			{
//				printf("no\n");
//			}
//		}
//	}
//	return 0;
//}
