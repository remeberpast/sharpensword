//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		int k = 0;
//		int arr[1000] = { 0 };
//		int a;
// 		scanf("%d", &a);
//		if (a >= 2)
//		{
//			for (int b = 2;b <= a;b++)
//			{
//				int j;
//				for (j = 2;j <= b;j++)
//				{
//					if (b % j == 0)
//						break;
//				}
//				if (j == b)
//				{
//					arr[k] = b;
//					k++;
//				}
//				else if (j < b)
//					continue;
//			}
//			if (k <= 100)
//			{
//				int l = 0;
//				for (l = 0;l < k;l++)
//					printf("%d ", arr[l]);
//			}
//			else
//				printf("Overflow\n");
//		}
//		else
//			printf("Input Error\n");
//	}
//	return 0;
//}