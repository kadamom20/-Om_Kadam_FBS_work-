#include<stdio.h>
void main()
{
	int arr[5],temp;
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
	
    for(int i=0;i<5/2;i++)
	{
        temp=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=temp;
    }

    printf("\nReverse array: ");

    for(int i=0;i<5;i++)
	{
        printf("%d ",arr[i]);
    }	
}

