#include<stdio.h>
void main()
{
	int n,num,rem,sum;
	printf("Enter Range:");
	scanf("%d",&n);
	
	printf("Armstrong numbers are:\n");
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