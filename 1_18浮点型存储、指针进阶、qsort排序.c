//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int n = 9;
//	float* Pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *Pfloat);
//
//	*Pfloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *Pfloat);
//
//	*(int*)Pfloat = 9.0;
//	printf("%d\n", *Pfloat);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	//str1��str2��һ���ģ�������ַ����ǳ����ַ��������ܸĵģ���str3��str4��������ͬ�����顣
//	char* str1 = "hello";
//	char* str2 = "hello";
//	char str3[] = { "hello" };
//	char str4[] = { "hello" };
//	//ָ�����鱾������ָ�룬ָ�������ָ��
//	return 0;
//}

//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//#include <stdio.h>
//void test(int** ppa)
//{
//	**ppa = 20;
//}
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);
//	printf("%d", **ppa);
//	return 0;
//}


//����ָ��
//��ź�����ַ��ָ��
//&����������>�������ĵ�ַ������������Ҳ�Ǻ����ĵ�ַ
//&�������뺯������һģһ���ģ��������������ͬ
//������Ϊ����������ͺͺ���ָ����ͬ������pf��ADD����ȫ��ͬ�ģ���*pf����*û�ж������
//#include <stdio.h>
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	//����ָ��
//	//int�Ǻ�������ֵ����
//	int (*pf)(int ,int) = &ADD;
//	return 0;
//}
// 


//������Ȥ�Ĵ���
//int main()
//{
//	//z������0������㣺0ǰ����ǿ������ת����ת�����˺���ָ�����ͣ�������void���ͣ��޲Σ����������Ǻ�������
//	//�����ǵ���0��ַ���ú������ú����޲Σ���������void
//	//1.void��*����������������
//	//2.��void��*��������0����0ǿ������ת��Ϊ��������
//	//3.����void��*��������0����������������
//	(*(void(*)())0)();
//	void(*signal(int, void(*)(int)))(int);
//	//1.signal�Ⱥͣ�����ϣ�˵��signal��һ������
//	//2.signal������һ����������Ϊ���ͣ��ڶ�������Ϊһ������ָ�룬�ڶ�������ָ�룬�ú���ָ��ָ��һ������Ϊint����������Ϊvoid�ú���
//	//3.signal�����÷�������Ҳ�Ǻ���ָ�룬�ú���ָ��ָ����һ������Ϊint������ֵ����Ϊvoid�ú���
//	//����signal��һ�κ�������
//}

////����ָ������
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int SUB(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = ADD;
//	int (*pf2)(int, int) = SUB;
//	//����ָ������
//	int (*pf[2])(int, int) = { pf1,pf2 };
//	return 0;
//}

////����
//int main()
//{
//	int (*p1)(int, int);//����ָ��
//	int (*p2[5])(int, int);//����ָ������
//	int (*(*p3[5]))(int, int) = &p2;//ָ����ָ�������ָ��
//	return 0;
//}

//�ص���������a�����õ�ַ����b��������b������ͨ��ָ��ȥ����a�������ֻ��ƾͽ����ص�����
//c�⺯��������������qsort������ʹ��(�κ����͵����ݶ�������)
//qsort�������ĸ���������һ���������������Ԫ�أ��׸����󣩵�ַ���ڶ����Ǵ�����Ԫ�ظ������������Ǵ�����Ԫ����ռ�ڴ��С��
//���ĸ���һ������ָ�루�����ǱȽϴ���������������Ԫ�صĺ�����,�˺���������������e1��e2����������e1-e2,��������e2-e1
//qsort����������
//#include <stdio.h>
//#include <stdlib.h>
//int cmp(const void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int* p, int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main(void)
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	qsort(arr, 10, sizeof(arr[0]), cmp);
//	print(arr, 10);
//	return 0;
//}
//qsort�Žṹ������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
////������Ƚ�
//int cmp1(void* e1, void* e2)
//{
//	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
//	//���������ת���������ú���һ���ṹ�壬����ֱ�ӼӼ�����Ϊ�������������������ҵ�����
//	//Ҳ����д�ɣ�return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
////�����ƱȽϣ��������ַ������Ƚ�Ҫ��strcmp
//int cmp2(void* e1, void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void print(struct stu* p, int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%s %d\n", (p + i)->name, (p + i)->age);
//	}
//}
//int main(viod)
//{
//	struct stu arr[3] = { {"����",36},{"����",24},{"����",30} };
//	//����������
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp1);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	//����������
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp2);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}