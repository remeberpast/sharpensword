//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//forѭ��:��ʼ��ֻ��һ��
//#include <stdio.h>
//int main(void)
//{
//	//for (;;)     /*for����ѭ��*/
//	//{
//	//
//	//}
//
//	//int j = 0;          //�˴���ֻ���������heihei����Ϊ��ѭ��ʡ���˳�ʼ����                  
//	//int i = 0;          //��һ��ѭ�����j��ֵΪ3�����ڶ��ν�����ѭ����j��ȻΪ3������ѭ����
//	//for (;i < 3;i++)
//	//{
//	//	for (;j < 3;j++)
//	//	{
//	//		printf("heihei\n");
//	//	}
//	//}
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{                         //��ѭ��ѭ����0�Σ���Ϊ���ж������k����ֵΪ0��
//	int i = 0;            //��0���ж�Ϊ�٣��ʲ���ѭ��
//	int k = 0;
//	for (i = 0, k = 0;k = 0;i++, k++)
//		k++;
//	return 0;
//}

/*forѭ����ѭ���������ж��*/

/*do while*/
//��ѭ�����жϡ�


////n�Ľ׳ˣ�n��
//#include <stdio.h>
//int main(void)
//{
//	int i, n, N;
//	for (;;)
//	{
//		scanf("%d", &n);
//		for (i = 1, N = 1;i <= n;i++)
//		{
//			N = N * i;
//		}
//		printf("%d", N);
//	}
//	return 0;
//}

////1!+2!+ ����  +10!
//#include <stdio.h>
//int main(void)
//{
//	int i, j, k, n;
//	for (i = 1,n = 0;i <= 3;i++)
//	{
//		for (j = 1,k = 1;j <= i;j++)
//		{
//			k = k * j;
//		}
//		printf("%d\n",k);
//		n = n + k;
//	}
//	printf("%d\n", n);
//	return 0;
//}
////�Ż�,���ý׳�ÿ��ֻҪ��ǰһ�εĻ����϶��һ�Ρ�
//#include <stdio.h>
//int main(void)
//{
//	int ret, n, sum;
//	for (n = 1, ret = 1, sum = 0;n <= 10;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////���ַ�����   ��һ������������в���һ����n��
//#include <stdio.h>
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n;
//	scanf("%d", &n);/*����n*/
//	int sz = sizeof(arr) / sizeof(arr[0]);/*�������鳤��*/
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("find:%d\n", mid);
//			break;
//		}	
//	}
//	if (left > right)
//	{
//		printf("can't find\n");
//	}
//	return 0;
//}