//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main(void)
//{
//	//创建数组，需要10*10，创建12*12的，防止越界
//	char arr[12][12];
//	//初始化10*10
//	for (int i = 1;i < 11;i++)
//	{
//		for (int j = 1;j < 11;j++)
//		{
//			arr[i][j] = '.';
//		}
//	}
//	//初始化周围的
//	for (int i = 0;i < 12;i++)
//	{
//		arr[0][i] = '*';
//		arr[11][i] = '*';
//		arr[i][0] = '*';
//		arr[i][11] = '*';
//	}
//	//随机数
//	srand((unsigned int)time(NULL));
//	char ch = 'A';
//	int a = 1;
//	int b = 1;
//	arr[a][b] = ch;
//	
//	while (ch >= 'A' && ch < 'Z')
//	{
//		ch = ch + 1;
//		int way = rand() % 4 + 1;
//		if ((way == 1) && (arr[a - 1][b] == '.'))
//		{
//			a = a - 1;
//			b = b;
//			arr[a][b] = ch;
//			/*continue;*/
//			
//		}
//		else if ((way == 2) && (arr[a + 1][b] == '.'))
//		{
//			a = a + 1;
//			b = b;
//			arr[a][b] = ch;
//			/*continue;*/
//		}
//		else if ((way == 3) && (arr[a][b - 1] == '.'))
//		{
//			a = a;
//			b = b - 1;
//			arr[a][b] = ch;
//			/*continue;*/
//		}
//		else if ((way == 4) && (arr[a][b + 1] == '.'))
//		{
//			a = a;
//			b = b + 1;
//			arr[a][b] = ch;
//			/*continue;*/
//		}
//		else
//		{
//			if ((arr[a + 1][b] == '.') || (arr[a - 1][b] == '.') || (arr[a][b + 1] == '.') || (arr[a][b - 1] == '.'))
//			{
//				ch = ch - 1;
//				continue;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	//输出
//	for (int i = 1;i < 11;i++)
//	{
//		for (int j = 1;j < 11;j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}