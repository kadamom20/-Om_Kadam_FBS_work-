#include<stdio.h>
void Isstrong(int);

void main()
{
	int n;
	printf("Enter Range:");
	scanf("%d",&n);
	
	printf("Strong numbers are:");
	Isstrong(n);
}
void Isstrong(int n)
{
	int num,rem,sum,fact;
	
   
    for(int i=1;i<=n;i++)
	{
	  num=i;
	  sum=0;
	  
	  while(num>0)
	  {
	  	rem=num%10;
	  	fact=1;
	  	
	  	for(int j=1;j<=rem;j++)
	  	{
	  		fact=fact*j;
		  }
		  sum=sum+fact;
		  num=num/10;
	  }	
	  if(sum==i)
	  printf("%d ",i);
	}	
	
	
}