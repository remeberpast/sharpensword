#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string>
using namespace std;

class Date
{
public:
	/*设定当前日期的年月日*/
	void SetDate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	/*判断是否闰年*/
	int IsLeapYear()
	{
		return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	}
	/*输出当前年月日*/
	void Print()
	{
		cout << year << "年" << month << "月" << day << "日";
	}
private:
	int year;
	int month;
	int day;
};

int main()
{
	if (1 and 1)
	{
		cout << 1 << endl;
	}

	Date d1;
	d1.SetDate(2012, 11, 11);
	d1.Print();
	cout << "此年是闰年吗？" << d1.IsLeapYear() << endl;
	system("pause");
	return 0;
}
//int main()
//{
//	string s = "hello world";
//	cout << s << endl;
//	return 0;
//}