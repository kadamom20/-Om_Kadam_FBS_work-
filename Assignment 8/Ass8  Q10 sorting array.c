#include<stdio.h>
void main()
{
	int arr[5];
	int ci=5;
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

	
	for(int i=0;i<ci-1;i++)
		{
			for(int j=0;j<ci-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;					
				}
				printf("The sorted Array Will be:%d ",arr[j]);
			}
			printf("\n");
		}
	}
