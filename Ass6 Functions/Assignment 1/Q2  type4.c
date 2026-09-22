#include<stdio.h>
int palindrome(int num);
void main()
{
	int num,result;
	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	result= palindrome(num);
	
	if(result==1)
	 printf("%d is palindrome number",num);
	else
	  printf("%d is not a palindrome number",num);
	
	
}
int palindrome(int num)
{
	int first,last;

    first=num/100;
    last=num%10;

    if(first==last)
        return 1;
    else
        return 0;
}