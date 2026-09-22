#include<stdio.h>
void palindrome(int);
void main()
{
	int num;
	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	palindrome(num);
}
void palindrome(int num)
{
	int first,last;
	
	first=num/100;
	last=num%10;
	
	if(first==last)
	 printf("%d is a palindrome number",num);
	else
	  printf("%d is not  palindrome number",num);
}