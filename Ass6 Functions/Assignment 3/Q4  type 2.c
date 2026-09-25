#include<stdio.h>
int Isprime();

void main()
{
	int result;
	result=Isprime();
	if(result==1)
	{
		printf("Not Prime");
	}
	else
	{
		printf("Prime");
	}
}

int Isprime()
{
   int n,i=2;
   printf("Enter a number:");
   scanf("%d",&n);
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
