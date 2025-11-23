#include<stdio.h>
int main()
{
	int a[10][10],r1,c1,i,j;
	printf("Enter A-matrix row & column sizes: ");
    scanf("%d%d", &r1, &c1);
	printf("enter a-matrix values");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("transpose matrix is : \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" %d",a[i][j]);
		}
        printf("\n");
	}
	
	return 0;
}
