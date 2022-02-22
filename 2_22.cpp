#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	int i = 10;
	char c = 'a';
	float f = 20.235;
	int* pi = &i;
	const char* pa = "hello world";
	cout << i << '\t' << c << '\t' << f << endl;
	cout << pi << '\t' << pa << endl;
	cout << "这是一个串常量" << endl;

	system("pause");
	return 0;
}