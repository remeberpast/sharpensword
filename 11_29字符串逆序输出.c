//#define _CRT_SECURE_NO_WARNINGS 1
////��������ַ���
////�ǵݹ鷨
//#include<string.h>
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
//void reverse_string(char* str)   //��ָ����տ������������Ҳ����
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)           //=��Ҫ�ɲ�Ҫ
//	{
//		char tmp = str[left];      //������ָ���������һ����,��ָ�����д��*��str+left��,��ͬ
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main(void)
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);      //������������Ԫ�ص�ַ
//	printf("%s", arr);
//	return 0;
//}
////�ݹ鷨��������ַ���
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
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);        
//	char tmp = *str;              //1������һ���ַ�������ʱ����
//	*str = *(str + len - 1);       //2�������һ���ַ�������һ��
//	*(str + len - 1) = '\0';        //3�������һ���ַ�����һ��\0,�Ա���һ�ε��ú���ʱ�����õ����һ����Ӧ����a��
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);    //4���ٴε��ú�������ʱֻ��bcde�ᴫ������
//	}
//	*(str + len - 1) = tmp;          //5������ٽ���һ���ַ��ŵ����һλ
//}
//int main(void)
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}