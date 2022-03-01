#define _CRT_SECURE_NO_WARNINGS 1
#include "sclass2_4_square.h"
Square::Square(double s)
{
	side = s;
}
double Square::GetSide()
{
	return side;
}
double Square::GetCircumference()
{
	return 4 * side;
}
double Square::GetArea()
{
	return side * side;
}
void Square::Print()
{
	cout << "边长为" << side << "的正方形的周长是：" << 4 * side << "，面积是：" << side * side << endl;
}