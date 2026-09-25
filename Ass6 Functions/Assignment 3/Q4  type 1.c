#include<stdio.h>
void Isprime();

void main()
{
	Isprime();
}

void Isprime()
{
   int n,i=2;
   printf("Enter a number:");
   scanf("%d",&n);
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
