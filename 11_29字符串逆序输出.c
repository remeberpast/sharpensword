//#define _CRT_SECURE_NO_WARNINGS 1
////倒序输出字符串
////非递归法
//#include<string.h>
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)   //用指针接收可以用数组接收也可以
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)           //=可要可不要
//	{
//		char tmp = str[left];      //这里用指针和数组是一样的,用指针可以写成*（str+left）,下同
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main(void)
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);      //传的是数组首元素地址
//	printf("%s", arr);
//	return 0;
//}
////递归法逆序输出字符串
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);        
//	char tmp = *str;              //1、将第一个字符存入临时变量
//	*str = *(str + len - 1);       //2、将最后一个字符换到第一个
//	*(str + len - 1) = '\0';        //3、在最后一个字符处放一个\0,以便下一次调用函数时不会拿到最后一个（应该是a）
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);    //4、再次调用函数，此时只有bcde会传给函数
//	}
//	*(str + len - 1) = tmp;          //5、最后再将第一个字符放到最后一位
//}
//int main(void)
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}