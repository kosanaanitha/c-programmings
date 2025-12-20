#include<stdio.h>
int main()
{
	int a=10,b=5,*p,*q;
	int sum,sub;
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("sum=%d",sum);
	sub=*p-*q;
	printf("\nsub=%d",sub);
	return 0;
}
