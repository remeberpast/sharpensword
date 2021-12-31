//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int my_strcmp(char to_find[18], char ini_num[10])
//{
//	int count = 0;
//	for (int i = 0;i < 4;i++)
//	{
//		if (to_find[i] == ini_num[14 + i])
//		{
//			count++;
//		}
//	}
//	if (count == 4)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main(void)
//{
//	struct stu
//	{
//		char name[20];
//		char ini_num[20];
//		char grade[5];
//	};
//	int n = 0;
//	char to_find[18];
//	scanf("%d %s", &n, &to_find);
//	struct stu arr[100];
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%s %s %s", &arr[i].name, &arr[i].ini_num, &arr[i].grade);
//	}
//	//排序
//	//将成绩存进新的数组里
//	int grade_[100] = { 0 };
//	for (int i = 0;i < n;i++)
//	{
//		grade_[i] = atoi(arr[i].grade);
//	}
//	/*struct stu* grade_[100];
//	for (int i = 0;i < n;i++)
//	{
//		if (strcmp(arr[i].grade, "n/a") != 0)
//		{
//			grade_[i] = arr[i].grade;
//		}
//	}*/
//
//	//有成绩的进行排序
//	for (int i = 0;i < n - 1;i++)
//	{
//		for (int j = 0;j < n - 1 - i;j++)
//		{
//			if (grade_[j] < grade_[j + 1])
//			{
//				int tmp = grade_[i];
//				grade_[i] = grade_[i + 1];
//				grade_[i + 1] = tmp;
//			}
//		}
//	}
//	//寻找
//	int tmp = -1;
//	for (int i = 0;i < n;i++)
//	{
//		if (strcmp(to_find, arr[i].name) == 0)
//		{
//			tmp = i;
//		}
//	}
//	if (tmp != -1)
//	{
//		if (strcmp(arr[tmp].grade, "n/a") == 0)
//		{
//			printf("%s %s %s %s\n", arr[tmp].name, arr[tmp].ini_num, arr[tmp].grade, arr[tmp].grade);
//			printf("%s\n", arr[tmp].ini_num);
//		}
//		else
//		{
//			//找到那个人的排名
//			/*int rank = 1;
//			for (int j = 0;j < n;j++)
//			{
//				if (grade_[j] > ((int)arr[tmp].grade))
//				{
//					rank++;
//				}
//			}*/
//			/*int rank = 1;
//			for (int i = 0;i < n;i++)
//			{
//				if (strlen(grade_[i]) > strlen(arr[tmp].grade))
//				{
//					rank++;
//				}
//				else if (strlen(grade_[i]) == strlen(arr[tmp].grade))
//				{
//					if ((grade_[i]).grade[0] > arr[tmp].grade[0])
//					{
//						rank++;
//					}
//					else if ((grade_[i]).grade[0] == arr[tmp].grade[0])
//					{
//						if ((grade_[i]).grade[0] > arr[tmp].grade[1])
//						{
//							rank++;
//						}
//					}
//				}
//			}*/
//			int rank = 1;
//			for (int a = 0;a < n;a++)
//			{
//				if (grade_[a] > atoi(arr[tmp].grade))
//				{
//					rank++;
//				}
//			}
//			printf("%s %s %s %d\n", arr[tmp].name, arr[tmp].ini_num, arr[tmp].grade, rank);
//		}
//	}
//	else
//	{
//		tmp = -1;
//		for (int i = 0;i < n;i++)
//		{
//			if (my_strcmp(to_find, arr[i].ini_num) == 0)
//			{
//				tmp = i;
//			}
//		}
//		if (tmp != -1)
//		{
//			if (strcmp(arr[tmp].grade, "n/a") == 0)
//			{
//				printf("%s %s %s %s\n", arr[tmp].name, arr[tmp].ini_num, arr[tmp].grade, arr[tmp].grade);
//			}
//			else
//			{
//				/*int rank = 1;
//				for (int j = 0;j < n;j++)
//				{
//					if (grade_[j] > ((int)arr[tmp].grade))
//					{
//						rank++;
//					}
//				}
//				printf("%s %s %s %d\n", arr[tmp].name, arr[tmp].ini_num, arr[tmp].grade, rank);*/
//				/*int rank = 1;
//				for (int i = 0;i < n;i++)
//				{
//					if (strlen(grade_[i]) > strlen(arr[tmp].grade))
//					{
//						rank++;
//					}
//					else if (strlen(grade_[i]) == strlen(arr[tmp].grade))
//					{
//						if ((*grade_[i]).grade[0] > arr[tmp].grade[0])
//						{
//							rank++;
//						}
//						else if ((*grade_[i]).grade[0] == arr[tmp].grade[0])
//						{
//							if ((*grade_[i]).grade[0] > arr[tmp].grade[1])
//							{
//								rank++;
//							}
//						}
//					}
//				}*/
//				//找到排名
//				int rank = 1;
//				for (int a = 0;a < n;a++)
//				{
//					if (grade_[a] > atoi(arr[tmp].grade))
//					{
//						rank++;
//					}
//				}
//				printf("%s %s %s %d\n", arr[tmp].name, arr[tmp].ini_num, arr[tmp].grade, rank);
//			}
//		}
//	}
//	return 0;
//}



