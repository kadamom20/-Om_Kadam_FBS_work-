#include<stdio.h>
void main()
{
	int arr[100],brr[100],crr[100];
	printf("Enter the 5 element of arr:");
	for(int i=0;i<5;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("Enter the 7 element of brr:");
	for(int i=0;i<7;i++)
	{
		scanf("%d",&brr[i]);
	}
	
	printf("\narr will be:");
	for(int i=0;i<5;i++)
	{
	   printf("%d ",arr[i]);
	}
	
	printf("\nbrr will be:");
	for(int i=0;i<7;i++)
	{
	   printf("%d ",brr[i]);
	}
	
	for(int i=0;i<5;i++)
	{
	   crr[i]=arr[i];
	}
	
	
	for(int i=5,j=0;i<12;i++,j++)
	{
	   crr[i]=brr[j];
	}
  
  printf("\ncrr will be: ");
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", crr[i]);
    }

	
	
}