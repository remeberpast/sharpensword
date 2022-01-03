//#define _CRT_SECURE_NO_WARNINGS 1
////汉诺塔可以递归，也可推出递推公式然后递推。(即2的n次方-1)
//#include <stdio.h>
//
//void hanoi(int n, char a, char b, char c)
//{
//
//	if (n == 1)
//	{
//		printf("%c-%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		printf("%c-%c\n", a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}
//int main(void)
//{
//	/*printf("%d\n", hanoi);*/
//	hanoi(3, 'a', 'b', 'c');
//	return 0;
//}
