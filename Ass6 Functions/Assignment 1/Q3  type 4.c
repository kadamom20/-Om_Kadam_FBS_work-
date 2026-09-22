#include<stdio.h>
int checkyear(int year);
void main()
{
	int year,result;
	printf("enter the year:");
	scanf("%d",&year);
	
	result=checkyear(year);
	
	if(result==1)
	 printf("Year is Leap");
	else
	 printf("Year is not leap");
	 
	 
}

int checkyear(int year)
{
	 if(year%4==0 && year%100!=0 || year%400==0)
	  return 1;
	else
	  return 0; 	
}