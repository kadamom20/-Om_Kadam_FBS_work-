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
   int i=2;
   
   while(i<n)
    {
     if(n%i==0) 
	 {
        printf("Not Prime");
        return;
     }
        i++;
    }
    printf("Prime");    
}