//郑浩版
//#include<stdio.h>
//#include<string.h>
//typedef struct stu
//{
//	char name[10];
//	char ID[20];
//	char score[5];
//}stu;
//void swap(stu* p1, stu* p2)
//{
//	char tmp[20] = { 0 };
//	strcpy(tmp, p1->name);
//	strcpy(p1->name, p2->name);
//	strcpy(p2->name, tmp);
//	strcpy(tmp, p1->ID);
//	strcpy(p1->ID, p2->ID);
//	strcpy(p2->ID, tmp);
//	strcpy(tmp, p1->score);
//	strcpy(p1->score, p2->score);
//	strcpy(p2->score, tmp);
//}
//void sort(stu* p, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			int len1 = strlen((p + j)->score);
//			int len2 = strlen((p + j + 1)->score);
//			if ((strcmp((p + j)->score, (p + j + 1)->score) < 0) && (len1 == len2))
//			{
//				swap(p + j, p + j + 1);
//			}
//			else if ((len1 < len2) && ((strcmp((p + j + 1)->score, "n/a") != 0) && (strcmp((p + j + 1)->score, "n/a") != 0)))
//			{
//				swap(p + j, p + j + 1);
//			}
//			else if ((strcmp((p + j)->score, "n/a") == 0) && (strcmp((p + j + 1)->score, "n/a") != 0))
//			{
//				swap(p + j, p + j + 1);
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	char target[20] = { 0 };
//	stu arr[100] = { 0 };
//	scanf("%d %s", &n, target);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %s %s", arr[i].name, arr[i].ID, arr[i].score);
//	}
//	sort(arr, n);
//	for (int j = 0; j < n; j++)
//	{
//		if (((strstr(arr[j].name, target) != NULL) || (strstr(arr[j].ID, target) != NULL) || (strcmp(arr[j].score, target) == 0)) && (strcmp(arr[j].score, "n/a") != 0))
//		{
//			if (strcmp(arr[j].score, arr[j - 1].score) != 0)
//				printf("%s %s %s %d\n", arr[j].name, arr[j].ID, arr[j].score, j + 1);
//			else
//				printf("%s %s %s\n", arr[j].name, arr[j].ID, arr[j].score);
//		}
//		if (((strstr(arr[j].name, target) != NULL) || (strstr(arr[j].ID, target) != NULL) || (strcmp(arr[j].score, target) == 0)) && (strcmp(arr[j].score, "n/a") == 0))
//		{
//			if (strcmp(arr[j].score, arr[j - 1].score) != 0)
//				printf("%s %s %s %s\n", arr[j].name, arr[j].ID, arr[j].score, arr[j].score);
//			else
//				printf("%s %s %s\n", arr[j].name, arr[j].ID, arr[j].score);
//		}
//	}
//	return 0;
//}

//
////孙硕版
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char zrr[11];
//	char name[100][11];
//	char number[100][19];
//	char grade[100][4];
//	int fuhezhi[100] = { 0 };
//	int a;
//	int paiming[100] = { 0 };
//	scanf("%d %s", &a, zrr);
//	int d = strlen(zrr);
//	for (int b = 0;b < a;b++)
//	{
//		scanf("%s", &name[b]);
//		scanf("%s", &number[b]);
//		scanf("%s", &grade[b]);
//		int m = 0;
//		for (int e = 0;e < d;e++)
//		{
//			if (zrr[e] != grade[b][e])
//				break;
//			if (e == d - 1)
//				fuhezhi[e] = 1;
//		}
//		for (int e = 0;e < 18;e++)
//		{
//			if (zrr[m] == number[b][e])
//			{
//				m = m + 1;
//				if (m == d)
//					fuhezhi[b] = 1;
//			}
//			else
//			{
//				m = 0;
//				if (zrr[m] == number[b][e])
//				{
//					m = m + 1;
//					if (m == d)
//						fuhezhi[b] = 1;
//				}
//			}
//
//		}
//		m = 0;
//		for (int e = 0;e < strlen(name[b]);e++)
//		{
//			if (zrr[m] == name[b][e])
//			{
//				m = m + 1;
//				if (m == d)
//					fuhezhi[b] = 1;
//			}
//			else
//			{
//				m = 0;
//				if (zrr[m] == name[b][e])
//				{
//					m = m + 1;
//					if (m == d)
//						fuhezhi[b] = 1;
//				}
//			}
//		}
//	}
//	for (int e = 0;e < a;e++)
//	{
//		if (strcmp(grade[e], "n/a") == 0)
//		{
//			paiming[e] = 0;
//		}
//		else
//		{
//			paiming[e] = 1;
//			int chengji1 = atoi(grade[e]);
//			for (int m = 0;m < a;m++)
//			{
//				int chengji = atoi(grade[m]);
//				if (chengji1 < chengji)
//				{
//					paiming[e] = paiming[e] + 1;
//				}
//			}
//		}
//	}
//	for (int e = 0;e < a;e++)
//	{
//		if (fuhezhi[e] == 1 && paiming[e] == 0)
//		{
//			printf("%s %s %s n/a\n", name[e], number[e], grade[e]);
//			continue;
//		}
//		if (fuhezhi[e] == 1)
//		{
//			printf("%s %s %s %d\n", name[e], number[e], grade[e], paiming[e]);
//		}
//	}
//	return 0;
//}
