#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char a = 0xb6;
//	short b = 0x600;//�������ֻ��c����ΪaΪchar��bΪshort������ʵ���ϷŲ�����ô������֣�������������ʵ���ϱ��ı���
//	int c = 0x60000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0x60000)
//		printf("c");
//	return 0;
//}

////ʵ�������ʼ��0����ӡ���飬��������
//#include <stdio.h>
//void init(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main(void)
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	printf("\n");
//	reverse(arr, sz);
//	print(arr, sz);
//	printf("\n");
//	init(arr, sz);
//	print(arr, sz);
//	printf("\n");
//}

////��������������(������һ����)
//#include <stdio.h>
//void print(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void str_switch (int arr1[], int arr2[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main(void)
//{
//	int arr1[5] = { 0,1,2,3,4 };
//	int arr2[5] = { 5,6,7,8,9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	str_switch (arr1, arr2, sz);
//	print(arr1, sz);
//	printf("\n");
//	print(arr2, sz);
//	printf("\n");
//	return 0;
//}