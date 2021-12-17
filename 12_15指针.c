//#define _CRT_SECURE_NO_WARNINGS 1
////内存释放导致野指针
//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main(void)
//{
//	int* p = test();
//	*p = 20;        //当函数执行完毕后，a就被销毁了，此时p仍然存着它的地址，但已经不是a了，这块内存已经交换给操作系统了，在访问就是非法访问内存了
//	return 0;
//}

////指针比较
//#include <stdio.h>
//int main(void)
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7,8, 9 };
//	int* start = arr;
//	int* end = arr + 9;
//	while (start <= end)
//	{
//		printf("%d ", *start);
//		start++;
//	}
//	return 0;
//}

////指针模拟实现strlen(还可以递归实现)
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
//	int len = my_strlen("abcd"); //传过去的事首个字符的地址
//	printf("%d\n", len);
//	return 0;
//}
////指针减去指针实现
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
//	int len = my_strlen("abcde");
//	printf("%d\n", len);
//	return 0;
//}