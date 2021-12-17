//#define _CRT_SECURE_NO_WARNINGS 1
////n个人分为k组
//#include <stdio.h>
//int group(int n, int k)
//{
//	int sum = 0;
//	for (;k > 0;k--)
//	{
//		
//		if (k == 1)
//		{
//			return sum + 1;
//		}
//		if (n == 1)
//		{
//			return sum + 1;
//		}
//		if (n == k)
//		{
//			sum = sum + 1;
//		}
//		if (n < k && n != 1)
//		{
//			continue;
//		}
//		else
//		{
//			if (n - k > k)
//			{
//				sum = sum + group(n - k, k);
//			}
//			else
//			{
//				sum = sum + group(n - k, n - k);
//			}
//		}
//	}
//	return sum;
//}
//int main(void)
//{
//	int n, k;
//	while (scanf("%d%d", &n, &k) != EOF)
//	{
//		printf("%d\n", group(n - k, k));
//	}
//	return 0;
//}


////张阳版
//#include<stdio.h>
//int team(int n, int k);
//int Team(int n, int k);
//int Team(int n, int k)
//{
//	int s = 0;
//	if (n <= k)
//	{
//		int j = 1;
//		for (j = 1;j <= n;j++)
//		{
//			s = s + team(n, j);
//		}
//	}
//	else
//	{
//		int i = 0;
//		for (i = 1;i <= k;i++)
//		{
//			s = s + team(n, i);
//		}
//	}
//
//	return s;
//}
//int team(int n, int k)
//{
//	int i = 0;
//	int s = 0;
//	if (n - k > 0)
//	{
//		/*for(i=1;i<=k;i++)
//		{
//			s=s+team(n-k,i);
//		}*/
//		return Team(n - k, k);
//	}
//	if ((n == k) || (k == 1) || (n == 1))
//	{
//		return 1;
//	}
//}
//int main()
//{
//
//	int n = 0, k = 0;
//	while (scanf("%d %d", &n, &k) != EOF)
//	{
// 		int s = team(n, k);
//		printf("%d\n", s);
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n, k;
//	int i, j, m, l, p, q;
//	while (scanf("%d %d", &n, &k) != EOF)
//	{
//		int count = 0;
//		for (i = 1; i <= n; i++)
//		{
//			if ((i == n) && (k == 1))
//				count++;
//			for (j = i; (j <= n - i) && (k >= 2); j++)
//			{
//				if ((i + j == n) && (k == 2))
//					count++;
//				for (m = j; (m <= n - i - j) && (k >= 3); m++)
//				{
//					if ((i + j + m == n) && (k == 3))
//						count++;
//					for (l = m; (l <= n - i - j - m) && (k >= 4); l++)
//					{
//						if ((i + j + m + l == n) && (k == 4))
//							count++;
//						for (p = l; (p <= n - i - j - m - l) && (k >= 5); p++)
//						{
//							if ((i + j + m + l + p == n) && (k == 5))
//								count++;
//							for (q = p; (q <= n - i - j - m - l - p) && (k >= 6); q++)
//							{
//								if ((i + j + m + l + p + q == n) && (k == 6))
//									count++;
//							}
//						}
//					}
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}