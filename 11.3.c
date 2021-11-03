#define _CRT_SECURE_NO_WARNINGS 1
////判断奇偶
//#include <stdio.h>
//int main(void)
//{
//	int i;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//	{
//		printf("奇数");
//	}
//	else
//	{
//		printf("偶数");
//	}
//	return 0;
//}

////输出1到100的奇数
////for循环
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}、
////while循环
#include <stdio.h>
int main(void)
{
	int i = 0;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}

//#include <stdio.h>
//int main(void)
//{
//
//	return 0;
//}