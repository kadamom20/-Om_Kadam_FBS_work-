#include<stdio.h>

void calculator(int,int,char);
void main()
{
	int num1,num2;
	char op;
	printf("Enter first number:");
	scanf("%d",&num1);
	
	printf("Enter second number:");
	scanf("%d",&num2);
	
	printf("Enter operator(+,-,*,/,%):");
	scanf(" %c",&op);
	
	calculator(num1,num2,op);
}
void calculator(int num1,int num2,char op)
{
	int result;
	
	if(op=='+')
	{
      result=num1+num2;
      printf("Result=%d",result);
	}
	else if(op=='-')
	{
	  result=num1-num2;
      printf("Result=%d",result);	
	}
	else if (op=='*')
	  {
		result=num1*num2;
        printf("Result=%d",result);
	  }
	else if(op=='/')
	   {
		if(num2!=0)
		 {
		  result=num1/num2;
          printf("Result=%d",result);
         }
        else
        {
         printf("Error:Divison by zero is not allowed");
       	}
	   }
	else if(op=='%')
	    {
		 if(num2!=0)
		 {
		  result=num1%num2;
          printf("Result=%d",result);
          }
          else
          {
          printf("Error:Modulus by zero is not allowed");	
		  }
	}
	else
	{
		printf("Invalid operator");
		
	}
}