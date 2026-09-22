#include<stdio.h>
int checkDivisibility(int);
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int result=checkDivisibility(num);
	
	if(result==1)
	 printf("Divisible by both");
	else if(result==2)
	 printf("Divisible by 3 but not by 5");
	else if(result==3)
	 printf("Divisible by 5 but not by 3");
	else
	 printf("Divisible by None");
}
int checkDivisibility(int num)
{
if(num%3==0 && num%5==0)
	  return 1;
	
	else if(num%3==0)
	  return 2;
	
	else if(num%5==0)
	  return 3;
	
	else
		return 0;
		
}