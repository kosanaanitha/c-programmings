#include<stdio.h>
int main()
{
	int x=6,y=9;
	float a,b;
	a=x/y;
	printf("implict a value=%f",a);
	b=(float)x/y;
	printf("\nexplict b value=%f",b);
	return 0;
	
}
