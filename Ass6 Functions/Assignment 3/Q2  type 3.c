#include<stdio.h>

void table(int);

void main()
{
	int i=1,n;
	printf("Enter a number:");
    scanf("%d",&n);
	table(n);
}

void table(int n)
{
	
	while(i<=10)
	{
		printf("%d ",n*i);
		i++;
	}
}