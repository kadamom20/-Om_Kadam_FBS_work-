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
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("\n%d is even",arr[i]);
		}
		else
		{
		 printf("\n%d is odd",arr[i]);
		}
}
}