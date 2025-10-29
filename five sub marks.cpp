#include<stdio.h>
int main()
{
	int a,b,c,d,e,total;
	float avg;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	printf("total=%d",total);
	printf("\n");
	avg=total/5;
	printf("average=%f",avg);
	return 0;
}
