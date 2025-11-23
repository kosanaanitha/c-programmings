#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,i,j;
	printf("enter row & column sizes");
	scanf("%d%d",&r1,&c1);
	printf("enter a-matrix values");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter b-matrix values");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("result matrix is \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" %d",c[i][j]);
        }
        printf("\n");
	}
	
	return 0;
}
