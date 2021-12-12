#define _CRT_SECURE_NO_WARNINGS 1
////ʹ��ָ��ǰ�������ָ�����Ч��
//#include <stdio.h>
//#define N_VALUES 5
//int main(void)
//{
//	float values[N_VALUES];
//	float* p;
//	for (p = &values[0];p < &values[N_VALUES];)
//	{
//		*p++ = 0;
//	}
//	return 0;
//}

////利用指针实现strlen
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
//int main(void)
//{
//	int len = my_strlen("abcde");//这里传过去的也是第一个字符的地址
//	printf("%d", len);
//	return 0;
//}
////利用两指针相减得到的是之间的元素个数
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main(void)
//{
//	int len = my_strlen("abcd");
//	printf("%d", len);
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	printf("%c", 219);
	printf("%c", 219);
	return 0;
}