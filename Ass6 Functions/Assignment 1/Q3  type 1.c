#include<stdio.h>
void year();
void main()
{	
	year();
}

void year()
{
	int year;
    printf("enter the year:");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	  printf("Year is leap");
	else
	  printf("Year is not leap"); 	
}