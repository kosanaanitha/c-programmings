#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("enter any number");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial =%d",f);
	return 0;
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return (n*fact(n-1));
}
