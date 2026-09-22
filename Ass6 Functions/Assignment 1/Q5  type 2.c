#include<stdio.h>
int voting();

void main()
{
	int result;
	result=voting();
	if(result==1)
	 printf("Person is eligible to vote");
	else
	 printf("Person is not eligible to vote");
}
int voting()
{
	int age;
	printf("Enter Age:");
	scanf("%d",&age);
	if(age>=18)
	 return 1;	
	else
     return 0;
}