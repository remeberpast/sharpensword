#define _CRT_SECURE_NO_WARNINGS 1

//   计算整数位数
//#include <stdio.h>
//int main(void)
//{
//	int i = 0, n;
//
//	printf("输入一个整数：");
//	scanf("%d", &n);
//
//	do
//	{
//		n = n / 10;
//		i++;
//	} while (n > 0);
//
//	printf("整数位数：%d\n", i);
//
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	scanf("%d",&n);
//
//	for (i = 2;i < n;i++) 
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i < n)
//	{
//		printf("n是合数\n");
//
//	}
//	else
//	{
//		printf("n是素数\n");
//	}
//	return 0;
//}
// 
 
 

// 闰年
//#include <stdio.h>
//int main(void)
//{
//	int Y;
//	scanf("%d", &Y);
//	if (Y % 4 == 0 && Y % 400 != 0)
//	{
//		printf("yes");
//	}
//	else if (Y % 400 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}



//改进版闰年
//#include <stdio.h>
//int main(void)
//{
//	int Y;
//	scanf("%d", &Y);
//	if ((Y % 4 == 0 && Y % 400 != 0) || (Y % 400 == 0))
//	{
//		printf("%d是闰年");
//	}
//	else
//	{
//		printf("%d是平年");
//	}
//	return 0;
//}

//goto语句判断合数质数
//#include <stdio.h>
//int main(void)
//{
//	int d, n;
//
//	scanf("%d", &n);
//	for (d = 2;d < n;d++)
//	{
//		if (n % d == 0)
//		{
//			goto done;
//		}
//	}
//done:
//	if (d < n)
//	{
//		printf("%d是合数\n",n);
//	}
//	else
//	{
//		printf("%d是素数\n", n);
//	}
//	return 0;
//}



//账簿结算（教材89页）
#include <stdio.h>
int main(void)
{
	int command;
	float in, out, balance = 0.00f;  //in表示存钱，out表示取钱。

	printf("***ACM checkbook-balancing program***\n");
	printf("0=清空余额，1=存钱，2=取钱，3=显示当前余额，4=退出\n");
	for (; ; )
	{
		printf("请输入命令： \n");
		scanf("%d", &command);

		switch (command)
		{
		case 0: 
			balance = 0.00f;
			break;
		case 1: 
			printf("输入金额： ");
			scanf("%f", &in);
			balance = balance + in;
			break;
		case 2: 
			printf("输入金额： ");
			scanf("%f", &out);
			balance = balance - out;
			break;
		case 3:
			printf("余额：%.2f", balance);
			break;
		case 4:
			return 0;
		default:
			printf("请输入：0=清空余额，1=存钱，2=取钱，3=显示当前余额，4=退出\n");
			break;
		}
	}



	return 0;
}