//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	FILE* pf = fopen("practice.txt", "w");
//	//����ļ���ʧ�ܣ������᷵��һ����ָ�롣
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fputc('H', pf);
//	fputc('i', pf);
//	//���ļ�
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}