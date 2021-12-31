//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int my_str(char arr[])
//{
//	int i = 0;
//	for (i = 0;i < 121;i++)
//	{
//		if (arr[i] == 'A')
//		{
//			continue;
//		}
//		else if (arr[i] == 'S')
//		{
//			char tmp[4] = { 0 };
//			tmp[0] = arr[i];
//			tmp[1] = arr[i + 1];
//			tmp[2] = arr[i + 2];
//			if (strcmp(tmp, "SCU") == 0)
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0;i < n;i++)
//	{
//		char arr[121] = { 0 };
//		//ÊäÈë
//		int ch = 0, i = 0;
//		while ((ch = getchar()) != '\n')
//		{
//			arr[i] = ch;
//			i++;
//		}
//		//ÅÐ¶Ï£¬SCU£¬AAASCU
//		my_str(arr);
//		if (my_str(arr) == 1)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}