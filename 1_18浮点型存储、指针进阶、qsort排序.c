//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int n = 9;
//	float* Pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *Pfloat);
//
//	*Pfloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *Pfloat);
//
//	*(int*)Pfloat = 9.0;
//	printf("%d\n", *Pfloat);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	//str1和str2是一样的，后面的字符串是常量字符串，不能改的；而str3和str4是两个不同的数组。
//	char* str1 = "hello";
//	char* str2 = "hello";
//	char str3[] = { "hello" };
//	char str4[] = { "hello" };
//	//指针数组本质上是指针，指向数组的指针
//	return 0;
//}

//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//#include <stdio.h>
//void test(int** ppa)
//{
//	**ppa = 20;
//}
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);
//	printf("%d", **ppa);
//	return 0;
//}


//函数指针
//存放函数地址的指针
//&函数名——>即函数的地址，函数名本身也是函数的地址
//&函数名与函数名是一模一样的，这点与数组名不同
//所以因为函数名本身就和函数指针相同，所以pf与ADD是完全相同的，（*pf）的*没有多大意义
//#include <stdio.h>
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	//函数指针
//	//int是函数返回值类型
//	int (*pf)(int ,int) = &ADD;
//	return 0;
//}
// 


//两句有趣的代码
//int main()
//{
//	//z这句代码0是切入点：0前面有强制类型转换，转换成了函数指针类型，函数是void类型，无参，最后得括号是函数调用
//	//作用是调用0地址处得函数，该函数无参，返回类型void
//	//1.void（*）（）：函数类型
//	//2.（void（*）（））0：将0强制类型转换为函数类型
//	//3.（（void（*）（））0）（）：函数调用
//	(*(void(*)())0)();
//	void(*signal(int, void(*)(int)))(int);
//	//1.signal先和（）结合，说明signal是一个函数
//	//2.signal函数第一个参数类型为整型，第二个参数为一个函数指针，第二个函数指针，该函数指针指向一个参数为int，返回类型为void得函数
//	//3.signal函数得返回类型也是函数指针，该函数指针指向了一个参数为int，返回值类型为void得函数
//	//这里signal是一次函数声明
//}

////函数指针数组
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int SUB(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = ADD;
//	int (*pf2)(int, int) = SUB;
//	//函数指针数组
//	int (*pf[2])(int, int) = { pf1,pf2 };
//	return 0;
//}

////套娃
//int main()
//{
//	int (*p1)(int, int);//函数指针
//	int (*p2[5])(int, int);//函数指针数组
//	int (*(*p3[5]))(int, int) = &p2;//指向函数指针数组得指针
//	return 0;
//}

//回调函数：将a函数得地址传给b函数，再b函数中通过指针去调用a函数这种机制就叫做回调函数
//c库函数快速排序函数：qsort函数的使用(任何类型的数据都能排序)
//qsort函数有四个参数：第一个数排序数组的首元素（首个对象）地址，第二个是待排序元素个数，第三个是待排序元素所占内存大小，
//第四个是一个函数指针（作用是比较待排序数据中两个元素的函数）,此函数包含两个参数e1、e2，升序排列e1-e2,降序排列e2-e1
//qsort排整型数据
//#include <stdio.h>
//#include <stdlib.h>
//int cmp(const void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int* p, int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main(void)
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	qsort(arr, 10, sizeof(arr[0]), cmp);
//	print(arr, 10);
//	return 0;
//}
//qsort排结构体数据
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
////按年龄比较
//int cmp1(void* e1, void* e2)
//{
//	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
//	//这里界类型转换完再引用后是一个结构体，不能直接加减，因为根据年龄排序所以先找到年龄
//	//也可以写成：return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
////按名称比较，名称是字符串，比较要用strcmp
//int cmp2(void* e1, void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void print(struct stu* p, int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%s %d\n", (p + i)->name, (p + i)->age);
//	}
//}
//int main(viod)
//{
//	struct stu arr[3] = { {"张三",36},{"赵四",24},{"王五",30} };
//	//按年龄排序
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp1);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	//按名称排序
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp2);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}