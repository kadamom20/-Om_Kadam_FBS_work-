#include<stdio.h>
double salary(double bs);

void main()
{
	double result;
	double bs;
	printf("Enter basic salary:");
	scanf("%lf",&bs);
	
	result=salary(bs);
	
	printf("Total salary is %lf",result);
}
double salary(double bs)
{
	
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