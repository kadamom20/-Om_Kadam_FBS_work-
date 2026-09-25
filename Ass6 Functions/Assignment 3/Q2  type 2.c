#include<stdio.h>

int table();

void main()
{
	int result;
	result=table();
}

int table()
{
	int i=1,n;
	printf("Enter a number:");
    scanf("%d",&n);
	while(i<=10)
	{
		printf("%d ",n*i);
		i++;
	}
	return 0;
}