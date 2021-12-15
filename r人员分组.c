#define _CRT_SECURE_NO_WARNINGS 1
//n个人分为k组
#include <stdio.h>
int group(int n, int k)
{
	int sum = 0;
	for (;k > 0;k--)
	{
		if (k == 1)
		{
			sum = sum + 1;
		}
		else if (n == 1)
		{
			return sum + 1;
		}
		else if (n == k)
		{
			sum = sum + 1;
		}
		else if (n == 0)
		{
			return sum;
		}
		else if (n < k && n != 1)
		{
			continue;
		}
		else
		{
			/*if (n - k > k)
			{*/
				sum = sum + group(n - k, k);
			/*}*/
			/*else
			{
				sum = sum + group(n - k, n - k);
			}*/
		}
	}
	return sum;
}
int main(void)
{
	int n, k;
		scanf("%d%d", &n, &k);
		printf("%d\n", group(n - k, k));
	return 0;
}