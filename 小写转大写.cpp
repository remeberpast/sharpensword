#include <stdio.h>
int main(void)
{
	int i=0;
	int n=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		char ch;
		scanf("%c",&ch);
		getchar();
		if(ch<='z'&&ch>='a')
		{
			printf("%c\n",ch-32);
		}
		else
		{
			printf("%c\n",ch);
		}
	}
	return 0;
 } 
