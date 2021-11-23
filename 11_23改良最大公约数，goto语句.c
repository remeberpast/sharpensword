#define _CRT_SECURE_NO_WARNINGS 1

////求两数最大公约数改良版a
//#include <stdio.h>
//int main(void)
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	int tmp = 0;
//	if (x > y)
//		tmp = y;
//	else
//		tmp = x;
//	while (1)
//	{
//		if (x % tmp == 0 && y % tmp == 0)
//		{
//			printf("%d", tmp);
//			break;
//		}
//		tmp--;
//	}
//	return 0;
//}


////最大公约数改良版b（辗转相除法）
//#include <stdio.h>
//int main(void)
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = 0;               //不用判断mn大小，都是可以成功的
//	while (m % n)
//	{
//		tmp = m % n;
//		m = n;
//		n = tmp;
//	}
//	printf("%d", n);
//	return 0;
//}


//最小公倍数改良版（m乘以n除以最大公约数即可）


////关机程序（输入我是猪停止关机）
////shutdown -s -t 60(60秒关机)；shutdown -a（取消关机）
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h> 
//int main(void)
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("您的电脑将在一分钟内关机，请输入“我是猪”以停止关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

