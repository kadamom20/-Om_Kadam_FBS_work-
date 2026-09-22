#include<stdio.h>
int palindrome();
void main()
{
	int result;
	result=palindrome();
	
	if(result==1)
	 printf("palindrome number");
	else
	  printf("Not a palindrome number");
}
int palindrome()
{
	int num,first,last;
	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	
	first=num/100;
	last=num%10;
	
	if(first==last)
	 return 1;
	else
	 return 0;
}