//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////��������Խ����ʿ��ܻ��޸�i��ֵ�����ѭ��
//int main(void)
//{
//	int i = 0;
//	int count = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 500;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////ģ��ʵ��strcpy��\0Ҳ��copy��
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
////void my_strcpy(char* dest, char* src)
////{
////	while (*src)
////	{
////		*dest = *src;
////		dest++;
////		src++;
////	}
////}
////�����Ż�
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main(void)
//{
//	char arr1[20] = "XXXXXXXX";
//	char arr2[10] = "HELLO!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////����Ǵ�˴洢����С�˴洢
//#include <stdio.h>
//int main(void)
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}