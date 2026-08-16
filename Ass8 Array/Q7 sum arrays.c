#include<stdio.h>
void main()
{
	int arr[5],brr[5];
	int crr[5];
	printf("Enter the 5 element of arr:");
	for(int i=0;i<5;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("Enter the 5 element of brr:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	
	printf("\narr will be:");
	for(int i=0;i<5;i++)
	{
	   printf("%d ",arr[i]);
	}
	
	printf("\nbrr will be:");
	for(int i=0;i<5;i++)
	{
	   printf("%d ",brr[i]);
	}
	
	for(int i=0;i<5;i++)
	{
	  crr[i]=arr[i]+brr[i];	
	}
	printf("\ncrr will be:");
	for(int i=0;i<5;i++)
	{
		printf("%d ",crr[i]);
	}
}