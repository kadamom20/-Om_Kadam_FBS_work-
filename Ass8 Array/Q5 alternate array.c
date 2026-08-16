#include<stdio.h>
void main()
{
	int arr[100],n;
	printf("Enter size of array:");
	scanf("%d",&n);
	 printf("Enter the values:");
	for(int i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	}
	 printf("Array will be:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nAlternate elements are:");
	for(int i=1;i<n;i+=2)
	{
		printf("%d ",arr[i]);
	}
}