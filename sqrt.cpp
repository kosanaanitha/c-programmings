#include<stdio.h>
#include<math.h>
int main()
{
	int n,s;
	hi:
	printf("enter a number");
	scanf("%d",&n);
	if(n<0)
	goto hi;
	s=sqrt(n);
	printf("square root is=%d",s);
	return 0;
}
