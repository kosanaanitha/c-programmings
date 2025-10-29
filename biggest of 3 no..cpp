#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is big",a);
		else
		printf("%d is big",c);
	}
	else
	{
		if(b>c)
		printf("%d is big",b);
		else
		printf("%d is big",c);
	}
	return 0;
}
