#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
////字符操作
//int main(void)
//{
//	char ch = 'A';
//	//isdigit(ch):数字字符返回非零，不是数字字符返回0
//	isdigit(ch);
//	//islower:判断字符是否小写
//	islower(ch);
//	return 0;
//}


//内存函数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(void)
//{
//	//memcpy:复制内存，针对内存块，比strcpy适用面更广了,与strcpy很像，多了第三个参数，是copy的空间大小
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//	//memmove:主要用于内存有重叠的情况，不好使用memcpy：是移动一定内存大小的空间
//	memmove(arr1 + 2, arr1, 20);//一定四个整型：效果是四个整型向后移动了两位
//	//memcmp:比较一定大小内存:与strcmp很像：相同返回0；如果内存空间中的数据第一个大于第二个，则返回大于零的值；若小于则返回值小于0
//	memcmp(arr1, arr2, 4);//后面实际是做多表示多少个字节，如果提前找到了不同的数据，函数会提前结束
//	memcmp(arr1, arr2, 8);
//	//memset(ptr,value,num):把ptr指向的那一段空间的num个字节初始化为value
//	memset(arr2, 4, 20);//要注意的是这个函数是以字节为单位初始化内存的
//	return 0;
//}