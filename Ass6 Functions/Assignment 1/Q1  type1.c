#include<stdio.h>
void evenOdd();
void main()
{
  evenOdd();	
}
void evenOdd()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0)
	 printf("Number is even");
	else
	 printf("Number is odd");
}