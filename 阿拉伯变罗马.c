//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int n;
//	for (;;)
//	{
//		scanf("%d", &n);
//		if (n == 0)
//			break;
//		else if (n < 0 || n >= 1000)
//			printf("Input Error\n");
//		else
//		{
//			int a, b, c, d, e, f;
//			int u, v, w, x, y, z;
//			a = n / 500;
//			b = (n % 500) / 100;
//			c = ((n % 500) % 100) / 50;
//			d = (((n % 500) % 100) % 50) / 10;
//			e = ((((n % 500) % 100) % 50) % 10) / 5;
//			f = (((((n % 500) % 100) % 50) % 10) % 5) / 1;
//			if (a == 1 && b == 4)
//				printf("CM");
//			else
//			{
//				for (u = 0;u < a;u++)
//				{
//					printf("D");
//				}
//				if (b == 4)
//					printf("CD");
//				else
//				{
//					for (v = 0;v < b;v++)
//					{
//						printf("C");
//					}
//				}
//			}
//			if (c == 1 && d == 4)
//				printf("XC");
//			else
//			{
//				for (w = 0;w < c;w++)
//				{
//					printf("L");
//				}
//				if (d == 4)
//					printf("XL");
//				else
//				{
//					for (x = 0;x < d;x++)
//					{
//						printf("X");
//					}
//				}
//			}
//			if (e == 1 && f == 4)
//				printf("IX");
//			else
//			{
//				for (y = 0;y < e;y++)
//				{
//					printf("V");
//				}
//				if (f == 4)
//					printf("IV");
//				else
//				{
//					for (z = 0;z < f;z++)
//					{
//						printf("I");
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}