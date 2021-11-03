//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////void空函数，显示倒计时
//void print_count(int n)
//{
//	printf("T minus %d and counting\n", n);
//}
//int main(void)
//{
//	int i;
//	for (i = 10;i > 0;--i)
//	{
//		print_count(i);
//	}
//	return 0;
//}

////素数判断改量(改良失败)
//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	if (n <= 1)
//	{
//		printf("%d不是素数也不是合数",n);
//	}
//	else
//	{
//		for (i = 2;i * i <= n;i++)
//		{
//			if (n % i == 0)
//			{
//				printf("%d合数", n);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//关于分离整数与小数部分
//#include <stdio.h>
//int main(void)
//{
//	float a;
//	scanf("%f", &a);
//	//printf("%d", (int)a);
//	int i = (int)a;
//	float f = (float)a - i;
//	printf("%d\n%f", i, f);
//	//float frac_part, f;
//	//f = 3.14;
//	//scanf("%f")
//	//frac_part = f - (int)f;
//	return 0;
//}

////不用中间变量交换两个数的值
//#include <stdio.h>
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = ~(a ^ b);
//	b = ~(a ^ b);
//	a = ~(a ^ b);   //一个数与另一个数异或（同或）两次，就变回它本身；~表示按位取反
//	printf("%d %d\n", a, b);
//	return 0;
//}

