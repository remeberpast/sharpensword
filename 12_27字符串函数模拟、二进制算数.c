#define _CRT_SECURE_NO_WARNINGS 1
////ģ��ʵ��strcpy
//#include <stdio.h>
//#include <assert.h>
////void my_strcpy(char*dest, char*src)
////{
////	while (*src != '\0')
////	{
////		/**dest = *src;
////		dest++;
////		src++;*/
////		//�Ż���
////		*dest++ = *src++;
////	}
////	*dest = *src;
////}
//////���Ż���
////void my_strcpy(char* dest, char* src)
////{
////	while (*dest++ = *src++);
////}
////�����Ż� ����
//void my_strcpy(char* dest, const char* src)  //��const��ֹcopyʱд���ˣ�const���κ����Ϊ�����������ܱ��޸ģ��������ϻ��Ǳ���
//{
//	assert(src != NULL);//���ԣ����������ж�����
//	assert(dest != NULL);
//	while (*dest++ = *src++);
//}
//int main(void)
//{
//	char arr1[20] = "XXXXXXXXXXXXXXX";
//	char arr2[20] = "Hello Food!";
//	//strcpy(arr1,arr2)
//	my_strcpy(arr1, arr2);
//	printf("%s\n%s\n", arr1, arr2);
//	return 0;
//}

//����ʵ����һ����������1�ĸ���
//ע�������ģ2��2ȥ����ô�����ǲ��еģ����������ƻ����Ʋ������Ͷ�
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 1;
//	int count = 0;
//	for (int i = 0;i < 32;i++)
//	{
//		if ((a & n) == a)
//		{
//			count++;
//		}
//		a = a << 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//���ø�����ķ���
//#include <stdio.h>
//int num_of1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", num_of1(n));
//	return 0;
//}

//�ж�һ�����Ƿ���2��n�η�����n-1��

////��ȡһ����������λ������λ��ż��λ
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	//ż��λ
//	printf("ż��λ��");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	//����λ
//	printf("����λ��");
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}