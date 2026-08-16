#include<stdio.h>
void main()
{
	int arr[10],n,count;
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
	printf("\nPrime numbers in array:");
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=1;j<=arr[i];j++)
		{
		  if(arr[i]%j==0)
		  {
		  	count++;
		  }
		}
		if(count==2)
		{
			printf("%d ",arr[i]);
		}
	}
}