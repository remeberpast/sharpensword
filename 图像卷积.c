//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////反转矩阵
//void reverse_pi(int arr[100][100], int h)
//{
//	//先反转一条对角线上的
//	for (int i = 0, j = (h + 1) / 2 - i;j > i;i++, j--)
//	{
//		int tmp = arr[i][j];
//		arr[i][j] = arr[h - 1 - i][h - 1 - j];
//		arr[h - 1 - i][h - 1 - j] = tmp;
//	}
//	//在反转其他的
//	for (int sum = 0;sum <= (h - 1) / 2;sum++)
//	{
//		for (int i = 0, j = sum - i;j >= 0;i++,j--)
//		{
//			int tmp = arr[i][j];
//			arr[i][j] = arr[h - 1 - i][h - 1 - j];
//			arr[h - 1 - i][h - 1 - j] = tmp;
//		}
//	}
//	/*for (int i = 0;i < h;i++)
//	{
//		for (int j = 0;j < h;j++)
//		{
//			int tmp = arr[i][j];
//			arr[i][j] = arr[h - 1 - i][h - 1 - j];
//			arr[h - 1 - i][h - 1 - j] = tmp;
//		}
//	}*///转了两便，又转回去了
//}
////输出矩阵
//void print(int arr[100][100], int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < n;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	//x表示图像，h是卷积核
//	int x = 0, h = 0;
//	scanf("%d %d", &x, &h);
//	int xrr[100][100] = { 0 };
//	int hrr[100][100] = { 0 };
//	//输入，先是图像，再是卷积核
//	for (int i = 0;i < x;i++)
//	{
//		for (int j = 0;j < x;j++)
//		{
//			scanf("%d", &xrr[i][j]);
//		}
//	}
//	for (int i = 0;i < h;i++)
//	{
//		for (int j = 0;j < h;j++)
//		{
//			scanf("%d", &hrr[i][j]);
//		}
//	}
//	//卷积核反转180度
//	reverse_pi(hrr, h);
//	//计算（核：（h-1）/2）;外面的两个循环遍历矩阵，内部的循环用来遍历卷积核
//	int end[100][100] = { 0 };
//	for (int i = 0;i < x;i++)
//	{
//		for (int j = 0;j < x;j++)
//		{
//			int sum = 0;
//			for (int a = 0;a < h;a++)
//			{
//				for (int b = 0;b < h;b++)
//				{
//					if ((h - 1) / 2 - a > i || (h - 1) / 2 - b > j)
//					{
//						continue;
//					}
//					else
//					{
//						sum = sum + xrr[i + a - (h - 1) / 2][j + b - (h - 1) / 2] * hrr[a][b];
//					}
//				}
//			}
//			end[i][j] = sum;
//		}
//	}
//	//输出
//	print(end, x);
//	return 0;
//}

//郑浩sb
//
//int num[100][100] = { 0 };//矩阵
//int tmp[100][100] = { 0 };//临时存放矩阵中的数
//int jjh1[100][100] = { 0 };//卷积核
//int jjh2[100][100] = { 0 };//卷积核（翻转180°后）
//int main()
//{
//	int x, h;
//	scanf("%d%d", &x, &h);//矩阵、卷积核的阶数
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			scanf("%d", &num[i][j]);
//			tmp[i][j] = num[i][j];
//		}
//	}
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < h; j++)
//		{
//			scanf("%d", &jjh1[i][j]);
//			jjh2[h - i - 1][h - j - 1] = jjh1[i][j];
//		}
//	}
//	for (int n = 0; n < x; n++)
//	{
//		for (int m = 0; m < x; m++)
//		{
//			int sum = 0;
//			//卷积核1
//			for (int a = 0; a < h; a++)
//			{
//				for (int b = 0; b < h; b++)
//				{
//					if ((n - h / 2 + a < 0) || (m - h / 2 + b < 0))
//						continue;
//					else
//						sum += (jjh2[a][b] * tmp[n - h / 2 + a][m - h / 2 + b]);
//				}
//			}
//			num[n][m] = sum;
//		}
//	}
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			printf("%d ", num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}