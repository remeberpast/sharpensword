#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
////�ַ�����
//int main(void)
//{
//	char ch = 'A';
//	//isdigit(ch):�����ַ����ط��㣬���������ַ�����0
//	isdigit(ch);
//	//islower:�ж��ַ��Ƿ�Сд
//	islower(ch);
//	return 0;
//}


//�ڴ溯��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(void)
//{
//	//memcpy:�����ڴ棬����ڴ�飬��strcpy�����������,��strcpy���񣬶��˵�������������copy�Ŀռ��С
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//	//memmove:��Ҫ�����ڴ����ص������������ʹ��memcpy�����ƶ�һ���ڴ��С�Ŀռ�
//	memmove(arr1 + 2, arr1, 20);//һ���ĸ����ͣ�Ч�����ĸ���������ƶ�����λ
//	//memcmp:�Ƚ�һ����С�ڴ�:��strcmp������ͬ����0������ڴ�ռ��е����ݵ�һ�����ڵڶ������򷵻ش������ֵ����С���򷵻�ֵС��0
//	memcmp(arr1, arr2, 4);//����ʵ���������ʾ���ٸ��ֽڣ������ǰ�ҵ��˲�ͬ�����ݣ���������ǰ����
//	memcmp(arr1, arr2, 8);
//	//memset(ptr,value,num):��ptrָ�����һ�οռ��num���ֽڳ�ʼ��Ϊvalue
//	memset(arr2, 4, 20);//Ҫע�����������������ֽ�Ϊ��λ��ʼ���ڴ��
//	return 0;
//}