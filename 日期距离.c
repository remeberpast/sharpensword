//#define _CRT_SECURE_NO_WARNINGS 1
////08/09/12:1427   08/07/04:1427   09/11/12:1034   
//#include <stdio.h>
////判断润年
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d/%d/%d", &a, &b, &c);
//	//平年
//	int month_days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	//闰年
//	int prime_month_days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	char* month[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//	//判断属于哪种情况，或是两种都满足
//	//1.两种情况都满足，算差值
//	if ((a >= 1 && a <= 12) && (b >= 1 && b <= 12) && (c >= 1 && c <= 31))
//	{
//		int time_distant = 0;
//		int year1, year2;
//		c > a ? (year2 = c, year1 = a) : (year2 = a, year1 = c);
//		//记录闰年年数
//		int prime_count = 0;
//		//年的天数
//		for (year1;year1 < year2 - 1;year1++)
//		{
//			if (year1 % 4 == 0)
//			{
//				time_distant = time_distant + 366;
//				prime_count++;
//			}
//			else
//			{
//				time_distant = time_distant + 365;
//			}
//		}
//		//月的天数
//		if (c > a)
//		{
//			//前一年的月份
//			if ((year2 - 1) % 4 == 0)
//			{
//				for (int i = b - 1;i < 12;i++)
//				{
//					time_distant = time_distant + prime_month_days[i];
//				}
//			}
//			else
//			{
//				for (int i = b - 1;i < 12;i++)
//				{
//					time_distant = time_distant + month_days[i];
//				}
//			}
//			//后一年的月份
//			if (year2 % 4 == 0)
//			{
//				for (int i = 0;i < a - 1;i++)
//				{
//					time_distant = time_distant + prime_month_days[i];
//				}
//			}
//			else
//			{
//				for (int i = 0;i < a - 1;i++)
//				{
//					time_distant = time_distant + month_days[i];
//				}
//			}
//		}
//		else
//		{
//			//前一年的月份
//			if ((year2 - 1) % 4 == 0)
//			{
//				for (int i = a - 1;i < 12;i++)
//				{
//					time_distant = time_distant + prime_month_days[i];
//				}
//			}
//			else
//			{
//				for (int i = a - 1;i < 12;i++)
//				{
//					time_distant = time_distant + month_days[i];
//				}
//			}
//			//后一年的月份
//			if (year2 % 4 == 0)
//			{
//				for (int i = 0;i < b - 1;i++)
//				{
//					time_distant = time_distant + prime_month_days[i];
//				}
//			}
//			else
//			{
//				for (int i = 0;i < b - 1;i++)
//				{
//					time_distant = time_distant + month_days[i];
//				}
//			}
//		}
//		////相差天数
//		if (c > a)
//		{
//			time_distant = time_distant + b - c;
//		}
//		else
//		{
//			time_distant = time_distant + c - b;
//		}
//		printf("%d", time_distant);
//	}
//	//2.满足情况MM/DD/YY
//	else if (a < 12)
//	{
//		if (b > 12)
//		{
//			printf("%s %d, %d", month[a - 1], b, 2000 + c);
//		}
//		else
//		{
//			if (c > 31)
//			{
//				printf("%s %d, %d", month[a - 1], b, 2000 + c);
//			}
//		}
//	}
//	/*else if ((a >= 1 && a <= 12) && (b > 31))
//	{
//		printf("%s %d, %d", month[a - 1], b, 2000 + c);
//	}
//	else if ((a >= 1 && a <= 12) && (b >= 1 && b <= 12) && (c > 31))
//	{
//		printf("%s %d, %d", month[a - 1], b, 2000 + c);
//	}*/
//	//3.满足情况YY/MM/DD
//	else
//	{
//		printf("%d, %s %d", 2000 + a, month[b - 1], c);
//	}
//	return 0;
//}


//#include<stdio.h>
//struct month
//{
//	char month[20];
//	int day;
//};
//int is_prime_year(int year)
//{
//	if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
//		return 1;
//	return 0;
//}
//int count1(int year, int month, int day)
//{
//	int count = 0;
//	if ((is_prime_year(year) == 1))
//	{
//		for (int i = 1; i <= month - 1; i++)
//		{
//			switch (i)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				count += 31;
//				break;
//			case 2:
//				count += 29;
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				count += 30;
//				break;
//			}
//		}
//		count += day;
//		return 366 - count;
//	}
//	else
//	{
//		for (int i = 1; i <= month - 1; i++)
//		{
//			switch (i)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				count += 31;
//				break;
//			case 2:
//				count += 28;
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				count += 30;
//				break;
//			}
//		}
//		count += day;
//		return 365 - count;
//	}
//}
//int count2(int year, int month, int day)
//{
//	int count = 0;
//	if ((is_prime_year(year) == 1))
//	{
//		for (int i = 1; i <= month - 1; i++)
//		{
//			switch (i)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				count += 31;
//				break;
//			case 2:
//				count += 29;
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				count += 30;
//				break;
//			}
//		}
//		count += day;
//		return count;
//	}
//	else
//	{
//		for (int i = 1; i <= month - 1; i++)
//		{
//			switch (i)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				count += 31;
//				break;
//			case 2:
//				count += 28;
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				count += 30;
//				break;
//			}
//		}
//		count += day;
//		return count;
//	}
//}
//int count3(int first, int second, int third)
//{
//	if (first > second)
//		return count2(2000 + third, first, second) - count2(2000 + first, second, third);
//	else
//		return count2(2000 + first, second, third) - count2(2000 + third, first, second);
//}
//int main()
//{
//	int first, second, third;
//	scanf("%d/%d/%d", &first, &second, &third);
//	struct month months[12] = { {"January",31},{"February",28},{"March",31},{"April",30},{"May",31},{"June",30},{"July",31},{"August",31},{"September",30},{"October",31},{"November",30},{"December",31} };
//	if ((second > 12) || (third > 31))
//	{
//		//第一种
//		printf("%s %d, %d", months[first - 1].month, second, 2000 + third);
//	}
//	else if (first > 12)
//	{
//		//第二种
//		printf("%s %d, %d", months[second - 1].month, third, 2000 + first);
//	}
//	else
//	{
//		//两种都满足
//		int diff = 0;
//		if (first < third)
//		{
//			for (int i = 1; i <= (third - first - 1); i++)
//			{
//				if (is_prime_year(2000 + first + i) == 1)
//					diff += 366;
//				else
//					diff += 365;
//			}
//			diff = diff + count1(2000 + first, second, third) + count2(2000 + third, first, second);
//		}
//		else if (first > third)
//		{
//			for (int i = 1; i <= (first - third - 1); i++)
//			{
//				if (is_prime_year(2000 + third + i) == 1)
//					diff += 366;
//				else
//					diff += 365;
//			}
//			diff = diff + count1(2000 + third, first, second) + count2(2000 + first, second, third);
//		}
//		else
//		{
//			diff = count3(first, second, third);
//		}
//		printf("%d\n", diff);
//	}
//	return 0;
//}