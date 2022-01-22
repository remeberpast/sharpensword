//#define _CRT_SECURE_NO_WARNINGS 1
//malloc和free、calloc、realloc
//free：回收空间，free只能释放堆区上的空间，即动态开辟的空间
//但free释放空间后，指针还是指向那段空间，为了安全，要手动将指针便为空指针
//calloc函数有两个参数，它是会初始化的，第一个参数是初始化内容，第二个是空间大小
//realloc：重新开辟，两个参数，第一个是修改地址的指针，第二个是修改的大小
//当realloc第一个参数是空指针时，它的功能与malloc相同
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	//在堆区开辟是个整形空间
//	int* p = (int*)malloc(10 * sizeof(int));//malloc是申请连续的空间
//	//使用这40个字节
//	//判断是否开辟成功
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i;
//	}
//	//空间不够，在开辟一块，用realloc调整
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	//判断是否扩容成功
//	//因为如果开辟失败，realloc会返回一个空指针
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", p[i]);
//	}
//	
//	//使用完后，不会自动释放内存，要自己手动释放
//	//回收空间，free只能释放堆区上的空间，即动态开辟的空间
//	free(p);
//	//但free释放空间后，指针还是指向那段空间，为了安全，要手动将指针便为空指针
//	p = NULL;
//	//calloc函数有两个参数，它是会初始化的，第一个参数是初始化内容，第二个是空间大小
//
//	//realloc：重新开辟，两个参数，第一个是
//
//	return 0;
//}


//柔性数组
//结构体的最后一个成员可以是是一个大小可变的数组，即柔性数组
//柔性数组前必须有一个其他的成员
//包含柔性数组的结构要用malloc开辟空间，且开辟的空间要尽可能大于柔性数组的预期大小
//struct s
//{
//	int n;
//	int a[];//柔性数组可以写作a[]或a[0]
//};
//int main(void)
//{
//
//	return 0;
//}