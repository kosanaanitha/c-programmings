#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],n,i,x,flag=0;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			printf("element is found");
			flag=1;
		}
		if(flag==0)
		printf("element is not found");
	}
	return 0;
}
	
