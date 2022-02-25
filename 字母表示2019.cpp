//#define _CRT_SECURE_NO_WARNINGS 1
////A表示1、B表示2以此类推，27为AA，LQ表示329，2019？
////本质上是26进制
//#include <iostream>
//using namespace std;
//int main()
//{
//	//转换进制：短除法,余数放数组并记录位数
//	int num = 2019;
//	int number[10] = { 0 };
//	int count = 0;
//	while (num)
//	{
//		number[count] = num % 26;
//		count++;
//		num /= 26;
//	}
//	//输出
//	while (count >= 0)
//	{
//		cout << char(number[count - 1] + 'A' - 1);
//		count--;
//	}
//	system("pause");
//	return 0;
//}