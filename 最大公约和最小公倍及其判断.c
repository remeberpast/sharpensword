//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	//求x，y的最大公约数
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	//最大公约数
//	//辗转相除法
//	int m = x;
//	int n = y;
//	int c = 0;
//	while (n != 0)
//	{
//		c = m % n;
//		m = n;
//		n = c;
//	}
//	//最后m便是最大公约数
//	printf("%d\n", m);
//	//最小公倍数
//	printf("%d\n", x * y / m);
//	return 0;
//}

////判断是否是最大公约数，最小公倍
//#include <stdio.h>
//int is(int x, int y, int m, int n)
//{
//	int a = x;
//	int b = y;
//	int c = 0;
//	while (b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	if ((a == m) && (x * y / a == n))
//		return 1;
//	return 0;
//}
//int main(void)
//{
//	//m是最大公约，n是最小公倍
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	//判断次数
//	int count = 0;
//	for (int i = m, j = 0;i <= n;i++)
//	{
//		j = m * n / i;
//		if (is(i, j, m, n) == 1)
//		{
//			count++;
//		}		
//	}
//	printf("%d", count);
//	return 0;
//}