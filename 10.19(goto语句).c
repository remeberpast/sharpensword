#define _CRT_SECURE_NO_WARNINGS 1

//   ��������λ��
//#include <stdio.h>
//int main(void)
//{
//	int i = 0, n;
//
//	printf("����һ��������");
//	scanf("%d", &n);
//
//	do
//	{
//		n = n / 10;
//		i++;
//	} while (n > 0);
//
//	printf("����λ����%d\n", i);
//
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	scanf("%d",&n);
//
//	for (i = 2;i < n;i++) 
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i < n)
//	{
//		printf("n�Ǻ���\n");
//
//	}
//	else
//	{
//		printf("n������\n");
//	}
//	return 0;
//}
// 
 
 

// ����
//#include <stdio.h>
//int main(void)
//{
//	int Y;
//	scanf("%d", &Y);
//	if (Y % 4 == 0 && Y % 400 != 0)
//	{
//		printf("yes");
//	}
//	else if (Y % 400 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}



//�Ľ�������
//#include <stdio.h>
//int main(void)
//{
//	int Y;
//	scanf("%d", &Y);
//	if ((Y % 4 == 0 && Y % 400 != 0) || (Y % 400 == 0))
//	{
//		printf("%d������");
//	}
//	else
//	{
//		printf("%d��ƽ��");
//	}
//	return 0;
//}

//goto����жϺ�������
//#include <stdio.h>
//int main(void)
//{
//	int d, n;
//
//	scanf("%d", &n);
//	for (d = 2;d < n;d++)
//	{
//		if (n % d == 0)
//		{
//			goto done;
//		}
//	}
//done:
//	if (d < n)
//	{
//		printf("%d�Ǻ���\n",n);
//	}
//	else
//	{
//		printf("%d������\n", n);
//	}
//	return 0;
//}



//�˲����㣨�̲�89ҳ��
#include <stdio.h>
int main(void)
{
	int command;
	float in, out, balance = 0.00f;  //in��ʾ��Ǯ��out��ʾȡǮ��

	printf("***ACM checkbook-balancing program***\n");
	printf("0=�����1=��Ǯ��2=ȡǮ��3=��ʾ��ǰ��4=�˳�\n");
	for (; ; )
	{
		printf("��������� \n");
		scanf("%d", &command);

		switch (command)
		{
		case 0: 
			balance = 0.00f;
			break;
		case 1: 
			printf("����� ");
			scanf("%f", &in);
			balance = balance + in;
			break;
		case 2: 
			printf("����� ");
			scanf("%f", &out);
			balance = balance - out;
			break;
		case 3:
			printf("��%.2f", balance);
			break;
		case 4:
			return 0;
		default:
			printf("�����룺0=�����1=��Ǯ��2=ȡǮ��3=��ʾ��ǰ��4=�˳�\n");
			break;
		}
	}



	return 0;
}