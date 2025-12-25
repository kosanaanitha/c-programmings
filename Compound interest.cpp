#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,ci;
	printf("Enter p,t,r values");
	scanf("%f%f%f",&p,&t,&r);
	ci=p*(pow(1+r/100,t)-1);
	printf("%f",ci);
	return 0;
}
