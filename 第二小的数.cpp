#include <stdio.h>
int main(void)
{
	int i=0;
	int j=0;
	int m=0;
	int n=0;
	int arr[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[j]);
		}
		for(int a=0;a<m-1;a++)
		{
			for(int b=0;b<m-1-a;b++)
			{
				if(arr[b]>arr[b+1])
				{
					int tmp=arr[b];
					arr[b]=arr[b+1];
					arr[b+1]=tmp;
				}
			}
		}
		if(m==1)
		{
			printf("ERROR\n");
		}
		
		else if(m>1) 
		{
			int count =0;
			for(int k=0;k<m;k++)
			{
				if(arr[k]<arr[k+1])
				{
					printf("%d\n",arr[k+1]);
					count++;
					break;
				}
			}
			if(count==0)
			{
				printf("ERROR\n");
			}
		}
	}
	return 0;
}
