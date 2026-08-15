#include<stdio.h>
void main()
{
   int num=1;
   for(int row=1;row<=4;row++)
  {
   for(int col=1;col<=row;col++)	
   {
   	if(num<=10)
   	{
   		printf("%d ",num);
   		num++;
	   }
  
   } 
    printf("\n");
 }	
}