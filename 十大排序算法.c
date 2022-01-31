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

//冒泡排序
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

//选择排序
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

//插入排序
void insert_sort(int arr[], unsigned int sz)
{
	int i = 0, j = 0;
	for (i = 1;i < sz;i++)
	{
		//存储arr[i]
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

//希尔排序
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

//快速排序及其原理
// 快速排序优化思路：1、选基准数要选得适中，减少递归的深度  2、结合插入排序，元素小于10使用插排
//void quick_sort(int arr[], int sz)
//{
//	//选一个基准数
//	int tmp = arr[0];
//	int left = 0;
//	int right = sz - 1;
//	//用一个变量表示当前该移动左下标还是右下标:1表示移动右下标，0表示移动左下标
//	int move = 1;
//	while (left < right)
//	{
//		if (move == 1)
//		{
//			//如果右下标元素大于等于中心轴，继续移动
//			if (arr[right] >= tmp)
//			{
//				right--;
//				continue;
//			}
//			//右下标元素小于中心轴就填到左下标的位置
//			arr[left] = arr[right];
//			//左下标向右移动
//			left++;
//			//下次循环该移动左下标
//			move = 0;
//			continue;
//		}
//		else if (move == 0)
//		{
//			//如果左下标元素小于等于中心轴，继续移动
//			if (arr[left] <= tmp)
//			{
//				left++;
//				continue;
//			}
//			//左下标元素大于中心轴就填到右下标的坑中
//			arr[right] = arr[left];
//			//右下标左移
//			right--;
//			//下次循环改移动右下标
//			move = 1;
//			continue;
//		}
//	}
//	//循环结束left==right
//	arr[left] = tmp;
//	//开始递归
//	//中间轴左边的
//	if (left > 0)
//	{
//		quick_sort(arr, left);
//	}
//	//中间轴右边的
//	if (sz > right + 1)
//	{
//		quick_sort(arr + left + 1, sz - left - 1);
//	}
//}
//快速排序改造：使用内循环的方式直接移动左右下标，不用一次外循环移动一次
//不用判断本次应该移那个下标，因为本来就是左边放一个数后右边放一个，交替循环，
//细节：因为每一次while，if内都有leftright的变化，所以每次进入while，if时都要判断一次left<right
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

//归并排序:归：合并，即将两个有序的子数列合并得到一个有序的数列
//归并排序递归法
void mergesort(int arr[], int tmp_arr[], int start, int end)
{
	//递归：先递 再归，递：把区间细分，直到每个区间只有一个元素，这样便是有序的区间；归：合并有序区间
	//start>=end:表示该区间元素少于两个
	if (start >= end)
	{
		return;
	}
	//得到中间的位置
	int middle = (start + end) / 2;
	//把区间分开：左右两个两个区间
	int start1 = start, end1 = middle;//左区间
	int start2 = middle + 1, end2 = end;//右区间
	mergesort(arr, tmp_arr, start1, end1);
	mergesort(arr, tmp_arr, start2, end2);
	//归：合并数列
	int i = start;//tmp_arr的计数器
	//把左右两边的数合并（可能会有剩余）
	while (start1 <= end1 && start2 <= end2)
	{
		tmp_arr[i++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
	}
	//把左边剩余的数合并
	while (start1 <= end1)
	{
		tmp_arr[i++] = arr[start1++];
	}
	//把右边的数合并
	while (start2 <= end2)
	{
		tmp_arr[i++] = arr[start2++];
	}
	//把tmp_arr复制给arr
	memcpy(arr + start, tmp_arr + start, (end - start + 1) * sizeof(int));
}
void merge_sort(int arr[], unsigned int sz)
{
	int tmp_arr[N];
	mergesort(arr, tmp_arr, 0, sz - 1);
}
//归并排序循环法（待修改）
//void merge_sort(int arr[], int sz)
//{
//	int* a = arr;
//	//分配一个相同大小的数组
//	int* b = (int*)malloc(sz * sizeof(int));
//
//	int i_interval = 0;//区间分段计数器
//	int i_start = 0;//区间起始位置计数器
//	//排序趟数的循环
//	for (i_interval = 1;i_interval < sz;i_interval *= 2)
//	{
//		//每趟排序选取区间的循环
//		for (i_start = 0;i_start < sz;i_start = i_start + i_interval * 2)
//		{
//			//把每个区间分成两部分：起始、中间、结束
//			int left = i_start;
//			int middle = ((i_start + i_interval) < (sz - 1) ? (i_start + i_interval) : (sz - 1));//考虑分段不均的情况，middle不能超过sz
//			int right = ((i_start + i_interval * 2) < (sz - 1) ? (i_start + i_interval * 2) : (sz - 1));//考虑分段不均的情况，right不能超过sz
//
//			int i = left;//已排序数组计数器
//
//			int start1 = left, end1 = middle;//待排序数组左边数列的起始结束位置
//			int start2 = middle, end2 = right;//待排序数组右边数列的起始结束位置
//
//			//将左右两边数列合并到已排序的数组
//			while (start1 < end1 && start2 < end2)
//			{
//				b[i++] = (a[start1] < a[start2] ? a[start1++] : a[start2++]);
//			}
//			//将左边剩下的合并进有序数列
//			while (start1 < end1)
//			{
//				b[i++] = a[start1++];
//			}
//			//将右边的剩余的数合并进有序的数组
//			while (start2 < end2)
//			{
//				b[i++] = a[start2++];
//			}
//			//交换一下指针a，b准备下一趟排序（a应该指向待排序数组，b指向已排序数组）
//			//因为如果a是指向排序i次的数组，b就是指向排序i+1次的数组
//			//但在下一次排序中，i+1词的数组就是待排序数组了，应该由a指向，所以交换指针
//			int* ptmp = a;
//			a = b;
//			b = ptmp;
//		}
//	}
//	//如果a指向的不是原始数组的指针，把a的内容复制给arr
//	if (a != arr)
//	{
//		memcpy(arr, a, sz * sizeof(int));
//		b = a;
//	}
//	free(b);
//}

//堆排序函数，原理
//利用堆（大顶堆、小顶堆）这种数据结构：完全二叉树
//循环实现heapify(数据下沉)
void heapify(int arr[], int start, int end)
{
	//确定子节点与父结点的数组下标
	int dad = start;
	int son = dad * 2 + 1;
	//如果子节点没有超过范围(确保后面还有节点以下沉)，一直循环下去
	while (son <= end)
	{
		//看右子节点是否存在,寻找大的那个节点
		if ((son + 1) <= end && arr[son] < arr[son + 1])
		{
			son++;
		}
		//如果父节点大于子节点，调整完毕，时大顶堆，跳出函数
		if (arr[dad] > arr[son])
		{
			return;
		}
		//否则（子节点大于父节点），交换子父节点，继续调整
		swap(&arr[son], &arr[dad]);
		dad = son;
		son = dad * 2 + 1;
	}
}
//递归实现heapify
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
	//初始化堆，从最后一个节点开始调整
	//元素下沉，得到大顶堆
	for (i = (sz - 1) / 2;i >= 0;i--)
	{
		heapify(arr, i, sz - 1);
	}
	//把第一个和最后一个元素交换，然后重新调整，直到排序完毕
	for (i = sz - 1;i > 0;i--)
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, 0, i - 1);
	}
}

