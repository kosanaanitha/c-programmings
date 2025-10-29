#include<stdio.h>
int main()
{
	int a,d,sum=0,c,temp;
	printf("enter a value");
	scanf("%d",&a);
	temp=a;
	while(a>0)
	{
	d=a%10;
	 c=d*d*d;
	 sum=sum+c;
	a=a/10;	
	}
	if(sum==temp)
	printf("it is a armstrong");
	else
	printf("it is not a armstrong");
    return 0;
}
