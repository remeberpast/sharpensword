#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int a = 0;
	scanf("%d", &a);
	for (int i = a;i <= a + 4;i++)
	{
		for (int j = a;j <= a + 4;j++)
		{
			for (int k = a;k <= a + 4;k++)
			{
				for (int l = a;l <= a + 4;l++)
				{
					for (int m = a;m <= a + 4;m++)
					{
						if (i != j && i != k && i != l && i != m)
						{
							if (j != k && j != l && j != m)
							{
								if (k != l && k != m)
								{
									if (l != m)
									{
										printf("%d%d%d%d%d\n", i, j, k, l, m);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	int arr[5] = { a,a + 1,a + 2,a + 3,a + 4 };

}