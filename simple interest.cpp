#include<stdio.h>
int main()
{
	int p,t,r,si;
	printf("enter p,t,r values");
	scanf("%d%d%d",&p,&t,&r);
	si=p*t*r/100;
	printf("simple interest=%d",si);
	return 0;
}
