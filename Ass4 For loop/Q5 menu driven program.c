#include<stdio.h>
void main()
{
	int num,rem,rev=0,sum=0;
	
	
	while(1)
	{
		printf("\nEnter Number:");
	    scanf("%d",&num);
		int choice;
	    printf("\n.............\nEnter 1 to check even or odd\n");
	    printf("Enter 2 to check prime or not\n");
	    printf("Enter 3 to check pallindrome or not\n");
	    printf("Enter 4 to check number is positive,negative or zero\n");
	    printf("Enter 5 to reverse a number\n");
	    printf("Enter 6 to find sum of digits\n");
	    printf("Enter 7 to exit\n.................\n");
	    scanf("%d",&choice);
	if(choice==1)
	{
	    if(num% 2 == 0)
            printf("Number is Even");
        else
            printf("Number is Odd");	
	}
	if(choice==2)
	{
	    int count=0;
	    for(int i=1;i<=num;i++)
        {
        	if(num%i==0)
    	    count++;
        }
    	if(count==2)
	     printf("The number is prime");
    	else
    	 printf("The number is not prime");
	}
	if(choice==3)
	{   
	    int temp;
	    temp=num;
	    for(;num>0;)
	    {
		 rem=num%10;
		 rev=rev*10+rem;
		 num=num/10;
		} 
	    if(temp==rev)
     	 printf("%d is a palindrome number",temp);
	    else
	     printf("%d is not palindrome",temp);
	}
	if(choice==4)
	{
	    if(num>0)
	     printf("Number is Positive");
	    else if(num<0)
	     printf("Number is Negative");
	    else
	     printf("Number is Zero");
	}
   	if(choice==5)
   	{
   	    for(;num>0;)
		{
		 	rem=num%10;
		 	rev=rev*10+rem;
		 	num=num/10;
		}
		printf("Reverse=%d",rev);	
    }
	if(choice==6)
	{
	  for(;num>0;)
	    {
	  	rem=num%10;
	  	sum=sum+rem;
	  	num=num/10;
		}
		printf("Sum of digits=%d",sum);	
	}
	if(choice==7)
	{
		printf("Exit");
		break;
	}
}
}