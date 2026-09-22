#include<stdio.h>
int evenOdd();
void main()
{ 
    int result;
	result=evenOdd();
    
	if(result==0)
	 printf("Number is even");
	else
	 printf("Number is odd");
    	
}
int evenOdd()
{ 
    int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	return num%2;
	
}