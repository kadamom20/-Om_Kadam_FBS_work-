#include<stdio.h>
int evenOdd(int);
void main()
{
    int num,result;
	printf("Enter a number:");
	scanf("%d",&num);
	
	result=evenOdd(num);
    
	if(num%2==0)
	 printf("Number is even");
	else
	 printf("Number is odd");
	 	
}
int evenOdd(int num)
{
	return num%2;
}