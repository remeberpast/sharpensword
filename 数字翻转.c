//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//
//	}
//	return 0;
//}
//Ö£ºÆµÄ´ôÂí
//#include<stdio.h>
//#include<math.h>
//int count_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n /= 10;
//		count++;
//	}
//	return count;
//}
//int reverse(int input, int bit)
//{
//	int arr[10] = { 0 };
//	int tmp = input;
//	int sum = 0;
//	for (int i = 0; i < bit; i++)
//	{
//		arr[i] = tmp % 10;
//		tmp /= 10;
//	}
//	for (int j = 0; j < bit; j++)
//	{
//		sum += (int)arr[j] * pow(10, bit - j - 1);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int a, b, c;
//		scanf("%d %d", &a, &b);
//		c = a + b;
//		int ra = reverse(a, count_bit(a));
//		int rb = reverse(b, count_bit(b));
//		int rc = reverse(c, count_bit(c));
//		if (rc == ra + rb)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}