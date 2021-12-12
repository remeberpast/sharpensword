//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//	bool digit_seen[10] = { false };//��Ϊ����ֻ��10������10��Ԫ�ص�����Ϳ��ԣ���ʼ�趨Ϊfalse����ȫ���趨Ϊ��
//	int digit = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		digit = n % 10;
//		if (digit_seen[digit])     //�����һλ���ֿ�ʼ�ң�����ж�Ϊ�٣������ֶ�Ӧ�����λ���趨Ϊ�棬Ȼ������һλ�������һλ����ͬ�����֣���ô����ѭ����n>0;�����û����ͬ�����֣����һֱѭ����n=0.
//		{
//			break;
//		}
//		digit_seen[digit] = true;
//		n = n / 10;
//	}
//	if (n > 0)
//	{
//		printf("����ͬ������\n");
//	}
//	else
//	{
//		printf("û����ͬ������\n");
//	}
//	return 0;
//}