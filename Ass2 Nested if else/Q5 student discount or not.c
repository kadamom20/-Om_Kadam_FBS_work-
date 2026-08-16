#include<stdio.h>
void main()
{
  int price;
  float discount=0;
  char student;
  printf("Enter price:");
  scanf("%d",&price);
  	
  printf("Are you a student?(y/n):");
  scanf(" %c",&student);
  
  if(student=='y')
  {
  	if(price>500)
  	 discount=price*20/100;
  	else
  	 discount=price*10/100; 
  }
  else if(price>600)
  {
   discount=price*15/100;
  }
  else
    discount=0;
    
    printf("Discount=%f\n",discount);
    printf("Final Price=%f",price-discount);
}
