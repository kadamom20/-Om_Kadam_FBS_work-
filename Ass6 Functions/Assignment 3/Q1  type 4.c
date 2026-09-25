#include<stdio.h>
int display(int);

void main()
{
	int result;
	result=display(10);
}

int display(int n)
{
	int i=1;
	while(i<=10)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}