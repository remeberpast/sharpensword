//#define _CRT_SECURE_NO_WARNINGS 1
////�ڴ��ͷŵ���Ұָ��
//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main(void)
//{
//	int* p = test();
//	*p = 20;        //������ִ����Ϻ�a�ͱ������ˣ���ʱp��Ȼ�������ĵ�ַ�����Ѿ�����a�ˣ�����ڴ��Ѿ�����������ϵͳ�ˣ��ڷ��ʾ��ǷǷ������ڴ���
//	return 0;
//}

////ָ��Ƚ�
//#include <stdio.h>
//int main(void)
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7,8, 9 };
//	int* start = arr;
//	int* end = arr + 9;
//	while (start <= end)
//	{
//		printf("%d ", *start);
//		start++;
//	}
//	return 0;
//}

////ָ��ģ��ʵ��strlen(�����Եݹ�ʵ��)
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main(void)
//{
//	int len = my_strlen("abcd"); //����ȥ�����׸��ַ��ĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}
////ָ���ȥָ��ʵ��
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main(void)
//{
//	int len = my_strlen("abcde");
//	printf("%d\n", len);
//	return 0;
//}