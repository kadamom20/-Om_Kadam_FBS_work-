#include<stdio.h>
int Isprime(int);

void main()
{
	int n,result;
	printf("Enter a number:");
    scanf("%d",&n);
	result=Isprime(n);
	if(result==1)
		printf("Not Prime");
	else
	    printf("Prime");
	  
}

int Isprime(int n)
{
   int i=2;
   
   while(i<n)
    {
     if(n%i==0) 
	 {
        return 1;
     }
        i++;
    }
    return 0;    
}
