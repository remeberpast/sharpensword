#pragma once
#ifndef _SCLASS2_2_CDEMO_H_
#define _SCLASS2_2_CDEMO_H_
#include <iostream>
using namespace std;


class CDemo
{
public:
	/*�����ⲿ�ӿ�SerIΪi��ֵ*/
	void SetI(int a)
	{
		i = a;
	}
	/*�����ⲿ�ӿ�SetJΪj��ֵ*/
	void SetJ(int b)
	{
		j = b;
	}
	/*���i*/
	void GetI()
	{
		cout << "i=" << i << endl;
	}
	/*���j*/
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
