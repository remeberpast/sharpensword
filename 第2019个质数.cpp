//#define _CRT_SECURE_NO_WARNINGS 1
////�����ƽ�
//#include <iostream>
//using namespace std;
//
//int is_primer_number(int number)
//{
//	for (int i = 2;i * i <= number;i++)
//	{
//		if (number % i == 0)
//		{
//			//���Ƿ���0
//			return 0;
//		}
//	}
//	//�Ƿ���1
//	return 1;
//}
//
//int main()
//{
//	//��2��ʼ��һ��һ����
//	int number = 2;
//	int count = 0;
//	for (number = 2, count = 0;count < 2019;number++)
//	{
//		//�ж��Ƿ�������
//		if (is_primer_number(number))
//		{
//			count++;
//		}
//	}
//	//-1����Ϊ�����count�Ѿ�Ϊ2019ʱ��forѭ�����ǻ�ʹnumber+1
//	cout << number - 1<< endl;
//	system("pause");
//	return 0;
//}