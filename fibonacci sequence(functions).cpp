#include<stdio.h>
void fib(int);
int main()
{
	int n;
	printf("enter size of the series");
	scanf("%d",&n);
	fib(n);
	return 0;
}
void fib(int n)
{
	int f=0,s=1,t;
	printf("%d %d",f,s);
	t=f+s;
	while(t<=n)
	{
	printf(" %d",t);
		f=s;
		s=t;
		t=f+s;
	}
}
