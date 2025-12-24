#include<stdio.h>
int main()
{
	int x=10,p,q,r,s;
	p=++x;
	printf("p=%d\n",p);
	q=x--;
	printf("q=%d\n",q);
	r=x++;
	printf("r=%d\n",r);
	s=--x;
	printf("s=%d",s);
	return 0;
}
