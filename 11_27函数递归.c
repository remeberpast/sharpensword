#define _CRT_SECURE_NO_WARNINGS 1
////ʷ����򵥵ݹ�
//#include <stdio.h>
//int main(void)
//{
//	printf("haha\n");
//	main();
//	return 0;
//}

////����һ������ֵ����˳���ӡÿһλ
//#include <stdio.h>
//void single_print(unsigned int num)    //���ӡ1234ת��Ϊ123��4���ڻ�Ϊ12��3��4����
//{
//	if (num > 9)          //���������ŵݹ飬�����Ų������ݹ�
//	{
//		single_print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main(void)
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	single_print(num);
//
//	return 0;
//}

////ģ��ʵ��strlen����,�ɴ�����ʱ����
//#include <stdio.h>
//int my_strlen(char* strlen)
//{
//	int count = 0;
//	while (*strlen != '\0')      //strlen��һ��ָ�룬*strlen�ǽ����ã��±�ʾ��Ӧ���ַ�
//	{
//		count++;
//		strlen++;
//	}
//	return count;
//}
//int main(void)
//{
//	char arr[] = "my strlen";
//	printf("%d", my_strlen(arr));  //���鴫���������ǵ�һ�����ĵ�ַ
//	return 0;
//}

////��������ʱ����ģ��strlen���� ���õݹ�
//#include <stdio.h>
//int my_strlen(char* strlen)       // my strlen=1+y strlen=2+ strlen=3+strlen=����
//{
//	if (*strlen != '\0')
//		return 1 + my_strlen(++strlen); //�������ſ�����++str����str+1���ã���Ϊ��������ı�str��ֵ��û�и����ã���������str++����Ϊstr++����ʹ���ڼ�1��������ȥ��ֵ��û�б�ã�����ȥ���+1
//	else
//		return 0;
//}
//int main(void)
//{
//	char arr[] = "my strlen";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

////�ݹ���׳�
//#include <stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//	return 0;
//}

////쳲��������е�n��ݹ������⵫Ч�ʺܵ�
//#include <stdio.h>
//int Fibon(n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibon(n - 1) + Fibon(n - 2);       //Ч�ʺ��������50�Ҫ5��10���ӣ��ɴ����ظ������㡣
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fibon(n));
//	return 0;
//}
////ѭ����쳲���������
//#include <stdio.h>
//int Fibon(int n)
//{
//	int f1 = 1;
//	int f2 = 1;
//	int f3 = 1;
//	while (n > 2)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//		n--;
//	}
//	return f3;
//}
//int main(void)
//{
//	int n = 0;
//		scanf("%d", &n);
//		printf("%d", Fibon(n));
//		return 0;
//}

//���ϵĺ�ŵ��
#include <stdio.h>
int main(void)
{

	return 0;
}