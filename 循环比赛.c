#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	//队伍数量
	//printf("%d",atoi("af45"));
	int n = 0;
	char team[10][100] = { 0 };
	char race[30][300] = { 0 };
	int score[2][100] = { 0 };//创建一个二维数组，一维用来存放分数，一维用来存放编号
	scanf("%d", &n);
	getchar();
	//输入队伍 
	for (int i = 0;i < n;i++)
	{
		int j = 0;
		int ch = 0;
		while ((ch = getchar()) != '\n')
		{
			if (ch != ' ')
			{
				team[i][j] = ch;
				j++;
			}
		}
		//存编号
		score[1][i] = i;
	}
	//输入比赛及得分情况
	for (int i = 0;i < n * (n - 1) / 2;i++)
	{
		int j = 0;
		int ch = 0;
		while ((ch = getchar()) != '\n')
		{
			if (ch != ' ')
			{
				race[i][j] = ch;
				j++;
			}
		}
	}
	//printf("%s",race[0]);
	//计算分数，获胜记三分，平积一分，输了不扣分
	for (int i = 0;i < n * (n - 1) / 2;i++)
	{
		char team1[10] = { 0 };
		char team2[10] = { 0 };
		int j = 0;
		//获取比赛双方的队名
		//前一组的队名
		while (race[i][j] != '-')
		{
			team1[j] = race[i][j];
			j++;
		}
		j++;
		//后一组的队名
		int a = 0;
		while (race[i][j] != ':')
		{
			
			team2[a] = race[i][j];
			a++;
			j++;
		}
		j++;
		//获取双方的比分
		int grade1 = race[i][j];
		j += 2;
		int grade2 = race[i][j];
		//计算分数
		if (grade1 > grade2)
		{
			for (int a = 0;a < n;a++)
			{
				if (strcmp(team1, team[a]) == 0)
				{
					score[0][a] += 3;
				}
			}
			//	score[0]++;
		}
		else if (grade1 < grade2)
		{
			for (int a = 0;a < n;a++)
			{
				if (strcmp(team2, team[a]) == 0)
				{
					score[0][a] +=3;
				}
			}
		}
		else if (grade1 == grade2)
		{
			for (int a = 0;a < n;a++)
			{
				if (strcmp(team1, team[a]) == 0)
				{
					score[0][a]++;
				}
				if (strcmp(team2, team[a]) == 0)
				{
					score[0][a]++;
				}
			}
		}
		//printf("%d",score[0]); 
	}
	//找最大，排序的方法
	for (int a = 0;a < n - 1;a++)
	{
		for (int b = 0;b < n - a - 1;b++)
		{
			if (score[0][b] < score[0][b + 1])
			{
				//交换分数
				int tmp_s = score[0][b];
				score[0][b] = score[0][b + 1];
				score[0][b + 1] = tmp_s;
				//交换编号
				int tmp_j = score[1][b];
				score[1][b] = score[1][b + 1];
				score[1][b + 1] = tmp_j;
			}
		}
	}
	/*int MAX = score[0];
	int i_max = 0;
	for (int i = 0;i < n;i++)
	{
		if (score[i] > MAX)
		{
			MAX = score[i];
			i_max = i;
		}
	}
	printf("%s\n", team[i_max]);*/
	//printf("team1\nteam2\n");
	//输出获奖者
	printf("%s\n", team[score[1][0]]);
	int ea = 0;
	/*看有同分的没有*/
	/*while ((score[0][ea] == score[0][ea + 1]))
	{
		printf("%s\n", team[score[1][ea + 1]]);
		ea++;
	}*/
	for (ea = 0;ea < n - 1;ea++)
	{
		if (score[0][ea] == score[0][ea + 1])
		{
			printf("%s\n", team[score[1][ea + 1]]);
		}
		else
		{
			break;
		}
	}
	printf("%d\n", score[0][0]);
	return 0;
}
