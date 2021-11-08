#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void s_string(char* s_list)
{
	int s_num = strlen(s_list);
	for (int i = s_num - 1;i >= 0;i--)
	{
		printf("%c", s_list[i]);
	}
	printf("\n");
}
int main(void)
{
	int j, n;
	scanf("%d", &n);
	for (j = 0;j < n;j++)
	{
		char s_list[10];
		printf("inpute:\n");
		scanf("%s", s_list);
		s_string(s_list);
	}
	return 0;
}