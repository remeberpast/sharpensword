//#define _CRT_SECURE_NO_WARNINGS 1
////1~2019中带有2、0、1、9的所有数字的和
//#include <iostream>
//using namespace std;
//int main()
//{
//	int sum = 0;
//	for (int num = 1;num <= 2019;num++)
//	{
//		//将每个数各位数分开
//		int signal[4];
//		/*初始化数组*/
//		for (int i = 0;i < 4;i++)
//		{
//			signal[i] = -1;
//		}
//		//将各位数放在数组中
//		int _num = num;
//		int i = 0;
//		while (_num > 0)
//		{
//			signal[i] = _num % 10;
//			_num /= 10;
//			++i;
//		}
//		//判断是否有这四个数
//		for (i = 0;i < 4;i++)
//		{
//			if (signal[i] == 1 || signal[i] == 2 || signal[i] == 0 || signal[i] == 9)
//			{
//				sum += num;
//				break;
//			}
//		}
//	}
//	cout << "SUM = " << sum << endl;
//	system("pause");
//	return 0;
//}