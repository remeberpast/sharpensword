//#define _CRT_SECURE_NO_WARNINGS 1
////矩形长为2019，宽为324，以小的一边切方形，求个数
//#include <iostream>
//using namespace std;
//int main()
//{
//	int length = 2019, width = 324;
//	int count = 0;
//	while (length != width)
//	{
//		//一直以宽来切，保证宽小于长
//		if (width > length)
//		{
//			int tmp = width;
//			width = length;
//			length = width;
//		}
//		length -= width;
//		++count;
//	}
//	++count;
//	cout << "最多有" << count << "个方形" << endl;
//	system("pause");
//	return 0;
//}