#include<stdio.h>
int main()
{
	int x,y,AND,OR;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	AND=x&y;
	printf("AND=%d",AND);
	OR=x|y;
	printf(" OR=%d",OR);
	return 0;
}
