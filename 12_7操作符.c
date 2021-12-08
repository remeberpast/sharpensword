//#define _CRT_SECURE_NO_WARNINGS 1
////递归小练习
//#include <stdio.h>
//int GD(int x, int count)
//{
//	if (x == 1)
//	{
//		return 0;
//	}
//	else if (x % 2 == 0)
//	{
//		x = x / 2;
//		count++;
//		if (x == 1)
//		{
//			return count;
//		}
//		else
//		{
//			return GD(x, count);
//		}
//	}
//	else if (x % 2 == 1)
//	{
//		x = (x * 3 + 1) / 2;
//		count++;
//		if (x == 1)
//		{
//			return count;
//		}
//		else
//		{
//			return GD(x, count);
//		}
//	}
//}
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	int x = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &x);
//		printf("%d\n", GD(x, count));
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int Fibon(int n)
//{
//    int f1 = 1;
//    int f2 = 1;
//    int f3 = 1;
//    if (n <= 2)
//    {
//        return 1;
//    }
//    else
//    {
//        for (int i = 0;i < n - 2;i++)
//        {
//            f3 = f1 + f2;
//            f1 = f2;
//            f2 = f3;
//        }
//        return f3;
//    }
//}
//int main(void)
//{
//    int n = 0;
//    scanf("%d", &n);
//    Fibon(n);
//    printf("%d", Fibon(n));
//    return 0;
//}

////递归实现正整数各位数字之和
//#include <stdio.h>
//int Digit_Sum(int n, int sum)
//{
//	if (n < 10)
//	{
//		return n + sum;
//	}
//	else if (n >= 10)
//	{
//		sum = sum + n % 10;
//		n = n / 10;
//		return Digit_Sum(n, sum);
//	}
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	printf("%d", Digit_Sum(n, sum));
//	return 0;
//}
//#include <stdio.h>
//int Digit_Sum(int n)
//{
//	if (n > 9)
//	{
//		return Digit_Sum(n / 10) + n % 10;
//	}
//	return n;
//}
//	
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Digit_Sum(n));
//	return 0;
//}

////打印整数每一位
//#include <stdio.h>
//void single_print(int n)
//{
//	if (n > 9)
//	{
//		single_print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	single_print(n);
//	return 0;
//}

