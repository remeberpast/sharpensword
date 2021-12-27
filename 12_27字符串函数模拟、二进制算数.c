#define _CRT_SECURE_NO_WARNINGS 1
////模拟实现strcpy
//#include <stdio.h>
//#include <assert.h>
////void my_strcpy(char*dest, char*src)
////{
////	while (*src != '\0')
////	{
////		/**dest = *src;
////		dest++;
////		src++;*/
////		//优化版
////		*dest++ = *src++;
////	}
////	*dest = *src;
////}
//////再优化版
////void my_strcpy(char* dest, char* src)
////{
////	while (*dest++ = *src++);
////}
////再再优化 断言
//void my_strcpy(char* dest, const char* src)  //加const防止copy时写反了，const修饰后变量为常变量，不能被修改，但本质上还是变量
//{
//	assert(src != NULL);//断言：括号里是判断条件
//	assert(dest != NULL);
//	while (*dest++ = *src++);
//}
//int main(void)
//{
//	char arr1[20] = "XXXXXXXXXXXXXXX";
//	char arr2[20] = "Hello Food!";
//	//strcpy(arr1,arr2)
//	my_strcpy(arr1, arr2);
//	printf("%s\n%s\n", arr1, arr2);
//	return 0;
//}

//函数实现求一个数二进制1的个数
//注意如果用模2除2去求，那么负数是不行的，这里用左移或右移操作符就对
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 1;
//	int count = 0;
//	for (int i = 0;i < 32;i++)
//	{
//		if ((a & n) == a)
//		{
//			count++;
//		}
//		a = a << 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//更好更奇妙的法三
//#include <stdio.h>
//int num_of1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", num_of1(n));
//	return 0;
//}

//判断一个数是否是2的n次方，与n-1与

////获取一个数二进制位的奇数位和偶数位
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	//偶数位
//	printf("偶数位：");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	//奇数位
//	printf("奇数位：");
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}