#define _CRT_SECURE_NO_WARNINGS 1
////ģ��qsortдһ��ͨ��ð������
//#include <stdio.h>
//#include <string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_age(void* e1, void* e2)
//{
//	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
//}
//int cmp_name(void* e1, void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
////void swap(char* buf1, char* buf2, int width)
////{
////	for (int i = 0;i < width;i++)
////	{
////		//���ｫ��ַ�����ú󽻻�������ʵ���ں����ڲ��ı����������
////		//����ֱ�ӽ�����ַ����Ϊ���ֱ�ӽ�����ַ���Ǿ��൱��ͨ�Ĵ�ֵ���ã�buf1��buf2ʹ������ǻᱻ���٣������ٵ��ǵ�ַָ�������
////		char tmp = *buf1;
////		*buf1 = *buf2;
////		*buf2 =tmp;
////		buf1++;
////		buf2++;
////	}
////}
//void bubble_sort(void* base,
//				int sz,
//				int width,
//				int (*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		for (int j = 0;j < sz - 1 - i;j++)
//		{
//			//�Ƚϣ�cmp��ʹ���߸��ݲ�ͬ��������ȥд
//			//��ΪbaseΪvoid���ͣ����ܼӼ���ǿ������ת��Ϊchar*���ͺ��ټ�width�Ϳ��Խ���������⣬
//			//ӦΪchar*����ָ�������һ���ֽڣ���width��������һ��Ԫ��
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				char* buf1 = (char*)base + j * width;
//				char* buf2 = (char*)base + (j + 1) * width;
//				//��Ϊֻ֪����ַ������ʹ�ý����õ�ַ�ķ�ʽ��������
//				//������ǽ����ú󽻻����ݣ�����ֱ�ӽ�����ַ��buf1��buf2���Ļ�����û�н���ԭ���ĵ�ַ��ֻ�ǽ�����buf1��buf2
//				//������Ҫ͸����ַ������ַָ�������
//				for (int k = 0;k < width;k++)
//				{
//					char tmp = *buf1;
//					*buf1 = *buf2;
//					*buf2 = tmp;
//					buf1++;
//					buf2++;
//				}
//				/*swap((char*)base + j * width, (char*)base + (j + 1) * width, width);*/
//			}
//		}
//	}
//}
//void print(struct stu*p,int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%s %d\n", (p + i)->name, (p + i)->age);
//	}
//}
//int main(void)
//{
//	struct stu arr[3] = { {"����",30},{"����",19},{"������",11} };
//	//ʹ��bubble_sort����������
//	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_age);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	//ʹ��bubble_sort����������
//	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_name);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//strtok
//strtok�����������и��ַ��������������һ��������Ϊ��ָ�룬��ֻ�ҵ���һ����ǲ���¼λ�ã�
//���������һ������Ϊ��ָ�룬��ô�������һ�εı�ǿ�ʼ������Ѱ����һ����ǣ����û���ҵ���ǣ����᷵��һ����ָ��
//�������ʹ����static��̬�ֲ�����
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char arr[50] = { "1*2*3*4*5*6*7*8*9" };
//	char* p = "*";
//	char* ret = NULL;
//	//ʹ��ѭ���ҵ����е��и��
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror
//C���Ե��ÿ⺯��ʧ�ܶ�����һ�������룬strerror�����ñ��ǽ������뷭��Ϊ������Ϣ
//
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));

	return 0;
}