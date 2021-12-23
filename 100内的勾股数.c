//#define _CRT_SECURE_NO_WARNINGS 1
//重复的不算
//#include <stdio.h>
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1;a <= 100;a++)
//	{
//		for (b = a;b <= 100;b++)
//		{
//			for (c = b;c <= 100;c++)
//			{
//				if ((a * a + b * b) == c * c)
//				{
//					printf("%d %d %d\n", a, b, c);
//				}
//			}
//		}
//	}
//	return 0;
//}

////重复的也算
//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	for (a = 1;a <= 100;a++)
//	{
//		for (b = 1;b <= 100;b++)
//		{
//			for (c = 1;c <= 100;c++)
//			{
//				if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
//				{
//					printf("%d %d %d\n", a, b, c);
//				}
//			}
//		}
//	}
//	return 0;
//}