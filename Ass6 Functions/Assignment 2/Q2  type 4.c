#include<stdio.h>

int triangle(int,int,int);

void main()
{
	int a,b,c,result;
    printf("Enter three sides:");
    scanf("%d %d %d",&a,&b,&c);
    result=triangle(a,b,c);
    if(result==1)
     printf("Triangle is Equilateral");
    else if(result==2)
     printf("Triangle is Isoscales");
    else if(result==3)
     printf("Triangle is Scalene");
    else
     printf("Not a valid Triangle");
  
}

int triangle(int a,int b,int c)
{
  if((a+b>c)&&(a+c>b)&&(b+c>a))
  {
   if(a==b)
   {
   	if(b==c)
   	 return 1;
   	else
   	 return 2;
   }
   else
    {
        if (b == c)
                return 2;
          else 
		  {
                if (a == c)
                    return 2;
                else
                    return 3;
            }
        
	}
}
else
  {
  	return 0;
  }	
}