//#define _CRT_SECURE_NO_WARNINGS 1
////�������ظ�λ����֮��
//#include <stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);         //�ݹ飺���»�С
//	else
//		return n;
//}
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d", sum);
//	return 0;
//}

////�ݹ����n��k�η�
//#include <stdio.h>
//double Pow(int n, int k) //��Ϊһ�����ø����η�ΪС�������Է���ֵΪ������
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main(void)
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);      //C�������п⺯��pow����η��������ô�д������ҲҪ��double��
//	printf("%lf", ret);
//	return 0;
//}

////���鿪ʼ
//#include <stdio.h>
//int main(void)
//{
//	char ch1[] = "cw";         //������д���Ĳ�����ڣ�ch1�����ĸ�Ԫ�أ���Ϊ�ַ���ĩβ�Դ�һ��\0����ch2��ֻ������Ԫ��
//	char ch2[] = { 'c','w' };     //��ӡ�ڶ�����ch2�ǻ�������루���ֵ������Ϊû��\0,��֪��ʲôʱ����������ַ������ȵ�ʱ��Ҳ�����ֵ
//	printf("%s %d\n", ch1, strlen(ch1));
//	printf("%s %d\n", ch2, strlen(ch2));
//	return 0;
//}
////��ά����
//#include <stdio.h>
//int main(void)
//{
//	int arr1[2][2] = { 1,2,3,4 }; //���ֳ�ʼ����ʽ
//	int arr2[2][2] = { {1,2},{3,4} };
//	int arr3[2][2] = { 1,2,
//					   3,4 };
//	
//	return 0;
//}

//ð������
//#include <stdio.h>
//bubble_sort(int arr[])
//{
//	//��ȷ���ж��ٸ�Ԫ����Ҫ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)         //n��Ԫ��ֻ��Ҫ��n-1�ˣ���10����Ҫ�ȱ�9����������ÿһ�˾��൱�ڽ������٣�һ�����ŵ�����Ӧ���ڵ�λ�ã�������С���Ǹ���
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main(void)
//{
//	int arr[10] = { 100,80,90,60,50,70,10,20,5,0 };
//	bubble_sort(arr);
//
//	return 0;
//	return 0;
//}