//计数排序
//原理：将数字直接（或间接（加一个特定的数或减一个特定的数））作为数组下标，再扫描数组、得出每个数出现的次数，存放在数组中
void count_sort(int arr[], unsigned int sz)
{
	//找到最大值
	int max = MAX(arr, sz);
	int arr_tmp[100] = { 0 };
	//使用临时数组计数
	for (int i = 0;i < sz;i++)
	{
		arr_tmp[arr[i]]++;
	}
	//将临时数组的数填充到原本的数组
	for (int i = 0, j = 0;j < max + 1;j++)
	{
		for (int k = 0;k < arr_tmp[j];k++)
		{
			arr[i++] = j;
		}
	}
}

//桶排序，将数据分装在几个桶内，再对桶内的元素排序
//桶排序：时间越快空间就越大，一般每个桶越小，速度越快，消耗空间越大。
void bucket_sort(int arr[], unsigned int sz)
{
	//用二维数组分桶
	int bucket[5][5] = { 0 };
	//每个桶里有多少个元素
	int bucket_size[5] = { 0 };
	int i = 0;
	//分装数据
	for (i = 0;i < sz;i++)
	{
		bucket[arr[i] / 5][bucket_size[arr[i] / 5]++] = arr[i];
	}
	//对每个进行排序
	for (i = 0;i < 5;i++) 
	{
		//插入排序
		insert_sort(bucket[i], bucket_size[i]);
	}
	//将每个桶中的数据装进数组中
	int k = 0;
	for (i = 0;i < 5;i++)
	{
		for (int j = 0;j < bucket_size[i];j++)
		{
			arr[k++] = bucket[i][j];
		}
	}
}

