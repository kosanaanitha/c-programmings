#include<stdio.h>
int main()
{
	int s1,s2,s3,sum,per;
	printf("enter three subject marks");
	scanf("%d%d%d",&s1,&s2,&s3);
	sum=s1+s2+s3;
	per=sum/3;
	printf("percentage=%d",per);
	if(s1>35&&s2>35&&s3>35)
	{
		if(per>95)
		printf("\nA GRADE");
		else if(per>75)
		printf("\nB GRADE");
		else if(per>60)
		printf("\nC GRADE");
	
	}
	else
	printf("failed");
	return 0;
}
