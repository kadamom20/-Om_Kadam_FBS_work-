#include<stdio.h>
void main()
{
	for(int row=1;row<=5;row++)
	{
		for(int col=1;col<=5;col++)
		{
		 if(row==1 ||
		 row==5 ||
		 col==1 ||
		 col==5 ||
		 row==col)
		  printf("* ");
		 else
		 printf("  ");
		}
	    printf("\n");	
	}
}