#include<stdio.h>
int main()
{
	int a[20],n,i;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array values are ");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%d\t%u",i,a[i],&a[i]);
	}
	return 0;
}
