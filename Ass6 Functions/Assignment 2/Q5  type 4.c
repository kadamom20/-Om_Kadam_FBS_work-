#include<stdio.h>
float discount(int,char);
void main()
{
    int price;
    float result;
    char student;
    printf("Enter price:");
    scanf("%d",&price);
  	
    printf("Are you a student?(y/n):");
    scanf(" %c",&student);
		
    result=discount(price,student);
		
    printf("Discount=%f\n",result);
}
float discount(int price,char student)
{
   float discount=0;	
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
    
    return discount;	
}