#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string>
using namespace std;

class Date
{
public:
	/*�趨��ǰ���ڵ�������*/
	void SetDate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	/*�ж��Ƿ�����*/
	int IsLeapYear()
	{
		return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	}
	/*�����ǰ������*/
	void Print()
	{
		cout << year << "��" << month << "��" << day << "��";
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
	cout << "������������" << d1.IsLeapYear() << endl;
	system("pause");
	return 0;
}
//int main()
//{
//	string s = "hello world";
//	cout << s << endl;
//	return 0;
//}