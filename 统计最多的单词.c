#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
char arr[10000] = { 0 };
char words[1000][20] = { 0 };
int main(void)
{
	
	int n = 0;
	int ch = 0;
	//读入文本
	while ((ch=getchar()) != EOF)
	{
		arr[n] = ch;
		n++;
	}
	//全部转化为小写
	for (int a = 0;a < n;a++)
	{
		if (arr[a] >= 'A' && arr[a] <= 'Z')
		{
			arr[a] = arr[a] + 'a' - 'A';
		}
	}
	//将每个单词分开（空格，标点符号）
	//将每个单词存入多维数组，一个单词一行
	int row = 0, col = 0;
	int m = 0;
	while (m<n)
	{
		while (arr[m] != ' ' && arr[m] != ',' && arr[m] != '.' && arr[m] != '?' && arr[m] != '!' && arr[m] != ':' && arr[m] != ';' && arr[m] != '\n')
		{
			words[row][col] = arr[m];
			m++;
			col++;
		}
		while(arr[m] == ' ' || arr[m] == ',' || arr[m] == '.' || arr[m] == '?' || arr[m] == '!' || arr[m] == ':' || arr[m] == ';' || arr[m] == '\n')
		{
			if (arr[m + 1] != ' ' && arr[m + 1] != ',' && arr[m + 1] != '.' && arr[m + 1] != '?' && arr[m + 1] != '!' && arr[m + 1] != ':' && arr[m + 1] != ';' && arr[m + 1] != '\n')
			{
				m++;
				row++;
				col = 0;
			}
			else
			{
				m++;
			}
		}
	}
	/*printf("%d", row);
	char* word_arr[1000] = {"\0"};
	int a = 0;
	int b = 0;
	while (1)
	{
		for (b = 0;b < n;b++)
		{
			if (arr[b] != ' ' || arr[b] != ',' || arr[b] != '.' || arr[b] != ';' || arr[b] != '?')
			{
				strcat(word_arr[a], arr[b]);
			}
			else if ((arr[b] == ' ' || arr[b] == ',' || arr[b] == '.' || arr[b] == ';' || arr[b] == '?') && (arr[b + 1] != ' ' || arr[b + 1] != ',' || arr[b + 1] != '.' || arr[b + 1] != ';' || arr[b + 1] != '?'))
			{
				a++;
			}
		}
	}*/
	//将所有单词都按词典序排个序，以便次数相同时输出词典徐最大的那个(实用冒泡排序的方式)
	for (int i = 0;i < row - 1;i++)
	{
		for (int j = 0;j < row - i - 1;j++)
		{
			if (strcmp(words[i], words[i + 1]) < 0)
			{
				char tmp[20] = { 0 };
				strcpy(tmp, words[i]);
				strcpy(words[i], words[i + 1]);
				strcpy(words[i + 1], tmp);
			}
		}
	}
	//开始找单词次数
	char max[20] = { 0 };
	int MAX = 0;
	for (int i = 0;i < row - 1;i++)
	{
		/*if (strcmp(words[i], 0) == 0)
		{
			i++;
		}*/
		int count = 0;
		for (int j = i;j < row;j++)
		{
			if (strcmp(words[i], words[j]) == 0)
			{
				count++;
			}
		}
		if (count > MAX)
		{
			MAX = count;
			strcpy(max, words[i]);
		}
	}
	//输出
	printf("%s %d", max, MAX);
	return 0;
}



////郑浩版
//#include<stdio.h> 
//#include<string.h>
//char words[1000][100] = { 0 };
////不区分大小写判断是否相同
//int my_strcmp(const char* str1, const char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	for (int i = 0; (i <= len1) && (i <= len2); i++)
//	{
//		if (*(str1 + i) != *(str2 + i))
//			return *(str1 + i) - *(str2 + i);
//		else if ((*(str1 + i) == *(str2 + i)) || (*(str1 + i) - *(str2 + i) == 32) || (*(str1 + i) - *(str2 + i) == -32))
//			continue;
//	}
//	if (len1 == len2)
//		return 0;
//	else
//		return len1 - len2;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	char ch = 0;
//	char most[100] = { 0 };
//	while ((ch = getchar()) != EOF)
//	{
//		if (((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122)))
//		{
//			words[i][j] = ch;
//			j++;
//		}
//		else
//		{
//			if (j != 0)
//			{
//				i++;
//				j = 0;
//			}
//			else if (j == 1)
//				j = 0;
//		}
//	}
//	for (int k = 0; k < i; k++)
//	{
//		int count = 0;
//		for (int m = 0; m < i; m++)
//		{
//			if (my_strcmp(words[k], words[m]) == 0)
//				count++;
//
//		}
//		if (count > max)
//		{
//			max = count;
//			strcpy(most, words[k]);
//		}
//	}
//	for (int l = 0; l < strlen(most); l++)
//	{
//		if ((most[l] >= 65) && (most[l] <= 90))
//			printf("%c", most[l] + 32);
//		else
//			printf("%c", most[l]);
//	}
//	printf(" %d\n", max);
//	return 0;
//}