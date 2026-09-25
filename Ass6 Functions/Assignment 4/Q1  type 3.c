#include<stdio.h>
void Isarmstrong(int );

void main()
{
	int n;
	printf("Enter Range:");
	scanf("%d",&n);
	
	printf("Armstrong numbers are:\n");
	
	Isarmstrong(n);
	
}
void Isarmstrong(int n)
{
	int num,rem,sum;
    for(int i=1;i<=n;i++)
	{
		num=i;
		sum=0;
		while(num>0)
		{
			rem=num%10;
			sum=sum+(rem*rem*rem);
			num=num/10;
		}
		if(sum==i)
		printf("%d ",i);
	}
}