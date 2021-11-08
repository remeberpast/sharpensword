//#define _CRT_SECURE_NO_WARNINGS 1
//#include<math.h>
//#include <stdio.h>
//int MAX(a, b, c)
//{
//	if (a >= b && a >= c)
//		return a;
//	else if (b >= a && b >= c)
//		return b;
//	else
//		return c;
//}
//
////int square(b)
////{
////	float a;
////	b = a * a;
////	return a;
////}
//
////int main()
////{
////	int a;
////	scanf("%d", &a);
////	printf("%f", a);
////
////}
////int main()
////{
////	int a = 4;
////	int b = sqrt(a);
////	printf("%d\n", b);
////	return 0;
////}
//
////#include <stdio.h>
////int main(void)
////{
////	float x, y, z;
////	scanf("%d%f%f", &x, &y, &z);
////	printf("%f", MAX(x, y, z));
////}
//
//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		if (((a + b + c) - MAX(a, b, c)) > MAX(a, b, c))
//		{
//			float p = (a + b + c) / 2.0;
//			/*printf("%f", p);*/
//			float q = p * (p - a) * (p - b) * (p - c)*1.0;
//			float s = sqrt(q);
//			printf("%.2f", s);
//		}
//		else
//		{
//			printf("不能构成三角形");
//		}
//	}
//
//	return 0;
//}