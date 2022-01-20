#define _CRT_SECURE_NO_WARNINGS 1
////模仿qsort写一个通用冒泡排序
//#include <stdio.h>
//#include <string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_age(void* e1, void* e2)
//{
//	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
//}
//int cmp_name(void* e1, void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
////void swap(char* buf1, char* buf2, int width)
////{
////	for (int i = 0;i < width;i++)
////	{
////		//这里将地址解引用后交换内容以实现在函数内部改变变量的作用
////		//不是直接交换地址，因为如果直接交换地址，那就相当普通的传值调用，buf1、buf2使用完后还是会被销毁，不销毁的是地址指向的内容
////		char tmp = *buf1;
////		*buf1 = *buf2;
////		*buf2 =tmp;
////		buf1++;
////		buf2++;
////	}
////}
//void bubble_sort(void* base,
//				int sz,
//				int width,
//				int (*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		for (int j = 0;j < sz - 1 - i;j++)
//		{
//			//比较，cmp由使用者根据不同数据类型去写
//			//因为base为void类型，不能加减，强制类型转换为char*类型后再加width就可以解决则会个问题，
//			//应为char*类型指针加跳过一个字节，加width就跳到下一个元素
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				char* buf1 = (char*)base + j * width;
//				char* buf2 = (char*)base + (j + 1) * width;
//				//因为只知道地址，所以使用解引用地址的方式交换内容
//				//如果不是解引用后交换内容，而是直接交换地址（buf1与buf2）的话，并没有交换原本的地址，只是交换了buf1与buf2
//				//这里是要透过地址交换地址指向的内容
//				for (int k = 0;k < width;k++)
//				{
//					char tmp = *buf1;
//					*buf1 = *buf2;
//					*buf2 = tmp;
//					buf1++;
//					buf2++;
//				}
//				/*swap((char*)base + j * width, (char*)base + (j + 1) * width, width);*/
//			}
//		}
//	}
//}
//void print(struct stu*p,int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%s %d\n", (p + i)->name, (p + i)->age);
//	}
//}
//int main(void)
//{
//	struct stu arr[3] = { {"刘三",30},{"李四",19},{"王麻子",11} };
//	//使用bubble_sort按年龄排序
//	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_age);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	//使用bubble_sort按名称排序
//	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_name);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//strtok
//strtok函数：用于切割字符串。如果函数第一个参数不为空指针，它只找到第一个标记并记录位置；
//如果函数第一个参数为空指针，那么它会从上一次的标记开始，往后寻找下一个标记；如果没有找到标记，它会返回一个空指针
//这个函数使用了static静态局部变量
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char arr[50] = { "1*2*3*4*5*6*7*8*9" };
//	char* p = "*";
//	char* ret = NULL;
//	//使用循环找到所有的切割点
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror
//C语言调用库函数失败都会有一个错误码，strerror的作用便是将错误码翻译为错误信息
//
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));

	return 0;
}