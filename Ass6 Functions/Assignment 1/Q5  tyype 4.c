#include<stdio.h>
int voting(int age);

void main()
{
	int result;
	int age;
	printf("Enter Age:");
	scanf("%d",&age);
	result=voting(age);
	
	if(result==1)
	 printf("Person is eligible to vote");
	else
	 printf("Person is not eligible to vote");
}
int voting(int age)
{
	
	if(age>=18)
	 return 1;	
	else
     return 0;
}