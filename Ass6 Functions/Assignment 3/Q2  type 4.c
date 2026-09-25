#include<stdio.h>

int table(int);

void main()
{
	int n,result;
	printf("Enter a number:");
    scanf("%d",&n);
	result=table(n);
}

int table(int n)
{
	int i=1;
	while(i<=10)
	{
		printf("%d ",n*i);
		i++;
	}
	return 0;
}