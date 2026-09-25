#include<stdio.h>
void Isprime(int);

void main()
{
	int n;
    printf("Enter a number:");
    scanf("%d",&n);
	Isprime(n);
}

void Isprime(int n)
{
	int i,count=0;
    
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	count++;
    	    
	}
	 if(count==2)
	  printf("The number is prime");
    	else
    	printf("The number is not prime");
	
}