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
	
	
	int ele,index=-1;
	printf("\nEnter the element:");
	scanf("%d",&ele);
	for(int i=0;i<5;i++)
	{
		if(arr[i]==ele)
		{
			index=i;
			break;
		}
	}
	if(index==-1)
	 printf("Not Found");
	else
	  printf("Found at %d index",index);
}