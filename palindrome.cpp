#include<stdio.h>
int main()
{
	int a,d,rev=0,temp;
	printf("enter a value");
	scanf("%d",&a);
	temp=a;
	while(a>0)
	{
	d=a%10;
	rev=rev*10+d;
	a=a/10;	
	}
	if(rev==temp)
	printf("it is a palindrome");
	else
	printf("it is not a palindrome");
    return 0;
}
