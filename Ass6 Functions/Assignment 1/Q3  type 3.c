#include<stdio.h>
void checkyear(int);
void main()
{	
    int year;
    printf("enter the year:");
	scanf("%d",&year);
	checkyear(year);
}

void checkyear(int year)
{
    if(year%4==0 && year%100!=0 || year%400==0)
	  printf("Year is leap");
	else
	  printf("Year is not leap"); 	
}