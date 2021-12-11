#define _CRT_SECURE_NO_WARNINGS 1
////二进制的奇数位和偶数位
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	int tmp = 1;
//	int sz = 0;
//	scanf("%d", &n);
//	for (int i = 0;n > 0;i++)
//	{
//		sz++;
//		n /= 2;
//	}
//	//printf("%d", sz);
//	//先输出奇数位，在输出奇数位。
//	if (sz % 2 == 0)
//	{
//		tmp = 1;
//		tmp << (sz - 2);
//		while (tmp > 0)
//		{
//			if ((sz & tmp) == 1)
//			{
//				printf("1");
//			}
//			else if ((sz & tmp) == 0)
//			{
//				printf("0");
//			}
//			tmp >> 2;
//		}
//	}
//	return 0;
//}

////两数二进制不同的位数
//#include <stdio.h>
//int main(void)
//{
//	int count = 0;
//	int a = 0;
//	int b = 0;
//	int tmp = 1;
//	scanf("%d%d", &a, &b);
//	for (int i = 0;i < 32;i++)
//	{
//		if ((a & tmp) != (b & tmp))
//		{
//			count++;
//		}
//		tmp = tmp << 1;
//	}
//	printf("%d", count);
//	return 0;
//}