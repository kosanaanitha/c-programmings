#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*p;
	printf("enter n value");
	scanf("%d",&n);
	p=(int*)calloc(n,2);
	printf("enter integer numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
	}
	return 0;
}
