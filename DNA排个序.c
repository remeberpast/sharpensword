//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &n, &m);
//	char arr1[100] = { 0 };
//	for (int i = 0;i < m;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf("%c", &arr1[j]);
//		}
//	}
//	return 0;
//}



//Ö£ºÆµÄ´ôÂí
//#include<stdio.h>
//#include<string.h>
//int get_entropy(char* str)
//{
//	int count = 0;
//	int len = (int)strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = i + 1; j < len; j++)
//		{
//			if (*(str + j) < *(str + i))
//				count++;
//		}
//		for (int k = i - 1; k >= 0; k--)
//		{
//			if (*(str + k) > *(str + i))
//				count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char ch = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	ch = getchar();
//	char str[100][100] = { 0 };
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%c", &str[i][j]);
//		}
//		ch = getchar();
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m - i - 1; j++)
//		{
//			if (get_entropy(str[j]) > get_entropy(str[j + 1]))
//			{
//				char tmp[100] = "";
//				strcpy(tmp, str[j]);
//				strcpy(str[j], str[j + 1]);
//				strcpy(str[j + 1], tmp);
//			}
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	printf("********************\n");
//	return 0;
//}