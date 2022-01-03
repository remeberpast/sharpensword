//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	FILE* pf = fopen("practice.txt", "w");
//	//如果文件打开失败，函数会返回一个空指针。
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputc('H', pf);
//	fputc('i', pf);
//	//读文件
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}