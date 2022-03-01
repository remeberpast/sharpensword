#pragma once
#ifndef _SCLASS2_4_SQUARE_H_
#define _SCLASS2_4_SQUARE_H_

#include <iostream>
using namespace std;

class Square
{
public:
	Square(double s);
	double GetSide();
	double GetCircumference();
	double GetArea();
	void Print();
private:
	double side;
};

#endif