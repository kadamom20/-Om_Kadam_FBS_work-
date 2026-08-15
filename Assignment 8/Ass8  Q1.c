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
	
int min=arr[0];
int max=arr[0];

for(int i=1;i<5;i++)
{
    if(arr[i]<min)
        min=arr[i];

    if(arr[i]>max)
        max=arr[i];
}

printf("\nMinimum element=%d",min);
printf("\nMaximum element=%d",max);	
}