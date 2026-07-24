void main()
{
	int num,first,last;
	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	first=num/100;
	last=num%10;
	if(first==last)
	 printf("%d is a palindrome number",num);
	else
	  printf("%d is not  palindrome number",num);
}