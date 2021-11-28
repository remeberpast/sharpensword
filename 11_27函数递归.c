#define _CRT_SECURE_NO_WARNINGS 1
////史上最简单递归
//#include <stdio.h>
//int main(void)
//{
//	printf("haha\n");
//	main();
//	return 0;
//}

////输入一个整型值，按顺序打印每一位
//#include <stdio.h>
//void single_print(unsigned int num)    //如打印1234转化为123和4，在化为12和3和4……
//{
//	if (num > 9)          //满足条件才递归，这样才不会死递归
//	{
//		single_print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main(void)
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	single_print(num);
//
//	return 0;
//}

////模拟实现strlen函数,可创建临时变量
//#include <stdio.h>
//int my_strlen(char* strlen)
//{
//	int count = 0;
//	while (*strlen != '\0')      //strlen是一个指针，*strlen是解引用，猜表示相应的字符
//	{
//		count++;
//		strlen++;
//	}
//	return count;
//}
//int main(void)
//{
//	char arr[] = "my strlen";
//	printf("%d", my_strlen(arr));  //数组传给函数的是第一个数的地址
//	return 0;
//}

////不创建临时变量模拟strlen函数 利用递归
//#include <stdio.h>
//int my_strlen(char* strlen)       // my strlen=1+y strlen=2+ strlen=3+strlen=……
//{
//	if (*strlen != '\0')
//		return 1 + my_strlen(++strlen); //这里括号可以是++str，但str+1更好，因为这样不会改变str的值，没有副作用，但不能是str++，因为str++是先使用在加1，即传过去的值是没有变得，传过去后才+1
//	else
//		return 0;
//}
//int main(void)
//{
//	char arr[] = "my strlen";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

////递归算阶乘
//#include <stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//	return 0;
//}

////斐波那契数列第n项，递归可以求解但效率很低
//#include <stdio.h>
//int Fibon(n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibon(n - 1) + Fibon(n - 2);       //效率很慢，算第50项都要5到10分钟，由大量重复的运算。
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fibon(n));
//	return 0;
//}
////循环解斐波那契数列
//#include <stdio.h>
//int Fibon(int n)
//{
//	int f1 = 1;
//	int f2 = 1;
//	int f3 = 1;
//	while (n > 2)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//		n--;
//	}
//	return f3;
//}
//int main(void)
//{
//	int n = 0;
//		scanf("%d", &n);
//		printf("%d", Fibon(n));
//		return 0;
//}

//古老的汉诺塔
#include <stdio.h>
int main(void)
{

	return 0;
}