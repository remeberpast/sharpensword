//#define _CRT_SECURE_NO_WARNINGS 1
////暴力破解
//#include <iostream>
//using namespace std;
//
//int is_primer_number(int number)
//{
//	for (int i = 2;i * i <= number;i++)
//	{
//		if (number % i == 0)
//		{
//			//不是返回0
//			return 0;
//		}
//	}
//	//是返回1
//	return 1;
//}
//
//int main()
//{
//	//从2开始，一个一个找
//	int number = 2;
//	int count = 0;
//	for (number = 2, count = 0;count < 2019;number++)
//	{
//		//判断是否是质数
//		if (is_primer_number(number))
//		{
//			count++;
//		}
//	}
//	//-1是因为当最后count已经为2019时，for循环还是会使number+1
//	cout << number - 1<< endl;
//	system("pause");
//	return 0;
//}