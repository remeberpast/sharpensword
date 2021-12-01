//#define _CRT_SECURE_NO_WARNINGS 1
////函数返回各位数字之和
//#include <stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);         //递归：大事化小
//	else
//		return n;
//}
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d", sum);
//	return 0;
//}

////递归计算n得k次方
//#include <stdio.h>
//double Pow(int n, int k) //因为一个数得负数次方为小数，所以返回值为浮点型
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main(void)
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);      //C语言中有库函数pow计算次方，这里用大写。定义也要用double。
//	printf("%lf", ret);
//	return 0;
//}

////数组开始
//#include <stdio.h>
//int main(void)
//{
//	char ch1[] = "cw";         //这两种写法的差别在于，ch1中由四个元素，因为字符串末尾自带一个\0，而ch2中只有三个元素
//	char ch2[] = { 'c','w' };     //打印第二个即ch2是会出现乱码（随机值），因为没有\0,不知道什么时候结束，求字符串长度的时候也是随机值
//	printf("%s %d\n", ch1, strlen(ch1));
//	printf("%s %d\n", ch2, strlen(ch2));
//	return 0;
//}
////二维数组
//#include <stdio.h>
//int main(void)
//{
//	int arr1[2][2] = { 1,2,3,4 }; //三种初始化方式
//	int arr2[2][2] = { {1,2},{3,4} };
//	int arr3[2][2] = { 1,2,
//					   3,4 };
//	
//	return 0;
//}

//冒泡排序
//#include <stdio.h>
//bubble_sort(int arr[])
//{
//	//先确定有多少个元素需要排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)         //n个元素只需要排n-1趟（排10数就要先比9对数），而每一趟就相当于将（至少）一个数放到了它应该在的位置（最大或最小的那个）
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main(void)
//{
//	int arr[10] = { 100,80,90,60,50,70,10,20,5,0 };
//	bubble_sort(arr);
//
//	return 0;
//	return 0;
//}