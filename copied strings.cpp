#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i;
	printf("enter string 1");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("original string=%s\n",s1);
	printf("copied string= %s",s2);
	return 0;
}
