//#define _CRT_SECURE_NO_WARNINGS 1
////1~2019�д���2��0��1��9���������ֵĺ�
//#include <iostream>
//using namespace std;
//int main()
//{
//	int sum = 0;
//	for (int num = 1;num <= 2019;num++)
//	{
//		//��ÿ������λ���ֿ�
//		int signal[4];
//		/*��ʼ������*/
//		for (int i = 0;i < 4;i++)
//		{
//			signal[i] = -1;
//		}
//		//����λ������������
//		int _num = num;
//		int i = 0;
//		while (_num > 0)
//		{
//			signal[i] = _num % 10;
//			_num /= 10;
//			++i;
//		}
//		//�ж��Ƿ������ĸ���
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