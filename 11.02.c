//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////void�պ�������ʾ����ʱ
//void print_count(int n)
//{
//	printf("T minus %d and counting\n", n);
//}
//int main(void)
//{
//	int i;
//	for (i = 10;i > 0;--i)
//	{
//		print_count(i);
//	}
//	return 0;
//}

////�����жϸ���(����ʧ��)
//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	if (n <= 1)
//	{
//		printf("%d��������Ҳ���Ǻ���",n);
//	}
//	else
//	{
//		for (i = 2;i * i <= n;i++)
//		{
//			if (n % i == 0)
//			{
//				printf("%d����", n);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//���ڷ���������С������
//#include <stdio.h>
//int main(void)
//{
//	float a;
//	scanf("%f", &a);
//	//printf("%d", (int)a);
//	int i = (int)a;
//	float f = (float)a - i;
//	printf("%d\n%f", i, f);
//	//float frac_part, f;
//	//f = 3.14;
//	//scanf("%f")
//	//frac_part = f - (int)f;
//	return 0;
//}

////�����м����������������ֵ
//#include <stdio.h>
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = ~(a ^ b);
//	b = ~(a ^ b);
//	a = ~(a ^ b);   //һ��������һ�������ͬ�����Σ��ͱ��������~��ʾ��λȡ��
//	printf("%d %d\n", a, b);
//	return 0;
//}

