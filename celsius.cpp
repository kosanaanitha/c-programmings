#include<stdio.h>
int main()
{
	float c,f;
	printf( "enter  fahrenheit value ");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("celsius value=%f",c);
	return 0;
}
