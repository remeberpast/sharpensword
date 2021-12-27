//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//unsigned long long int all(int n)
//{
//	if (n > 1)
//	{
//		return n * all(n - 1);
//	}
//	return 1;
//}
//unsigned long long int f(int n)
//{
//	unsigned long long int sum = 0;
//	for (int i = 1;i <= n;i++)
//	{
//		sum = sum + all(i);
//	}
//	return sum % 1000000;
//}
//int main(void)
//{
//	int k = 0;
//	scanf("%d", &k);
//	for (int i = 0;i < k;i++)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		unsigned long long int digit = f(n);
//		printf("%lld\n", digit);
//	}
//	return 0;
//}