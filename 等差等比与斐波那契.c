//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	int arr[5] = { 0 };
//	for (;;)
//	{
//		int i = 0;
//		for (i = 0;i < 5;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		if ((arr[0] == 0) && (arr[1] == 0) && (arr[2] == 0) && (arr[3] == 0) && (arr[5] == 0))
//		{
//			printf("End Of Input");
//			break;	
//		}
//		else
//		{
//			for (int a = 0;a < 5;a++)
//			{
//				if (((arr[a + 1] - arr[a]) == (arr[a + 2] - arr[a + 1]))&&((arr[a + 1] - arr[a]) != 0))
//				{
//					printf("Arithmetic Progression\n");
//					break;
//				}
//				else if ((arr[a] + arr[a + 1]) == arr[a + 2])
//				{
//					printf("Fibonacci Sequence\n");
//					break;
//				}
//				else if (((arr[a + 1] / arr[a]) == (arr[a + 2] / arr[a + 1]))&&(arr[a + 1] / arr[a]) != 1)
//				{
//					printf("Geometric Progression\n");
//					break;
//				}
//				else
//				{
//					printf("Input Errpr");
//					break;
//				}
//			}
//		}
//	}
//
//	return 0;
//}