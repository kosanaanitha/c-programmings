#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *ptr,i;
	ptr=a;
	printf("Display array values");
	for(i=0;i<5;i++)
	{
		printf(" %d",*ptr);
		ptr++;
	}
	return 0;
}
