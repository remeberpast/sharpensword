#define _CRT_SECURE_NO_WARNINGS 1
#define N 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[N] = { 9,8,7,6,5,4,3,2,1,0 };

void print(int arr[], int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int MAX(int arr[], int sz)
{
	int max_tmp = arr[0];
	for (int i = 1;i < sz;i++)
	{
		if (arr[i] > max_tmp)
		{
			max_tmp = arr[i];
		}
	}
	return max_tmp;
}

//ð������
void bubble_sort(int arr[], unsigned int sz)
{
	for (int i = 0;i < sz - 1;i++)
	{
		for (int j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

//ѡ������
void select_sort(int arr[], unsigned int sz)
{
	int i = 0, j = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int min = i;
		for (j = i + 1;j < sz;j++)
		{
			if (arr[j] < arr[i])
			{
				min = j;
			}
		}
		if (i != min)
		{
			int tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
}

//��������
void insert_sort(int arr[], unsigned int sz)
{
	int i = 0, j = 0;
	for (i = 1;i < sz;i++)
	{
		//�洢arr[i]
		int tmp = arr[i];
		for (j = i - 1;j >= 0;j--)
		{
			if (arr[j] < tmp)
			{
				break;
			}
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}
}

//ϣ������
void shell_sort(int arr[] , unsigned int sz)
{
	int interval = 0, i = 0, j = 0;
	for (interval = sz / 2; interval > 0;interval /= 2)
	{
		for (i = interval;i < sz;i++)
		{
			int tmp = arr[i];
			for (j = i - interval;j >= 0;j -= interval)
			{
				if (arr[j] < tmp)
				{
					break;
				}
				arr[j + interval] = arr[j];
			}
			arr[j + interval] = tmp;
		}
	}
}

//����������ԭ��
// ���������Ż�˼·��1��ѡ��׼��Ҫѡ�����У����ٵݹ�����  2����ϲ�������Ԫ��С��10ʹ�ò���
//void quick_sort(int arr[], int sz)
//{
//	//ѡһ����׼��
//	int tmp = arr[0];
//	int left = 0;
//	int right = sz - 1;
//	//��һ��������ʾ��ǰ���ƶ����±껹�����±�:1��ʾ�ƶ����±꣬0��ʾ�ƶ����±�
//	int move = 1;
//	while (left < right)
//	{
//		if (move == 1)
//		{
//			//������±�Ԫ�ش��ڵ��������ᣬ�����ƶ�
//			if (arr[right] >= tmp)
//			{
//				right--;
//				continue;
//			}
//			//���±�Ԫ��С�������������±��λ��
//			arr[left] = arr[right];
//			//���±������ƶ�
//			left++;
//			//�´�ѭ�����ƶ����±�
//			move = 0;
//			continue;
//		}
//		else if (move == 0)
//		{
//			//������±�Ԫ��С�ڵ��������ᣬ�����ƶ�
//			if (arr[left] <= tmp)
//			{
//				left++;
//				continue;
//			}
//			//���±�Ԫ�ش��������������±�Ŀ���
//			arr[right] = arr[left];
//			//���±�����
//			right--;
//			//�´�ѭ�����ƶ����±�
//			move = 1;
//			continue;
//		}
//	}
//	//ѭ������left==right
//	arr[left] = tmp;
//	//��ʼ�ݹ�
//	//�м�����ߵ�
//	if (left > 0)
//	{
//		quick_sort(arr, left);
//	}
//	//�м����ұߵ�
//	if (sz > right + 1)
//	{
//		quick_sort(arr + left + 1, sz - left - 1);
//	}
//}
//����������죺ʹ����ѭ���ķ�ʽֱ���ƶ������±꣬����һ����ѭ���ƶ�һ��
//�����жϱ���Ӧ�����Ǹ��±꣬��Ϊ����������߷�һ�������ұ߷�һ��������ѭ����
//ϸ�ڣ���Ϊÿһ��while��if�ڶ���leftright�ı仯������ÿ�ν���while��ifʱ��Ҫ�ж�һ��left<right
void quick_sort(int arr[], unsigned int sz)
{
	int tmp = arr[0];
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (arr[right] >= tmp && left < right)
		{
			right--;
		}
		if (left < right)
		{
			arr[left] = arr[right];
			left++;
		}
		while (arr[left] <= tmp && left < right)
		{
			left++;
		}
		if (left < right)
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = tmp;
	if (left > 0)
	{
		quick_sort(arr, left);
	}
	if (sz > right + 1)
	{
		quick_sort(arr + left + 1, sz - left - 1);
	}
}

//�鲢����:�飺�ϲ���������������������кϲ��õ�һ�����������
//�鲢����ݹ鷨
void mergesort(int arr[], int tmp_arr[], int start, int end)
{
	//�ݹ飺�ȵ� �ٹ飬�ݣ�������ϸ�֣�ֱ��ÿ������ֻ��һ��Ԫ�أ�����������������䣻�飺�ϲ���������
	//start>=end:��ʾ������Ԫ����������
	if (start >= end)
	{
		return;
	}
	//�õ��м��λ��
	int middle = (start + end) / 2;
	//������ֿ�������������������
	int start1 = start, end1 = middle;//������
	int start2 = middle + 1, end2 = end;//������
	mergesort(arr, tmp_arr, start1, end1);
	mergesort(arr, tmp_arr, start2, end2);
	//�飺�ϲ�����
	int i = start;//tmp_arr�ļ�����
	//���������ߵ����ϲ������ܻ���ʣ�ࣩ
	while (start1 <= end1 && start2 <= end2)
	{
		tmp_arr[i++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
	}
	//�����ʣ������ϲ�
	while (start1 <= end1)
	{
		tmp_arr[i++] = arr[start1++];
	}
	//���ұߵ����ϲ�
	while (start2 <= end2)
	{
		tmp_arr[i++] = arr[start2++];
	}
	//��tmp_arr���Ƹ�arr
	memcpy(arr + start, tmp_arr + start, (end - start + 1) * sizeof(int));
}
void merge_sort(int arr[], unsigned int sz)
{
	int tmp_arr[N];
	mergesort(arr, tmp_arr, 0, sz - 1);
}
//�鲢����ѭ���������޸ģ�
//void merge_sort(int arr[], int sz)
//{
//	int* a = arr;
//	//����һ����ͬ��С������
//	int* b = (int*)malloc(sz * sizeof(int));
//
//	int i_interval = 0;//����ֶμ�����
//	int i_start = 0;//������ʼλ�ü�����
//	//����������ѭ��
//	for (i_interval = 1;i_interval < sz;i_interval *= 2)
//	{
//		//ÿ������ѡȡ�����ѭ��
//		for (i_start = 0;i_start < sz;i_start = i_start + i_interval * 2)
//		{
//			//��ÿ������ֳ������֣���ʼ���м䡢����
//			int left = i_start;
//			int middle = ((i_start + i_interval) < (sz - 1) ? (i_start + i_interval) : (sz - 1));//���Ƿֶβ����������middle���ܳ���sz
//			int right = ((i_start + i_interval * 2) < (sz - 1) ? (i_start + i_interval * 2) : (sz - 1));//���Ƿֶβ����������right���ܳ���sz
//
//			int i = left;//���������������
//
//			int start1 = left, end1 = middle;//����������������е���ʼ����λ��
//			int start2 = middle, end2 = right;//�����������ұ����е���ʼ����λ��
//
//			//�������������кϲ��������������
//			while (start1 < end1 && start2 < end2)
//			{
//				b[i++] = (a[start1] < a[start2] ? a[start1++] : a[start2++]);
//			}
//			//�����ʣ�µĺϲ�����������
//			while (start1 < end1)
//			{
//				b[i++] = a[start1++];
//			}
//			//���ұߵ�ʣ������ϲ������������
//			while (start2 < end2)
//			{
//				b[i++] = a[start2++];
//			}
//			//����һ��ָ��a��b׼����һ������aӦ��ָ����������飬bָ�����������飩
//			//��Ϊ���a��ָ������i�ε����飬b����ָ������i+1�ε�����
//			//������һ�������У�i+1�ʵ�������Ǵ����������ˣ�Ӧ����aָ�����Խ���ָ��
//			int* ptmp = a;
//			a = b;
//			b = ptmp;
//		}
//	}
//	//���aָ��Ĳ���ԭʼ�����ָ�룬��a�����ݸ��Ƹ�arr
//	if (a != arr)
//	{
//		memcpy(arr, a, sz * sizeof(int));
//		b = a;
//	}
//	free(b);
//}

//����������ԭ��
//���öѣ��󶥶ѡ�С���ѣ��������ݽṹ����ȫ������
//ѭ��ʵ��heapify(�����³�)
void heapify(int arr[], int start, int end)
{
	//ȷ���ӽڵ��븸���������±�
	int dad = start;
	int son = dad * 2 + 1;
	//����ӽڵ�û�г�����Χ(ȷ�����滹�нڵ����³�)��һֱѭ����ȥ
	while (son <= end)
	{
		//�����ӽڵ��Ƿ����,Ѱ�Ҵ���Ǹ��ڵ�
		if ((son + 1) <= end && arr[son] < arr[son + 1])
		{
			son++;
		}
		//������ڵ�����ӽڵ㣬������ϣ�ʱ�󶥶ѣ���������
		if (arr[dad] > arr[son])
		{
			return;
		}
		//�����ӽڵ���ڸ��ڵ㣩�������Ӹ��ڵ㣬��������
		swap(&arr[son], &arr[dad]);
		dad = son;
		son = dad * 2 + 1;
	}
}
//�ݹ�ʵ��heapify
//void heapify(int arr[], int start, int end)
//{
//	int dad = start;
//	int son = dad * 2 + 1;
//	if (son > end)
//	{
//		return;
//	}
//	if ((son + 1) < end && arr[son] < arr[son + 1])
//	{
//		son++;
//	}
//	if (arr[dad] > arr[son])
//	{
//		return;
//	}
//	swap(&arr[son], &arr[dad]);
//	heapify(arr, son, end);
//}
void heap_sort(int arr[], unsigned int sz)
{
	int i = 0;
	//��ʼ���ѣ������һ���ڵ㿪ʼ����
	//Ԫ���³����õ��󶥶�
	for (i = (sz - 1) / 2;i >= 0;i--)
	{
		heapify(arr, i, sz - 1);
	}
	//�ѵ�һ�������һ��Ԫ�ؽ�����Ȼ�����µ�����ֱ���������
	for (i = sz - 1;i > 0;i--)
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, 0, i - 1);
	}
}

//��������
//ԭ��������ֱ�ӣ����ӣ���һ���ض��������һ���ض�����������Ϊ�����±꣬��ɨ�����顢�ó�ÿ�������ֵĴ����������������
void count_sort(int arr[], unsigned int sz)
{
	//�ҵ����ֵ
	int max = MAX(arr, sz);
	int arr_tmp[100] = { 0 };
	//ʹ����ʱ�������
	for (int i = 0;i < sz;i++)
	{
		arr_tmp[arr[i]]++;
	}
	//����ʱ���������䵽ԭ��������
	for (int i = 0, j = 0;j < max + 1;j++)
	{
		for (int k = 0;k < arr_tmp[j];k++)
		{
			arr[i++] = j;
		}
	}
}

//Ͱ���򣬽����ݷ�װ�ڼ���Ͱ�ڣ��ٶ�Ͱ�ڵ�Ԫ������
//Ͱ����ʱ��Խ��ռ��Խ��һ��ÿ��ͰԽС���ٶ�Խ�죬���Ŀռ�Խ��
void bucket_sort(int arr[], unsigned int sz)
{
	//�ö�ά�����Ͱ
	int bucket[5][5] = { 0 };
	//ÿ��Ͱ���ж��ٸ�Ԫ��
	int bucket_size[5] = { 0 };
	int i = 0;
	//��װ����
	for (i = 0;i < sz;i++)
	{
		bucket[arr[i] / 5][bucket_size[arr[i] / 5]++] = arr[i];
	}
	//��ÿ����������
	for (i = 0;i < 5;i++) 
	{
		//��������
		insert_sort(bucket[i], bucket_size[i]);
	}
	//��ÿ��Ͱ�е�����װ��������
	int k = 0;
	for (i = 0;i < 5;i++)
	{
		for (int j = 0;j < bucket_size[i];j++)
		{
			arr[k++] = bucket[i][j];
		}
	}
}

//��������Ͱ�������չ��
//ԭ���������ֳɲ�ͬ��λ������ÿһλ��������
//��ͼ������� 
void radixsort(int arr[], unsigned int sz, unsigned int exp)
{
	int i = 0;
	//result���ڴ�Ŵ�Ͱ���ռ����ݵ���ʱ����
	int result[10] = { 0 };
	//ʮ��Ͱ��ֻ��һά���飨����֮����
	int buckets[10] = { 0 };
	//����arr�����������ݳ��ֵĴ�����Ž�Ͱ�У�����ָ��λ��
	for (i = 0;i < sz;i++)
	{
		buckets[(arr[i] / exp) % 10]++;
	}
	//����buckets��Ԫ�ص�ֵ������֮���ֵ����arr��Ԫ����result�е�λ�ã���ÿ��ֵ��������ǰ��һ���ж��ٸ�Ԫ�أ��Լ��ڵڼ�λ��
	for (i = 1;i < sz;i++)
	{
		buckets[i] = buckets[i] + buckets[i - 1];
	}
	//��䣺��arr�����������У��е�����䵽result�����������У���
	for (i = sz - 1;i >= 0;i--)
	{
		int i_exp = (arr[i] / exp) % 10;//��ʾ����ָ��λ����һλ��
		result[buckets[i_exp] - 1] = arr[i];
		buckets[i_exp]--;
	}
	//�������������result���Ƹ�arr,׼����һ������
	memcpy(arr, result, sz * sizeof(unsigned int));
	/*for (i = 0;i < sz;i++)
	{
		arr[i] = result[i];
	}*/
}
void radix_sort(int arr[], unsigned int sz)
{
	//��ȡ������
	int max = MAX(arr, sz);
	//�涨һ������ָ����1��ʾ��λ��10��ʮλ��100�ǰ�λ
	unsigned int exp = 0;
	//�Ӹ�λ��ʼ����������ÿ������ָ��λ��������
	for (exp = 1;max / exp > 0;exp *= 10)
	{
		//��ÿһλ��������
		radixsort(arr, sz, exp);
		//��ӡ��ÿ������Ľ��(�������)
		/*print("exp=%-5d ", exp);
		for (int a = 0;a < sz;a++)
		{
			printf("%d ", arr[a]);
		}
		printf("\n");*/
	}
}

int main(void)
{
	//ð������ԭ��ʵ��
	/*for (int i = 0;i < N - 1;i++)
	{
		for (int j = 0;j < N - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}*/

	//ѡ������ԭ��ʵ��
	/*int i = 0, j = 0;
	for (i = 0;i < N - 1;i++)
	{
		int min = i;
		for (j = i + 1;j < N;j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (i != j)
		{
			int tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}*/

	//��������ԭ��ʵ��
	//int i = 0, j = 0;
	//for (i = 1;i < N;i++)
	//{
	//	int tmp = arr[i];//�ȴ洢arr[i]��ֵ
	//	for (j = i - 1;j >= 0;j--)
	//	{
	//		if (tmp > arr[j])
	//		{
	//			break;
	//		}
	//		arr[j + 1] = arr[j];
	//	}
	//	arr[j + 1] = tmp;
	//}

	//ϣ������ԭ��ʵ��
	//ϣ�����򣨶�ֱ�Ӳ���������Ż�����������n/2-1��Ԫ��
	//��ϣ����������һ���������һ�β������򣬵�ǰ��Ĳ��������ģ�
	//ϣ������ǰ��Ĳ���ʹ�������һ��С������һ��ʹ����������������򣬼��ٲ���������ѭ���Ĵ�����
	//int interval = 0, i = 0, j = 0;
	//ʹ�����Ĳ�ѭ����������ѭ�����ڷ��飬������������ͨ��������
	/*for (interval = N / 2;interval > 0;interval = interval / 2)
	{
		for (i = 0;i < N;i++)
		{
			for (i = 0 + interval;i < N;i += interval)  //��Ϊÿ��interval���˾ʹ�����interval���飬����Ҳ����������ѭ����i++��д��
			{
				int tmp = arr[i];
				for (j = i - interval;j >= 0;j -= interval)
				{
					if (arr[j] < tmp)
					{
						break;
					}
					arr[j + interval] = arr[j];
				}
				arr[j + interval] = tmp;
			}
		}
	}*/
	//����������ѭ��
	/*int beg = 0;//beg������ʼλ��
	for (interval = N / 2;interval > 0;interval /= 2)
	{
		for (beg = 0;beg < interval;beg++)
		{
			for (i = beg + interval;i < N;i += interval)
			{
				int tmp = arr[i];
				for (j = i - interval;j >= 0;j -= interval)
				{
					if (arr[j] < tmp)
					{
						break;
					}
					arr[j + interval] = arr[j];
				}
				arr[j + interval] = tmp;
			}
		}
	}*/
	//�Ż��������ͶԱȣ�1.ԭ��Ϊ�Ż���ϣ���������ϸ�������ԭ��һ��һ���ߵģ��ȷ��飬�ٶ�ÿһ���������
	//2.����ʵ������ѭ�����ɣ�ӦΪû�б�Ҫһ��������������һ�飬�������ŵ�һ����������ĵڶ����������ѭ�����ÿ������Ȼ������
	/*for (interval = N / 2;interval > 0;interval = interval / 2)
	{
		for (i = interval;i < N;i++)
		{
			int tmp = arr[i];
			for (j = i - interval;j >= 0;j -= interval)
			{
				if (arr[j] < tmp)
				{
					break;
				}
				arr[j + interval] = arr[j];
			}
			arr[j + interval] = tmp;
		}
	}*/

	unsigned int sz = sizeof(arr) / sizeof(arr[0]);
	//ð��������
	//bubble_sort(arr, sz);
	//ѡ��������
	//select_sort(arr, sz);
	//����������
	//insert_sort(arr, sz);
	//ϣ��������
	//shell_sort(arr, sz);
	//��������ԭ������
	//quick_sort(arr, sz);
	//�鲢��������ԭ��
	//merge_sort(arr, sz);
	//������ԭ������
	//heap_sort(arr, sz);
	//��������ԭ������
	//count_sort(arr, sz);
	//Ͱ����ԭ������
	//bucket_sort(arr, sz);
	//��������
	//radix_sort(arr, sz);

	print(arr, sz);
	return 0;
}