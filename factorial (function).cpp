#include<stdio.h>
void fact(int);
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	fact(n);
	return 0;
}
void fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial=%d",f);
}
