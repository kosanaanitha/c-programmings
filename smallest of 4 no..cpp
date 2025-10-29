#include<stdio.h>
int main()
{
	int a,d,rev=0;
	printf("enter a value");
	scanf("%d",&a);
	while(a>0)
	{
	d=a%10;
	rev=rev*10+d;
	a=a/10;	
	}
	printf("reverse number =%d",rev);
    return 0;
}
