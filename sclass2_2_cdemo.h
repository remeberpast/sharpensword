#pragma once
#ifndef _SCLASS2_2_CDEMO_H_
#define _SCLASS2_2_CDEMO_H_
#include <iostream>
using namespace std;


class CDemo
{
public:
	/*设置外部接口SerI为i赋值*/
	void SetI(int a)
	{
		i = a;
	}
	/*设置外部接口SetJ为j赋值*/
	void SetJ(int b)
	{
		j = b;
	}
	/*输出i*/
	void GetI()
	{
		cout << "i=" << i << endl;
	}
	/*输出j*/
	void GetJ()
	{
		cout << "j=" << j << endl;
	}
protected:
	int j;
private:
	int i;
};
#endif
