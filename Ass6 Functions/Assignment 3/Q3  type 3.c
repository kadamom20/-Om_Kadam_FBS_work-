#include<stdio.h>
void sum(int,int);

void main()
{
    int start,end;
	printf("Enter start and end:");
    scanf("%d %d",&start,&end);	
    
    sum(start,end);
}

void sum(int start,int end)
{
	int sum=0;
    while (start<=end)
    {
    	sum =sum+start;
        start++;
	}
      printf("Sum=%d",sum);
}