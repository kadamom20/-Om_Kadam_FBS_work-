#include<stdio.h>
int year();
void main()
{
	int result;
	result=year();
	
    if(result==1)
	  printf("Year is leap");
	else
	  printf("Year is not leap"); 	
}

int year()
{
	int year;
    printf("enter the year:");
	scanf("%d",&year);
		
	  
	if(year%4==0 && year%100!=0 || year%400==0)
	 return 1;
	else
	 return 0;
}