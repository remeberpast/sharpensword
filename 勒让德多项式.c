//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//float p(int n,float x)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	else
//		return ((2*n - 1) * x * p(x, n - 1) - p(x, n - 2)) / n;
//}
//int main(void)
//{
//	int i, m;
//	scanf("%d", &m);
//	for (i = 0;i < m;i++)
//	{
//		int n;
//		float x;
//		scanf("%d%f", &n, &x);
//		if (n < 0)
//			printf("Input Error\n");
//		else
//			printf("%f\n", p(n, x));
//	}
//	
//	return 0;
//}