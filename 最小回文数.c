#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int i, m, n, j, k;
	int arr[1000] = { 0 };
	scanf("%d", &m);
	for (i = 0;i < m;i++)
	{
		scanf("%d", &n);
		for (j = 0,k = 0;n % 10 != 0;j++)
		{
			arr[j] = n % 10;
			n = n / 10;
			k++;
		}
		if (k % 2 == 0)
		{
			int p = k;
			if (arr[p / 2] > arr[p / 2 - 1])
			{
				int q = k;
				for (int a = 0;a < k / 2;a++)
				{
					printf("%d", arr[q - 1]);
					q--;
				}
				for (int b = 0;b < k / 2;b++)
				{
					printf("%d", arr[q]);
					q++;
				}
			}
			else
			{
				int s = k;
				for (int c = 1;c < k / 2;c++)
				{
					printf("%d", arr[s - 1]);
					s--;
				}
				printf("%d%d", arr[s - 1] + 1, arr[s - 1] + 1);
				for (int d = 1;d < k / 2;d++)
				{
					printf("%d", arr[s]);
					s++;
				}
			}
				
		}
		else if (k % 2 != 0)
		{
			int u = k;
			for (int e = 0;e < k / 2;e++)
			{
				printf("%d", arr[u - 1]);
				u--;
			}
			printf("%d", arr[u - 1] + 1);
			for (int f = 0;f < k / 2;f++)
			{
				printf("%d", arr[u]);
				u++;
			}
		}

	}
	return 0;
}

