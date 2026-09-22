#include<stdio.h>
double salary();

void main()
{
	double result;
	result=salary();
	
	printf("Total salary is %lf",result);
}
double salary()
{
	double bs;
	printf("Enter basic salary:");
	scanf("%lf",&bs);
	
	double ts,da,hra,ta;
	if(bs<=5000)
	{
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
	}
	else
	{
	  	da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;	
	}
	ts=bs+da+hra+ta;
	return ts;
	
}