#include<stdio.h>
int main()
{
	int n,f=0,s=1,t;
	printf("enter size of the series");
	scanf("%d",&n);
	printf("%d %d ",f,s);
	t=f+s;
	while(t<=n)
	{
		printf(" %d",t);
		f=s;
		s=t;
		t=f+s;
	}
	return 0;
}
