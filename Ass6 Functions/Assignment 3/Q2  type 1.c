#include<stdio.h>

void table();

void main()
{
	table();
}

void table()
{
	int i=1,n;
	printf("Enter a number:");
    scanf("%d",&n);
	while(i<=10)
	{
		printf("%d ",n*i);
		i++;
	}
}