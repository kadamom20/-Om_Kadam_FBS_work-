#include<stdio.h>
void display();

void main()
{
	display();
}
void display()
{
	int i=1;
	while(i<=10)
	{
		printf("%d ",i);
		i++;
	}
}