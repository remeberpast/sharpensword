//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//for循环:初始化只有一次
//#include <stdio.h>
//int main(void)
//{
//	//for (;;)     /*for无限循环*/
//	//{
//	//
//	//}
//
//	//int j = 0;          //此代码只会输出三个heihei，因为内循环省略了初始化，                  
//	//int i = 0;          //第一次循环完后，j的值为3，而第二次进行内循环是j仍然为3，不会循环。
//	//for (;i < 3;i++)
//	//{
//	//	for (;j < 3;j++)
//	//	{
//	//		printf("heihei\n");
//	//	}
//	//}
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{                         //此循环循环了0次，因为在判断语句是k被赋值为0；
//	int i = 0;            //而0被判断为假，故不会循环
//	int k = 0;
//	for (i = 0, k = 0;k = 0;i++, k++)
//		k++;
//	return 0;
//}

/*for循环的循环变量可有多个*/

/*do while*/
//先循环在判断。


////n的阶乘：n！
//#include <stdio.h>
//int main(void)
//{
//	int i, n, N;
//	for (;;)
//	{
//		scanf("%d", &n);
//		for (i = 1, N = 1;i <= n;i++)
//		{
//			N = N * i;
//		}
//		printf("%d", N);
//	}
//	return 0;
//}

////1!+2!+ ……  +10!
//#include <stdio.h>
//int main(void)
//{
//	int i, j, k, n;
//	for (i = 1,n = 0;i <= 3;i++)
//	{
//		for (j = 1,k = 1;j <= i;j++)
//		{
//			k = k * j;
//		}
//		printf("%d\n",k);
//		n = n + k;
//	}
//	printf("%d\n", n);
//	return 0;
//}
////优化,利用阶乘每次只要在前一次的基础上多乘一次。
//#include <stdio.h>
//int main(void)
//{
//	int ret, n, sum;
//	for (n = 1, ret = 1, sum = 0;n <= 10;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////二分法查找   在一个有序的数组中查找一个数n。
//#include <stdio.h>
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n;
//	scanf("%d", &n);/*查找n*/
//	int sz = sizeof(arr) / sizeof(arr[0]);/*计算数组长度*/
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("find:%d\n", mid);
//			break;
//		}	
//	}
//	if (left > right)
//	{
//		printf("can't find\n");
//	}
//	return 0;
//}