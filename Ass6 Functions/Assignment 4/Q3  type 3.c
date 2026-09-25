#include<stdio.h>
void Isperfect(int);

void main()
{
	int n;
	printf("Enter a number:");   
    scanf("%d",&n);
	Isperfect(n);
}
void Isperfect(int n)
{
	int i,sum=0;
         
    for(i=1;i<n;i++)          
    {
        if(n%i==0)       
        {
          sum=sum+i;     
        }
    }
     if(sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

}