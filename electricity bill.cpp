#include<stdio.h>
int main()
{
	int units;
	float amount,charge,totalamount;
	printf("enter units");
	scanf("%d",&units);
	if(units<=100)
	{
		amount=units*2;
		charge=20;
	}
	else if(units<=200)
	{
	amount=units*4;
	charge=40;
	}
	else if(units<=300)
	{
	amount=units*6;
	charge=60;
	}
	else
	{
	amount=units*8;
	charge=80;
	}
	totalamount=amount+charge;
	printf("electricity bill=%2f",totalamount);
	return 0;
}
