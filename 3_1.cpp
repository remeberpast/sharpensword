#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

#include "sclass2_2_cdemo.h"
#include "sclass2_3_date.h"
using namespace std;

int main()
{
	CDemo d;
	d.SetI(20);
	d.SetJ(10);
	d.GetI();
	d.GetJ();
	
	Date newDate;
	newDate.Print();
	system("pause");
	return 0;
}