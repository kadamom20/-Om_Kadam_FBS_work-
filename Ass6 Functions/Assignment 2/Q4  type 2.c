#include<stdio.h>
int result();
void main()
{
	int ans;
	ans=result();
	if(ans==1)
	 printf("Distinction");
	else if(ans==2)
	 printf("First class");
	else if(ans==3)
	 printf("Second class");
	else if(ans==4)
	 printf("Pass class");
	else
	 printf("Fail");
	
}

int result()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	
	if(marks>=75)
	return 1;
	
	else if(marks<75 && marks>=65)
	return 2;
	
	
	else if(marks<65 && marks>=55)
     return 3;
	
	else if(marks<55 && marks>=40)
	return 4;
	
	else
	return 0;
}