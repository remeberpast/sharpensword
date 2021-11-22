#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int m, n;
	scanf("%d", &n);
	for (m = 0;m < n;m++)
	{
		int a, b, c;
		int i, j, k;
		int t = 0;
		scanf("%d %d %d", &a, &b, &c);
		for (i = 0;i < 34;i++)
		{
			for (j = 0;j < 21;j++)
			{
				for (k = 0;k < 15;k++)
				{
					if ((a + 3 * i) == (b + 5 * j) && (a + 3 * i) == (c + 7 * k))
					{
						if ((a + 3 * i) >= 10 && (a + 3 * i) <= 100)
						{
							printf("%d\n", a + 3 * i);
							t++;
						}
						else
						{
							printf("Impossibie\n");
						}
						
					}
				}
			}
		}
		if (t == 0)
			printf("Impossible\n");
	}
	return 0;
}