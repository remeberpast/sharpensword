//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	//��x��y�����Լ��
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	//���Լ��
//	//շת�����
//	int m = x;
//	int n = y;
//	int c = 0;
//	while (n != 0)
//	{
//		c = m % n;
//		m = n;
//		n = c;
//	}
//	//���m�������Լ��
//	printf("%d\n", m);
//	//��С������
//	printf("%d\n", x * y / m);
//	return 0;
//}

////�ж��Ƿ������Լ������С����
//#include <stdio.h>
//int is(int x, int y, int m, int n)
//{
//	int a = x;
//	int b = y;
//	int c = 0;
//	while (b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	if ((a == m) && (x * y / a == n))
//		return 1;
//	return 0;
//}
//int main(void)
//{
//	//m�����Լ��n����С����
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	//�жϴ���
//	int count = 0;
//	for (int i = m, j = 0;i <= n;i++)
//	{
//		j = m * n / i;
//		if (is(i, j, m, n) == 1)
//		{
//			count++;
//		}		
//	}
//	printf("%d", count);
//	return 0;
//}