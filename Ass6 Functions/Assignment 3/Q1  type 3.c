#include<stdio.h>
void display(int);

void main()
{
	display(10);
}
void display(int n)
{
	int i=1;
	while(i<=10)
	{
		printf("%d ",i);
		i++;
	}
}