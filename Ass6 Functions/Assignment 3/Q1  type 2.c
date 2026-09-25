#include<stdio.h>
int display();

void main()
{
	int result;
	result=display();
}

int display()
{
	int i=1;
	while(i<=10)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}