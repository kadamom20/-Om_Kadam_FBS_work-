#include<stdio.h>
void voting();

void main()
{
	voting();
}
void voting()
{
	int age;
	printf("Enter Age:");
	scanf("%d",&age);
	if(age>=18)
	 printf("Person is eligible to vote");	
	else
     printf("Person is not eligible to vote");
}