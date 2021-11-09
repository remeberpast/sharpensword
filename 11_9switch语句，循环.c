#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////switch语句中case语句后的break可要也可不要，根据需求而定。
////default子语句，即输入不满足要求时发挥作用。后也可加break语句。
// //switch可嵌套使用。且break只是跳出自己所在的switch语句。
//int main(void)
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:             //没有break语句则会一直向下执行直到break
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//

//while循环，（与if语句类似）
//#include <stdio.h>
//int main(void)
//{
//	/*if (1)
//		printf("hehe\n");
//	while (1)
//		printf("hehe");*/
//	/*while语句中也可能遇到break，continue语句*/
//	/*在while循环中break用于永久的终止循环，即只要遇到break语句，直接跳出循环*/
//	/*int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d", i);
//		i++;
//	}*/
//
//	/*while循环中的continue是继续，即只是跳过本次循环，（事实上Continue语句会跳到本次循环末尾，然后进行下一次循环）*/
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		continue;     //这里输出只有1234，因为i=5是形成了死循环，因为此时i=5直接跳过了本次循环，没有i++，此后i一直为5，变成了死循环。
//	//	}				  //在continue前加一个i++即可输出1~4，6~10。	
//	//	printf("%d", i);
//	//	i++;
//	//}
//	
//	return 0;
//}

//gerchar与putchar
//#include <stdio.h>
//int main(void)
//{
//	int ch = getchar();
//	printf("%c", ch);
//	putchar(ch);
//	return 0;
//}
// 
//EOF:end od file,表示文件的结束，EOF=-1，在getchar语句中当getchar读取到一个ctrl+z时即读取到一个EOF
//#include <stdio.h> 
//int main(void)
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);   //输入crtl+z程序终止，ctrl+z即EOF
//	}
//	return 0; 
//}

//#include <stdio.h>
//int main(void)
//{
//	char password[20] = { 0 };  //这里password时字符串，不是数字故123就是1 2 3，不是一百二十三。
//re:
//	printf("请输入密码：");
//	scanf("%s", password);
//	getchar();       //
//  getchar();
//	printf("请确认密码（Y/N）");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("成功\n");
//	}
//	else
//	{
//		printf("失败\n");
//		goto re;
//	}
//	return 0;
//}

