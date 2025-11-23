#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int x;
	printf("enter string 1 name");
	scanf("%s",s1);
	printf("enter string 2 name");
	scanf("%s",s2);
	x=strcmp(s1,s2);
	if(x==0)
	printf("Both strings are equal ");
	else
	printf("Both strings are  not equal ");
	return 0;
}