//基数排序（桶排序的拓展）
//原理：将整数分成不同的位数，按每一位进行排序
//画图以助理解 
void radixsort(int arr[], unsigned int sz, unsigned int exp)
{
	int i = 0;
	//result用于存放从桶中收集数据的临时数组
	int result[10] = { 0 };
	//十个桶：只用一维数组（精妙之处）
	int buckets[10] = { 0 };
	//遍历arr，将各个数据出现的次数存放进桶中（根据指数位）
	for (i = 0;i < sz;i++)
	{
		buckets[(arr[i] / exp) % 10]++;
	}
	//调整buckets各元素的值，调整之后的值就是arr中元素在result中的位置，即每个值都代表了前面一共有多少个元素（自己在第几位）
	for (i = 1;i < sz;i++)
	{
		buckets[i] = buckets[i] + buckets[i - 1];
	}
	//填充：将arr（待排序数列）中的数填充到result（已排序数列）中
	for (i = sz - 1;i >= 0;i--)
	{
		int i_exp = (arr[i] / exp) % 10;//表示排序指数位的那一位数
		result[buckets[i_exp] - 1] = arr[i];
		buckets[i_exp]--;
	}
	//将已排序的数组result复制给arr,准备下一次排序
	memcpy(arr, result, sz * sizeof(unsigned int));
	/*for (i = 0;i < sz;i++)
	{
		arr[i] = result[i];
	}*/
}
void radix_sort(int arr[], unsigned int sz)
{
	//获取最大的数
	int max = MAX(arr, sz);
	//规定一个排序指数，1表示个位，10是十位，100是百位
	unsigned int exp = 0;
	//从个位开始，对数组内每个数按指数位进行排序
	for (exp = 1;max / exp > 0;exp *= 10)
	{
		//按每一位进行排序
		radixsort(arr, sz, exp);
		//打印出每次排序的结果(方便调试)
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
	//冒泡排序原理实现
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

	//选择排序原理实现
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

	//插入排序原理实现
	//int i = 0, j = 0;
	//for (i = 1;i < N;i++)
	//{
	//	int tmp = arr[i];//先存储arr[i]的值
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

	//希尔排序原理实现
	//希尔排序（对直接插入排序的优化）：分组间隔n/2-1个元素
	//（希尔排序的最后一次排序就是一次插入排序，但前面的步骤是最精妙的，
	//希尔排序前面的步骤使大的数在一起，小的数在一起，使得整个数组大致有序，减少插入排序是循环的次数）
	//int interval = 0, i = 0, j = 0;
	//使用了四层循环，外两层循环用于分组，内两层则是普通插入排序
	/*for (interval = N / 2;interval > 0;interval = interval / 2)
	{
		for (i = 0;i < N;i++)
		{
			for (i = 0 + interval;i < N;i += interval)  //因为每组interval个人就代表有interval个组，所以也有用组数空循环，i++的写法
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
	//用组数控制循环
	/*int beg = 0;//beg控制起始位置
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
	//优化，方法和对比：1.原本为优化的希尔排序是严格按照他的原理一步一步走的，先分组，再对每一组插入排序
	//2.但其实用三层循环即可，应为没有必要一组排完了再排下一组，可以先排第一组的两个再拍第二组的两个，循环完后每个组自然排完了
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
	//冒泡排序函数
	//bubble_sort(arr, sz);
	//选择排序函数
	//select_sort(arr, sz);
	//插入排序函数
	//insert_sort(arr, sz);
	//希尔排序函数
	//shell_sort(arr, sz);
	//快速排序原理及函数
	//quick_sort(arr, sz);
	//归并排序函数、原理
	//merge_sort(arr, sz);
	//堆排序原理，函数
	//heap_sort(arr, sz);
	//计数排序原理，函数
	//count_sort(arr, sz);
	//桶排序原理，函数
	//bucket_sort(arr, sz);
	//基数排序
	//radix_sort(arr, sz);

	print(arr, sz);
	return 0;
}