//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int row = 0;
//	int col = 0;
//	int i = 0;
//	scanf("%d%d", &row, &col);
//	int arr[10000] = { 0 };
//	for (i = 0;i < row * col;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	int k = 0;
//	for (k = 0;k < row;k++)
//	{
//		for (j = 0;j < col;j++)
//		{
//			printf("%d ", arr[j + k*3]);
//		}
//		printf("\n");
//	}
//
//	/*for (a = 0;a < row;a++)
//	{
//		printf("%d ", arr[0 + a * 3]);
//	}
//	for(int)*/
//	return 0;
//}

////二维数组存储
//#include <stdio.h>
//int arr1[100][100] = { 0 };
//int MIN(int row, int col)
//{
//	if (row < col)
//		return row;
//	return col;
//}
//int main(void)
//{
//	int ROW = 0;
//	int COL = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &ROW, &COL);
//
//	//输入数据
//	for (i = 0;i < ROW;i++)
//	{
//		for (j = 0;j < COL;j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	//按矩阵形式输出
//	for (i = 0;i < ROW;i++)
//	{
//		for (j = 0;j < COL;j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	//回型输出
//	int min = MIN(ROW, COL);
//	if (min % 2 == 1)
//	{
//		for (int m = 0;m < COL / 2 + 1;m++)
//		{
//			for (int a = m;a < ROW - m;a++)
//			{
//				printf("%d ", arr1[a][m]);
//			}
//			for (int b = m + 1;b < COL - m;b++)
//			{
//				printf("%d ", arr1[ROW - m - 1][b]);
//			}
//			for (int c = ROW - m - 2;c >= m;c--)
//			{
//				printf("%d ", arr1[c][COL - m - 1]);
//			}
//			for (int d = COL - m - 2;d >= m + 1;d--)
//			{
//				printf("%d ", arr1[m][ROW - 1 - m - d]);
//			}
//		}
//	}
//	else if (min % 2 == 0)
//	{
//		for (int m = 0;m < COL / 2 + 1;m++)
//		{
//			for (int a = m;a < ROW - m;a++)
//			{
//				printf("%d ", arr1[a][m]);
//			}
//			for (int b = m + 1;b < COL - m;b++)
//			{
//				printf("%d ", arr1[ROW - m - 1][b]);
//			}
//			for (int c = ROW - m - 2;c >= m;c--)
//			{
//				printf("%d ", arr1[c][COL - m - 1]);
//			}
//			for (int d = COL - m - 2;d >= m + 1;d--)
//			{
//				printf("%d ", arr1[m][ROW - 1 - m - d]);
//			}
//		}
//	}
//	return 0;
//}



