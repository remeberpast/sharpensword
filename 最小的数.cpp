#include <stdio.h>
int main(void)
{
	int arr[10]={0};
	int fir=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<10;i++)
	{
		if(arr[i]!=0)
		{
			fir=i;
			break;
		}
	}
	printf("%d",fir);
	for(int j=0;j<10;j++)
	{
		if(j==fir)
		{
			for(int k=0;k<arr[j]-1;k++)
			{
				printf("%d",j);
			}
		}
		else
		{
			for(int k=0;k<arr[j];k++)
			{
				printf("%d",j);
			}	
		}
	}
	return 0;
}
