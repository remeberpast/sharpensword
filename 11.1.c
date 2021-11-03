//f
//getchar 判断消息长度
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int len = 0;
//	printf("Enter a message: ");
//	ch = getchar();
//	while (ch != '\n')
//	{
//		len++;
//		ch = getchar();
//	}
//	printf("Your message was %d character(s) long.\n", len);
//
//	return 0;
//}


////悬空else问题，没有输出结果。
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("HEHE");
//		else
//			printf("HAHA");
//	return 0;
//}