//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int n, i, k;
//	int A[100] = { 0 };
//	scanf("%d%d", &n, &k);
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	for (int j = 0;j < n - 1;j++)
//	{
//		for(int l=0;l<n-j-1;l++)
//		{
//			if (A[l] > A[l + 1])
//			{
//				int m = A[l];
//				A[l] = A[l + 1];
//				A[l + 1] = m;
//			}
//		}
//	}
//	printf("%d", A[k-1]);
//	return 0;
//}