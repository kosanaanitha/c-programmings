#include<stdio.h>
void sub(int,int);
int main()
{
	int a,b;
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	sub(a,b);
	return 0;
}
void sub(int a,int b)
{
	int c;
	c=a-b;
	printf("sub=%d",c);
}
