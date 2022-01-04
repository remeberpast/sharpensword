//#define _CRT_SECURE_NO_WARNINGS 1
////此题的目的是找到子串并注释，不区分大小写
//#include <stdio.h>
//#include <string.h>
////移位函数
//void shift(char arr[], int a, int num1)
//{
//	int tmp1 = arr[a];
//	int tmp2 = arr[a + 1];
//	while (a < num1)
//	{
//		int tmp3 = arr[a + 2];
//		int tmp4 = arr[a + 3];
//		arr[a + 2] = tmp1;
//		arr[a + 3] = tmp2;
//		tmp1 = tmp3;
//		tmp2 = tmp4;
//		a += 2;
//	}
//}
//////大写转小写
////void big_to_small(char arr[], int num2)
////{
////
////}
////不区分大小写的strcmp
//int my_strcmp(char arr[], char brr[], int num2)
//{
//	int count = 0;
//	for (int i = 0;i < num2;i++)
//	{
//		if ((arr[i] == brr[i])||(arr[i]-brr[i]=='A'-'a')||(arr[i]-brr[i]=='a'-'A'))
//		{
//			count++;
//		}
//	}
//	if (count == num2)
//		return 0;
//	return -1;
//}
//int main(void)
//{
//	char words[100] = { 0 };
//	char find[100] = { 0 };
//	int ch = 0;
//	int dh = 0;
//	//用num1，num2来记录母串与子串的长度
//	int num1 = 0;
//	int num2 = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		words[num1] = ch;
//		num1++;
//	}
//	while ((dh = getchar()) != '\n')
//	{
//		find[num2] = dh;
//		num2++;
//	}
//	/*printf("%d%d\n", num1, num2);*/
//	//找子串
//	for (int i = 0;i < 200 - num2;i++)
//	{
//
//		char tmp[200] = { 0 };
//		for (int j = 0;j < num2;j++)
//		{
//			tmp[j] = words[j + i];
//		}
//		//如果找到
//		if (my_strcmp(tmp, find, num2) == 0)
//		{
//			//后移两位
//			shift(words, i, num1);
//			words[i] = '/';
//			words[i + 1] = '*';
//			num1 = num1 + 2;
//			//后面的也要后移
//			shift(words, i + num2, num1);
//			words[i + num2 + 2] = '*';
//			words[i + num2 + 3] = '/';
//			i = i + 3 + num2;
//			num1 = num1 + 2;
//		}
//		//printf("%d\n",i);
//	}
//	//输出
//	printf("%s\n", words);
//	//printf("%s\n",find);
//	return 0;
//}