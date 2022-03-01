#define _CRT_SECURE_NO_WARNINGS 1
/*对头文件中类Date的实现*/
#include "sclass2_3_date.h"
Date::Date()
{
	year = 2000;
	month = 1;
	day = 1;
}
void Date::SetDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int Date::IsLeapYear()
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
void Date::Print()
{
	cout << year << "年" << month << "月" << day << "日";
}