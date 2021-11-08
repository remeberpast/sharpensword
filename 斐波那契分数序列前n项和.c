//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//unsigned int Fibon(int n)
//{
//	unsigned int f1 = 1, f2 = 1, f3 = f1+f2;
//	if (n == 1)
//	{
//		return f1;
//	}
//	else if (n == 2)
//	{
//		return f2;
//	}
//	else
//	{
//		for (int i = 0;i < n - 2;i++)
//		{
//			f3 = f1 + f2;
//			f1 = f2;
//			f2 = f3;
//		}
//		return f3;
//	}
//}
////int main(void)
////{
////	printf("%d %d %d %d %d %d", Fibon(1), Fibon(2), Fibon(3), Fibon(4), Fibon(5), Fibon(6));
////	return 0;
////}
////int main(void)
////{
////	printf("%d", Fibon(4));
////	return 0;
////}
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		float value;
//		int j, m;
//		scanf("%d", &m);
//		for (j = 0, value = 0.0;j < m;j++)
//		{
//			value =value + (Fibon(j + 2) * 1.0) / (Fibon(j + 3) * 1.0);
//		}
//		printf("%.2f\n", value);
//	}
//	return 0;
//}