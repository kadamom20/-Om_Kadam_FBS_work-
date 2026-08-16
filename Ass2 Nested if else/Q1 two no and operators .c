void main()
{
	int num1,num2,result;
	char op;
	printf("Enter first number:");
	scanf("%d",&num1);
	
	printf("Enter second number:");
	scanf("%d",&num2);
	
	printf("Enter operator(+,-,*,/,%):");
	scanf(" %c",&op);
	
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