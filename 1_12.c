#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//#include <stdio.h>
//#define X 5
//#define Y X+1
//#define Z Y*X/2
//int main(void)
//{
//	int a;
//	a = Y;
//	printf("%d %d\n", Z, a);
//	return 0;
//}

//#include <stdio.h>
//#define N 10
//void sort(int a[N]);
//int main(void)
//{
//	int a[N];
//	int i;
//	for (i = 0;i < N;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a);
//	for (i = 0;i < N;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void sort(int a[N])
//{
//	int i = 1;
//	int j;
//	while (i < N)
//	{
//		int k = a[i];
//		for (j = i - 1;j >= 0;j--)
//		{
//			if (a[j] < k)
//			{
//				a[j + 1] = k;
//			}
//			else
//			{
//				a[j + 1] = a[j];
//				a[j] = k;
//			}
//		}
//		i++;
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	int m;
//	m * 3 = 15;
//	return 0;
//}  

//main函数可以被其他函数调用也可以调用其他函数
//#include <stdio.h>
//void a()
//{
//	main();
//}
//int main()
//{
//	a();
//	main();
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d %d\n", arr[4], *(arr + 4));
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    FILE* fp;
//    int len;
//
//    fp = fopen("practice.txt", "r");
//    if (fp == NULL)
//    {
//        perror("打开文件错误");
//        return(-1);
//    }
//    fseek(fp, 0, SEEK_END);
//
//    len = ftell(fp);
//    fclose(fp);
//
//    printf("file.txt 的总大小 = %d 字节\n", len);
//
//    return(0);
//}

//
//#include <stdio.h>
//int n = 1;
//void func();
//void main()
//{
//	static int x = 5;
//	int y;
//	y = n;
//	printf("%d %d %d\n", x, y, n);
//	func();
//	func();
//	printf("%d %d %d\n", x, y, n);
//	return 0;
//}
//void func()
//{
//	static int x = 4;
//	int y = 10;
//	x = x + 2;
//	n = n + 10;
//	y = y + n;
//	printf("%d %d %d\n", x, y, n);
//}

#include <stdio.h>
int main(void)
{
	/*double a = 8e10;
	printf("%e", a);*/
	/*printf("%.10d", 5);*/
	
	return 0;
}