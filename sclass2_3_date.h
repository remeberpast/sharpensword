#pragma once
#ifndef _SCLASS2_3_DATE_H_
#define _SCLASS2_3_DATE_H_

#include <iostream>
using namespace std;

class Date
{
public:
	/*¹¹Ôìº¯Êý*/
	Date();
	void SetDate(int y, int m, int d);
	int IsLeapYear();
	void Print();
private:
	int year, month, day;
};

#endif
