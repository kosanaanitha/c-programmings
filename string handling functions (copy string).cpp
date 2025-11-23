#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter string 1 name");
	scanf("%s",s1);
	strcpy(s2,s1);
	printf("original string=%s\n",s1);
	printf("copied string=%s",s2);
	return 0;
}
