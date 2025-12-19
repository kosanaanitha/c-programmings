#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*p;
	printf("enter n value");
	scanf("%d",&n);
	p=(int*)malloc(4);
	p=(int*)realloc(p,10);
	printf("enter integer numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
	}
	return 0;
}
