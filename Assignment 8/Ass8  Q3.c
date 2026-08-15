#include<stdio.h>
void main()
{
    int arr[5];
	printf("Enter the values:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array will be:");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}	
	
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
m