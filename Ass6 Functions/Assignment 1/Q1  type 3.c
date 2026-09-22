#include<stdio.h>
void evenOdd(int num);
void main()
{ 
    int num;
	printf("Enter a number:");
	scanf("%d",&num);
	evenOdd(num);
    	
}
void evenOdd(int num)
{ 
    if(num%2==0)
	 printf("Number is even");
	else
	 printf("Number is odd");
	
}