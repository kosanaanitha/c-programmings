#include<stdio.h>
int main()
{
	int a[50],n,i,j,temp;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n sorted array is ");
	for(i=0;i<n;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
	
}
