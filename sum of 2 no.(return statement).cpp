#include<stdio.h>
int sum(int ,int);
int main()
{
	int x,y,z;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	z=sum(x,y);
	printf("sum=%d",z);
	return 0;
}
int sum(int x,int y)
{
	return (x+y);
}
